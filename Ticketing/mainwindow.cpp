#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);

   // m = menuBar()->addMenu(tr("&Login"));
    m = ui->menubar->addMenu(tr("&Login"));

    openLoginMeserosAction = new QAction("&Open Login Meseros",this);
    connect(openLoginMeserosAction, SIGNAL(triggered()), this, SLOT(loginMeseros()));

    openLoginClient = new QAction("&Open Login Clientes",this);
    connect(openLoginClient, SIGNAL(triggered()), this, SLOT(loginClientes()));

    m->addAction(openLoginMeserosAction);
    m->addSeparator();
    m->addAction(openLoginClient);

    ui->lblFeliz->setStyleSheet("color: white");
    ui->lblTacontento->setStyleSheet("color: white");
    ui->GBMain->setStyleSheet("color: white");
    ui->lblOrdena->setStyleSheet("color: white");
    ui->lblMesa->setStyleSheet("color: white");
    ui->lblNombre->setStyleSheet("color: white");

    QPixmap background(":/Resources/imgs/background.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setAutoFillBackground(true);
    this->setPalette(palette);

    /*QPixmap pixmap(":/Resources/imgs/taco.png");
    int w = ui->lblIzquierdo->width();
    int h = ui->lblIzquierdo->height();
    ui->lblIzquierdo->setPixmap(pixmap.scaled(w,h,Qt::IgnoreAspectRatio));

    QPixmap pixmap2(":/Resources/imgs/2.jpeg");
    w = ui->lblDerecho->width();
    h = ui->lblDerecho->height();
    ui->lblDerecho->setPixmap(pixmap2.scaled(w,h,Qt::IgnoreAspectRatio));*/

    /*QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/Isaias/Downloads/Ticketing-SQLite/build-Ticketing-Desktop_Qt_6_0_0_MinGW_64_bit-Debug/bticketing.db");

    QSqlQuery qry;*/

    /*if (database.open())
    {
        qry.exec("CREATE TABLE jefe_meseros(id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY, nombre VARCHAR(40) NOT NULL, apellidop VARCHAR(40) NOT NULL, apellidom VARCHAR(40) NOT NULL, fecha VARCHAR(35) NOT NULL, telefono INTEGER NOT NULL);");
    }
    else
    {
        qDebug()<<"No conexión";
    }*/


        /*

        qDebug() << "Connexion FAILED.";
        qDebug() << "Driver disponible: " << database.drivers();
        qDebug() << "Driver fonctionnel(QMYSQL): " << database.isDriverAvailable("QSQLITE");
        qDebug() << "numero de l'erreur: " << database.lastError().number();
        qDebug() << "database erreur: " << database.lastError().databaseText();
        qDebug() << "driver erreur: " << database.lastError().driverText();
        qDebug() << "type erreur: " << database.lastError().type();*/

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LENombre_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableEmpezarPB();
}

void MainWindow::on_LEMesa_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableEmpezarPB();
}

void MainWindow::enableEmpezarPB()
{
    if((ui->LENombre->text().length() > 0) &&
            (ui->LEMesa->text().length() > 0))
    {
        ui->empezarPB->setEnabled(true);
    }
    else
    {
        ui->empezarPB->setEnabled(false);
    }
}

void MainWindow::enableLogin()
{
    if((ui->LEIDMeseros->text().length() > 0) &&
            (ui->LEPasswordMeseros->text().length() > 0))
    {
        ui->PBLoginMeseros->setEnabled(true);
    }
    else
    {
        ui->PBLoginMeseros->setEnabled(false);
    }
}

void MainWindow::on_empezarPB_clicked()
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(rootDataBase);

    if (database.open())
    {
        QSqlQuery qry;

        QString mesa = ui->LEMesa->text();
        QString usuario = ui->LENombre->text();

       /* qDebug() << "Driver disponible: " << database.drivers();
        qDebug() << "Driver functional(QSQLITE): " << database.isDriverAvailable("QSQLITE");
        //qDebug() << "numero de error: " << database.lastError().number();
        qDebug() << "database erreur: " << database.lastError().databaseText();
        qDebug() << "driver erreur: " << database.lastError().driverText();
        qDebug() << "type erreur: " << database.lastError().type();*/

        qry.prepare("INSERT INTO clientes ("
                    "nombre_cliente,"
                    "id_mesa)"
                    "VALUES (:nombre_cliente,:id_mesa);");

        qry.bindValue(":nombre_cliente", usuario);
        qry.bindValue(":id_mesa", mesa);

        if (qry.exec())
        {
            QMessageBox succes;
            succes.setText("¡Empieza a ordenar!");
            succes.setIcon(QMessageBox::Information);

            MenuWidgets* m = new MenuWidgets();

            m->cargarProductos();
            m->showMaximized();
            m->show();
            this->close();
            m->cargarWidgets();

            succes.exec();

        }
        else
        {
            QMessageBox succes;
            succes.setText("¡No se pudo iniciar sesión!");
            succes.setIcon(QMessageBox::Warning);
            succes.exec();
        }
        database.close();
    }
    else
    {
        QMessageBox message;
        message.setText("No se pudo conectar con la base de datos");
        message.setIcon(QMessageBox::Warning);
        message.exec();

    }


    ui->LENombre->clear();
    ui->LEMesa->clear();

}

void MainWindow::loginMeseros()
{
    ui->SWMain->setCurrentIndex(1);
}

void MainWindow::loginClientes()
{
    ui->SWMain->setCurrentIndex(0);
}

void MainWindow::on_PBLoginMeseros_clicked()
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(rootDataBase);
    if (database.open())
    {
        QSqlQuery qry;

        QString id = ui->LEIDMeseros->text();
        QString contra = ui->LEPasswordMeseros->text();

        //qry.prepare();

//        qry.bindValue(":id", id);
//        qry.bindValue(":contra", contra);


        if (qry.exec("SELECT id, contrasenia FROM gerentes WHERE id ='"+ id +"'AND contrasenia =  '"+contra+"';"))
        {
            int cont = 0;
            while(qry.next())
            {
                cont++;
            }
            if(cont == 1)
            {
                QMessageBox succes;
                succes.setText("¡Bienvenido gerente!");
                succes.setIcon(QMessageBox::Information);

                CRUDGerenteWidget* window = new CRUDGerenteWidget();
                window->showMaximized();
                window->show();

                this->close();
                succes.exec();

            }
            else
            {
                QMessageBox warning;
                warning.setText("¡Identificador o contraseña inválidos o contraseña inválidos!");
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

//Text Changed Event

void MainWindow::on_LEIDMeseros_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableLogin();
}

void MainWindow::on_LEPasswordMeseros_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableLogin();

}
