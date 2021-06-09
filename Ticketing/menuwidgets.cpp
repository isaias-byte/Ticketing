#include "menuwidgets.h"
#include "ui_menuwidgets.h"

MenuWidgets::MenuWidgets(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWidgets)
{
    ui->setupUi(this);
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
            int cont = 0;
            while(qry.next())
            {
                Producto p;

                ++cont;

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
            if(cont != 1)
            {
                QMessageBox warning;
                warning.setText("¡No se encontró el Registro!");
                warning.setIcon(QMessageBox::Warning);
                warning.exec();
            }

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

    qDebug () <<products.size();

}

void MenuWidgets::cargarWidgets()
{

}
