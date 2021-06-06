#include "crudgerentewidget.h"
#include "ui_crudgerentewidget.h"

CRUDGerenteWidget::CRUDGerenteWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CRUDGerenteWidget)
{
    ui->setupUi(this);

    QRegularExpression regexp("[0-9]{0,4}-[0-9]{0,2}-[0-9]{0,2}");
    QValidator* validator = new QRegularExpressionValidator(regexp,this);
    ui->LEFechaJefe->setValidator(validator);

}

CRUDGerenteWidget::~CRUDGerenteWidget()
{
    delete ui;
}

void CRUDGerenteWidget::on_PBNuevoJefe_clicked()
{
    ui->LENombresJefe->setEnabled(true);
    ui->LEApellidoPJefe->setEnabled(true);
    ui->LEApellidoMJefe->setEnabled(true);
    ui->LEFechaJefe->setEnabled(true);
    ui->LETelefonoJefe->setEnabled(true);

    ui->PBGuardarJefe->setEnabled(false);
    ui->PBCancelarJefe->setEnabled(true);
    ui->PBNuevoJefe->setEnabled(false);
}

void CRUDGerenteWidget::on_PBCancelarJefe_clicked()
{
    //Clear Line Edits
    ui->LENombresJefe->clear();
    ui->LEApellidoPJefe->clear();
    ui->LEApellidoMJefe->clear();
    ui->LEFechaJefe->clear();
    ui->LETelefonoJefe->clear();
    ui->LEBuscarJefe->clear();


    ui->LENombresJefe->setEnabled(false);
    ui->LEApellidoPJefe->setEnabled(false);
    ui->LEApellidoMJefe->setEnabled(false);
    ui->LEFechaJefe->setEnabled(false);
    ui->LETelefonoJefe->setEnabled(false);

    ui->PBGuardarJefe->setEnabled(false);
    ui->PBCancelarJefe->setEnabled(false);
    ui->PBNuevoJefe->setEnabled(true);

}

void CRUDGerenteWidget::on_PBGuardarJefe_clicked()
{

    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/Isaias/Downloads/Ticketing-SQLite/build-Ticketing-Desktop_Qt_6_0_0_MinGW_64_bit-Debug/bticketing.db");

    ui->LENombresJefe->setEnabled(false);
    ui->LEApellidoPJefe->setEnabled(false);
    ui->LEApellidoMJefe->setEnabled(false);
    ui->LEFechaJefe->setEnabled(false);
    ui->LETelefonoJefe->setEnabled(false);

    ui->PBGuardarJefe->setEnabled(false);
    ui->PBCancelarJefe->setEnabled(false);
    ui->PBNuevoJefe->setEnabled(true);


    if (database.open())
    {
        QSqlQuery qry;

        QString nombre = ui->LENombresJefe->text();
        QString apellidop = ui->LEApellidoPJefe->text();
        QString apellidom = ui->LEApellidoMJefe->text();
        QString fecha = ui->LEFechaJefe->text();
        unsigned long long int telefono = ui->LETelefonoJefe->text().toLongLong();
        //qDebug()<<telefono;
        qry.prepare("INSERT INTO jefe_meseros ("
                    "nombre,"
                    "apellidop,"
                    "apellidom,"
                    "fecha,"
                    "telefono)"
                    "VALUES (:nombre,:apellidop,:apellidom,:fecha,:telefono);");

        qry.bindValue(":nombre", nombre);
        qry.bindValue(":apellidop", apellidop);
        qry.bindValue(":apellidom", apellidom);
        qry.bindValue(":fecha", fecha);
        qry.bindValue(":telefono", telefono);

        if (qry.exec())
        {
            QMessageBox succes;
            succes.setText("¡Agregado exitosamente!");
            succes.setIcon(QMessageBox::Information);
            succes.exec();
            //En caso de que se agreguen :D se limpian los campos
            //Clear Line Edits
            ui->LENombresJefe->clear();
            ui->LEApellidoPJefe->clear();
            ui->LEApellidoMJefe->clear();
            ui->LEFechaJefe->clear();
            ui->LETelefonoJefe->clear();
            ui->LEBuscarJefe->clear();

        }
        else
        {
            QMessageBox succes;
            succes.setText("¡Error al tratar de agregarlo...!");
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

}

void CRUDGerenteWidget::on_PBBuscarJefe_clicked()
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/Isaias/Downloads/Ticketing-SQLite/build-Ticketing-Desktop_Qt_6_0_0_MinGW_64_bit-Debug/bticketing.db");
    if (database.open())
    {
        QSqlQuery qry;

        QString id = ui->LEBuscarJefe->text();



        if (qry.exec("SELECT id, nombre, apellidop, apellidom, fecha, telefono FROM jefe_meseros WHERE id ='"+ id +"';"))
        {
            int cont = 0;
            while(qry.next())
            {
                cont++;
                QString id = qry.value(0).toString();
                QString nombre = qry.value(1).toString();
                QString apellidop = qry.value(2).toString();
                QString apellidom = qry.value(3).toString();
                QString fecha = qry.value(4).toString();
                QString telefono = qry.value(5).toString();
                ui->LENombresJefe->setText(nombre);
                ui->LEApellidoPJefe->setText(apellidop);
                ui->LEApellidoMJefe->setText(apellidom);
                ui->LEFechaJefe->setText(fecha);
                ui->LETelefonoJefe->setText(telefono);
                cont++;
            }
            if(cont == 1)
            {
                QMessageBox succes;
                succes.setText("¡Registro encontrado!");
                succes.setIcon(QMessageBox::Information);


            }
            else
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

void CRUDGerenteWidget::networkReplyReadyRead()
{

}

void CRUDGerenteWidget::on_LETelefonoJefe_textChanged(const QString &arg1)
{
    if(arg1.length() >= 10)
    {
        if((arg1.toLongLong()))
        {
            ui->PBGuardarJefe->setEnabled(true);
        }
        else
        {
            ui->PBGuardarJefe->setEnabled(false);
        }

    }
    else
    {
        ui->PBGuardarJefe->setEnabled(false);
    }
}

void CRUDGerenteWidget::on_LEBuscarJefe_textChanged(const QString &arg1)
{
    if(arg1.length() >= 1)
    {
        if((arg1.toLongLong()))
        {
            ui->PBBuscarJefe->setEnabled(true);
        }
        else
        {
            ui->PBBuscarJefe->setEnabled(false);
        }

    }
    else
    {
        ui->PBBuscarJefe->setEnabled(false);
    }
}
