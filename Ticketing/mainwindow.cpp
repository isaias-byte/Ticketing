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
    palette.setBrush(QPalette::Background, background);
    this->setAutoFillBackground(true);
    this->setPalette(palette);

    QPixmap pixmap(":/Resources/imgs/taco.png");
    int w = ui->lblIzquierdo->width();
    int h = ui->lblIzquierdo->height();
    ui->lblIzquierdo->setPixmap(pixmap.scaled(w,h,Qt::KeepAspectRatioByExpanding));

    QPixmap pixmap2(":/Resources/imgs/2.jpeg");
    w = ui->lblDerecho->width();
    h = ui->lblDerecho->height();
    ui->lblDerecho->setPixmap(pixmap2.scaled(w,h,Qt::KeepAspectRatio));

    /*qDebug()<<"QSslSocket="<<QSslSocket::sslLibraryBuildVersionString();*/

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

void MainWindow::on_empezarPB_clicked()
{
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    //database.setPort(3306);
    database.setPassword("");
    database.setDatabaseName("bticketing");

    if (database.open())
    {
        QSqlQuery qry;

        QString mesa = ui->LEMesa->text();
        QString usuario = ui->LENombre->text();

        qry.prepare("INSERT INTO clientes (nombre_cliente, id_mesa)"
                    "VALUES (usuario, mesa)");
        qry.bindValue(":nombre_cliente", usuario);
        qry.bindValue(":id_mesa", mesa);

        if (qry.exec())
        {
            QMessageBox succes;
            succes.setText("¡Empieza a ordenar!");
            succes.setIcon(QMessageBox::Information);
            succes.exec();

        }
        else
        {
            QMessageBox succes;
            succes.setText("¡No se pudo iniciar sesión!");
            succes.setIcon(QMessageBox::Warning);
            succes.exec();
        }

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
    CRUDGerenteWidget* window = new CRUDGerenteWidget();
    window->showMaximized();
    window->show();

    this->close();
}
