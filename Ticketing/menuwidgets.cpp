#include "menuwidgets.h"
#include "ui_menuwidgets.h"

MenuWidgets::MenuWidgets(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWidgets)
{
    QPixmap background(":/Resources/imgs/background.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setAutoFillBackground(true);
    this->setPalette(palette);
    ui->setupUi(this);

   /* qDebug () <<usuario;
    qDebug () <<mesa;*/

    connect(ui->PBOrdenar, SIGNAL(clicked()), this, SLOT(TicketWidget::recibir_ticket()));

}

MenuWidgets::~MenuWidgets()
{
    delete ui;
}

void MenuWidgets::cargarProductos()
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(rootDataBase);
    if (database.open())
    {
        QSqlQuery qry;

        if (qry.exec("SELECT id, nombre, precio, descripcion, img FROM platillos;"))
        {
            //int cont = 0;
            while(qry.next())
            {
                Producto p;

                //++cont;

                QString id = qry.value(0).toString();
                QString nombre = qry.value(1).toString();
                double precio = qry.value(2).toDouble();
                QString descripcion = qry.value(3).toString();
                QByteArray byteArray = qry.value(4).toByteArray();

                p.setNombre(nombre);
                p.setPrecio(precio);
                p.setDescripcion(descripcion);
                p.setImg(byteArray);

                products.push_back(p);
            }
           /* if(cont != 1)
            {
                QMessageBox warning;
                warning.setText("¡No se encontró el Registro!");
                warning.setIcon(QMessageBox::Warning);
                warning.exec();
            }*/

        }
        else
        {
            QMessageBox succes;
            succes.setText("¡Tenemos un problema con la base de datos...!");
            succes.setIcon(QMessageBox::Warning);
            succes.exec();
        }
        qry.clear();
        database.close();
    }
    else
    {
        QMessageBox message;
        message.setText("¡Tenemos un problema con la base de datos...!");
        message.setIcon(QMessageBox::Warning);
        message.exec();

    }
}

void MenuWidgets::cargarWidgets()
{
    if ( ui->GLProductos->layout() != NULL )
    {
        QLayoutItem* item;
        while ( ( item = ui->GLProductos->layout()->takeAt(0)) != NULL )
        {
            delete item->widget();
            delete item;
        }
    }

    QString resultRe("");
    resultRe.append("*");

    if( ui->LEBuscarMenu->text().size() != 0 ){
        resultRe.append(ui->LEBuscarMenu->text().toLower());
    }
    else
    {
           resultRe.append("[!x]");
    }

    resultRe.append("*");

    QString wildcardSearch = QRegularExpression::wildcardToRegularExpression(resultRe);
    QRegularExpression reSearch(wildcardSearch);



    //row y c son para determinar la fila y columna.
    //j contar los objetos que tengan match a diferencia de i que cuenta todos
    int row = 0, c = 0, j = 0;
    for(unsigned long long i (0) ; i != products.size() ; ++i)
    {

        QRegularExpressionMatch matchSearch = reSearch.match(products[i].getNombre().toLower());

        if (matchSearch.hasMatch())
        {
            ProductWidget* r = new ProductWidget();

            r->setNombre(products[i].getNombre());
            r->setDescripcion(products[i].getDescripcion());
            r->setPrecio(QString("%2").arg(products[i].getPrecio()));
            r->setImg(products[i].getImg());
            r->showProduct();

            if(j % 5 == 0 )
            {
                ++row;
                c = 0;
            }

            connect(r, SIGNAL(addItem(QString, QString, QString, QByteArray, int)), this, SLOT(addToCart (QString, QString, QString, QByteArray, int)));
            ui->GLProductos->addWidget(r , 1 + row , 1 + c);
            ++c;
            ++j;
        }

    }


}

void MenuWidgets::cargarDatos(QString value, QString value2)
{
    usuario = value;
    mesa = value2;
    ui->lblCliente->setText(usuario);
    ui->lblMesa->setText(mesa);

}

void MenuWidgets::on_LEBuscarMenu_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    cargarWidgets();
}

void MenuWidgets::addToCart(QString nombre, QString precio, QString observacion, QByteArray image, int value)
{
    if ( ui->GLCarrito->layout() != NULL )
    {
        QLayoutItem* item;
        while ( ( item = ui->GLCarrito->layout()->takeAt(0)) != NULL )
        {
            delete item->widget();
            delete item;
        }
    }

    Producto p;

    p.setNombre(nombre);
    p.setPrecio(precio.toDouble());
    p.setObservacion(observacion);
    p.setImg(image);
    p.setCantidad(QString::number(value));

    cart.push_back(p);

    //row y c son para determinar la fila y columna.
    //j contar los objetos que tengan match a diferencia de i que cuenta todos
    int row = 0, c = 0, j = 0;
    for(unsigned long long i (0) ; i != cart.size() ; ++i)
    {

        ProductWidget* r = new ProductWidget();

        r->setNombre(cart[i].getNombre());
        r->setPrecio(QString("%2").arg(cart[i].getPrecio()));
        r->setImg(cart[i].getImg());
        r->setObservacion(cart[i].getObservacion());
        r->setCantidad(QString::number(value));
        r->showProduct();

        if(j % 5 == 0 )
        {
            ++row;
            c = 0;
        }

        ui->GLCarrito->addWidget(r , 1 + row, 1 + c);
        ++c;
        ++j;
    }

}

void MenuWidgets::on_PBOrdenar_clicked()
{
    TicketWidget *ticket;
    ticket = new TicketWidget();
    ticket->recibir_ticket(cart);
    ticket->show();
    emit crear_ticket(cart);

    //Actualizar

    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(rootDataBase);
    QString estatus = "Disponible";

    if (database.open())
    {
        QSqlQuery qry;

        qry.prepare("UPDATE mesas SET "
                    "estatus = '"+ estatus +"' "
                    "WHERE id_mesa ='"+ mesa +"'; ");


        if (qry.exec())
        {
            QMessageBox succes;
            succes.setText("¡Vuelva pronto!");
            succes.setIcon(QMessageBox::Information);
            //En caso de que se actualice :D se limpian los campos
            //Clear Line Edits
            succes.exec();

        }
        else
        {
            QMessageBox succes;
            succes.setText("¡Error al tratar de actualizar!");
            succes.setIcon(QMessageBox::Warning);

            succes.exec();
        }
        qry.clear();
        database.close();

    }
    else
    {
        QMessageBox message;
        message.setText("No se pudo conectar con la base de datos");
        message.setIcon(QMessageBox::Warning);
        message.exec();

    }
    this->close();

}

