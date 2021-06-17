#include "crudgerentewidget.h"
#include "ui_crudgerentewidget.h"
#include <QFileSystemModel>

CRUDGerenteWidget::CRUDGerenteWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CRUDGerenteWidget)
{
    ui->setupUi(this);

    QRegularExpression regexp("[0-9]{0,4}-[0-9]{0,2}-[0-9]{0,2}");
    QValidator* validator = new QRegularExpressionValidator(regexp,this);
    ui->LEFechaJefe->setValidator(validator);

    auto fileSystemModel = new QFileSystemModel(this);
    fileSystemModel->setRootPath(QDir::rootPath());


    /*CREATE TABLE platillos (
        id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, nombre VARCHAR (40)  NOT NULL, precio VARCHAR (20) NOT NULL, descripcion VARCHAR (100) NOT NULL, img BLOB);*/

    /*QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(rootDataBase);
    if (database.open())
    {
        QSqlQuery qry;

        qry.exec("CREATE TABLE platillos ("
                 "id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
                 " nombre VARCHAR (40) NOT NULL,"
                 " precio VARCHAR (20) NOT NULL,"
                 " descripcion VARCHAR (100) NOT NULL,"
                 " img BLOB NOT NULL);");
    }*/
}

CRUDGerenteWidget::~CRUDGerenteWidget()
{
    delete ui;
}

//JEFES DE MESEROS

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
    ui->PBEditarJefe->setEnabled(false);

    edited = false;

    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(rootDataBase);
    if (database.open())
    {
        QSqlQuery qry;

        QString id = ui->LEBuscarJefe->text();

        if (qry.exec("SELECT id, nombre, apellidop, apellidom, fecha, telefono FROM jefe_meseros;"))
        {

            while(qry.next())
            {
                unsigned long long id = qry.value(0).toLongLong();

                ++id;
                QString identificador = QString::number(id);
                ui->LEIDJefe->setText(identificador);
            }

        }
        else
        {
            QMessageBox succes;
            succes.setText("¡Tenemos un problema con la base de datos!");
            succes.setIcon(QMessageBox::Warning);
            succes.exec();
        }
        qry.clear();
        database.close();
    }
    else
    {
        QMessageBox message;
        message.setText("¡Tenemos un problema con la base de datos!");
        message.setIcon(QMessageBox::Warning);
        message.exec();

    }
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
    ui->LEIDJefe->clear();


    ui->LENombresJefe->setEnabled(false);
    ui->LEApellidoPJefe->setEnabled(false);
    ui->LEApellidoMJefe->setEnabled(false);
    ui->LEFechaJefe->setEnabled(false);
    ui->LETelefonoJefe->setEnabled(false);

    ui->PBGuardarJefe->setEnabled(false);
    ui->PBCancelarJefe->setEnabled(false);
    ui->PBEditarJefe->setEnabled(false);
    ui->PBEliminarJefe->setEnabled(false);
    ui->PBNuevoJefe->setEnabled(true);

    edited = false;

}

void CRUDGerenteWidget::on_PBGuardarJefe_clicked()
{

    if (!edited)
    {
        //Agregar

        QSqlDatabase database;
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName(rootDataBase);

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

            qry.prepare("INSERT INTO jefe_meseros ("
                        "nombre,"
                        "apellidop,"
                        "apellidom,"
                        "fecha,"
                        "telefono,"
                        "id_gerente)"
                        "VALUES (:nombre,:apellidop,:apellidom,:fecha,:telefono,:id_gerente);");

            qry.bindValue(":nombre", nombre);
            qry.bindValue(":apellidop", apellidop);
            qry.bindValue(":apellidom", apellidom);
            qry.bindValue(":fecha", fecha);
            qry.bindValue(":telefono", telefono);
            qry.bindValue(":id_gerente", id_gerente);

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
                ui->LEIDJefe->clear();

            }
            else
            {
                QMessageBox succes;
                succes.setText("¡Error al tratar de agregarlo...!");
                succes.setIcon(QMessageBox::Warning);
                ui->LENombresJefe->clear();
                ui->LEApellidoPJefe->clear();
                ui->LEApellidoMJefe->clear();
                ui->LEFechaJefe->clear();
                ui->LETelefonoJefe->clear();
                ui->LEBuscarJefe->clear();
                ui->LEIDJefe->clear();
                succes.exec();
            }
            qry.clear();
            database.close();
            edited = false;
        }
        else
        {
            QMessageBox message;
            message.setText("No se pudo conectar con la base de datos");
            message.setIcon(QMessageBox::Warning);
            message.exec();

        }
    }
    else if (edited)
    {

        //Actualizar

        QSqlDatabase database;
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName(rootDataBase);

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

            QString id = ui->LEIDJefe->text();
            QString nombre = ui->LENombresJefe->text();
            QString apellidop = ui->LEApellidoPJefe->text();
            QString apellidom = ui->LEApellidoMJefe->text();
            QString fecha = ui->LEFechaJefe->text();
            unsigned long long int telefono = ui->LETelefonoJefe->text().toLongLong();

            qry.prepare("UPDATE jefe_meseros SET "
                        "nombre = :nombre, "
                        "apellidop = :apellidop, "
                        "apellidom = :apellidom, "
                        "fecha = :fecha, "
                        "telefono = :telefono, "
                        "id_gerente = :id_gerente "
                        "WHERE id ='"+ id +"';");

            qry.bindValue(":nombre", nombre);
            qry.bindValue(":apellidop", apellidop);
            qry.bindValue(":apellidom", apellidom);
            qry.bindValue(":fecha", fecha);
            qry.bindValue(":telefono", telefono);
            qry.bindValue(":id_gerente", id_gerente);

            if (qry.exec())
            {
                QMessageBox succes;
                succes.setText("¡Actualizado exitosamente!");
                succes.setIcon(QMessageBox::Information);
                //En caso de que se actualice :D se limpian los campos
                //Clear Line Edits
                ui->LENombresJefe->clear();
                ui->LEApellidoPJefe->clear();
                ui->LEApellidoMJefe->clear();
                ui->LEFechaJefe->clear();
                ui->LETelefonoJefe->clear();
                ui->LEBuscarJefe->clear();
                ui->LEIDJefe->clear();

                succes.exec();

            }
            else
            {
                QMessageBox succes;
                succes.setText("¡Error al tratar de actualizar!");
                succes.setIcon(QMessageBox::Warning);

                ui->LENombresJefe->clear();
                ui->LEApellidoPJefe->clear();
                ui->LEApellidoMJefe->clear();
                ui->LEFechaJefe->clear();
                ui->LETelefonoJefe->clear();
                ui->LEBuscarJefe->clear();
                ui->LEIDJefe->clear();

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
        edited = false;

    }

}

void CRUDGerenteWidget::on_PBBuscarJefe_clicked()
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(rootDataBase);
    if (database.open())
    {
        QSqlQuery qry;

        QString id = ui->LEBuscarJefe->text();



        if (qry.exec("SELECT id, nombre, apellidop, apellidom, fecha, telefono FROM jefe_meseros WHERE id ='"+ id +"';"))
        {
            int cont = 0;
            while(qry.next())
            {
                ++cont;

                QString id = qry.value(0).toString();
                QString nombre = qry.value(1).toString();
                QString apellidop = qry.value(2).toString();
                QString apellidom = qry.value(3).toString();
                QString fecha = qry.value(4).toString();
                QString telefono = qry.value(5).toString();

                ui->LEIDJefe->setText(id);
                ui->LENombresJefe->setText(nombre);
                ui->LEApellidoPJefe->setText(apellidop);
                ui->LEApellidoMJefe->setText(apellidom);
                ui->LEFechaJefe->setText(fecha);
                ui->LETelefonoJefe->setText(telefono);

                ui->PBGuardarJefe->setEnabled(false);
                ui->PBCancelarJefe->setEnabled(false);
                ui->PBNuevoJefe->setEnabled(false);
                ui->PBEditarJefe->setEnabled(true);
                ui->PBEliminarJefe->setEnabled(true);
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

void CRUDGerenteWidget::on_PBEditarJefe_clicked()
{
    ui->PBGuardarJefe->setEnabled(true);
    ui->PBCancelarJefe->setEnabled(true);
    ui->PBNuevoJefe->setEnabled(false);
    ui->PBEditarJefe->setEnabled(false);
    ui->PBEliminarJefe->setEnabled(false);

    ui->LENombresJefe->setEnabled(true);
    ui->LEApellidoPJefe->setEnabled(true);
    ui->LEApellidoMJefe->setEnabled(true);
    ui->LEFechaJefe->setEnabled(true);
    ui->LETelefonoJefe->setEnabled(true);

    edited = true;
}

void CRUDGerenteWidget::on_PBEliminarJefe_clicked()
{
    //Eliminar

    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(rootDataBase);

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

        QString id = ui->LEIDJefe->text();

        qry.prepare("DELETE FROM jefe_meseros "
                    "WHERE id ='"+ id +"';");

        if (qry.exec())
        {
            QMessageBox succes;
            succes.setText("¡Eliminado exitosamente!");
            succes.setIcon(QMessageBox::Information);
            //En caso de que se actualice :D se limpian los campos
            //Clear Line Edits
            ui->LENombresJefe->clear();
            ui->LEApellidoPJefe->clear();
            ui->LEApellidoMJefe->clear();
            ui->LEFechaJefe->clear();
            ui->LETelefonoJefe->clear();
            ui->LEBuscarJefe->clear();
            ui->LEIDJefe->clear();

            succes.exec();

        }
        else
        {
            QMessageBox succes;
            succes.setText("¡Error al tratar de eliminar!");
            succes.setIcon(QMessageBox::Warning);

            ui->LENombresJefe->clear();
            ui->LEApellidoPJefe->clear();
            ui->LEApellidoMJefe->clear();
            ui->LEFechaJefe->clear();
            ui->LETelefonoJefe->clear();
            ui->LEBuscarJefe->clear();
            ui->LEIDJefe->clear();

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
}


//Text Changed Event

void CRUDGerenteWidget::enableJefe()
{
    if(ui->LENombresJefe->text().length() > 0
            && ui->LEApellidoPJefe->text().length() > 0
            && ui->LEApellidoMJefe->text().length() > 0
            && ui->LEFechaJefe->text().length() > 0
            && ui->LETelefonoJefe->text().length() > 0)
    {
        if (!edited)
        {
            ui->PBGuardarJefe->setEnabled(true);
        }
        else
        {
            ui->PBGuardarJefe->setEnabled(true);
        }
    }
    else
    {
        if (!edited)
        {
            ui->PBGuardarJefe->setEnabled(false);
        }
        else
        {
            ui->PBGuardarJefe->setEnabled(false);
        }
    }
}

void CRUDGerenteWidget::on_LENombresJefe_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableJefe();
}

void CRUDGerenteWidget::on_LEApellidoPJefe_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableJefe();
}

void CRUDGerenteWidget::on_LEApellidoMJefe_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableJefe();
}

void CRUDGerenteWidget::on_LEFechaJefe_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableJefe();
}

void CRUDGerenteWidget::on_LETelefonoJefe_textChanged(const QString &arg1)
{
    if(arg1.length() >= 10)
    {
        enableJefe();

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

            if (arg1.toLongLong() != ui->LEIDJefe->text().toLongLong() && ui->LEIDJefe->text().length() != 0)
            {
                ui->LENombresJefe->clear();
                ui->LEApellidoPJefe->clear();
                ui->LEApellidoMJefe->clear();
                ui->LEFechaJefe->clear();
                ui->LETelefonoJefe->clear();
                ui->LEIDJefe->clear();
            }

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


//PLATILLOS

void CRUDGerenteWidget::on_PBNuevoPlatillos_clicked()
{


    ui->LENombrePlatillos->setEnabled(true);
    ui->LEPrecioPlatillos->setEnabled(true);
    ui->PTEDescripcionPlatillo->setEnabled(true);

    ui->PBGuardarPlatillos->setEnabled(false);
    ui->PBCancelarPlatillos->setEnabled(true);
    ui->PBNuevoPlatillos->setEnabled(false);
    ui->PBEditarPlatillos->setEnabled(false);
    ui->PBEliminarPlatillos->setEnabled(false);
    ui->PBIMGPlatillos->setEnabled(true);

    editePlatillos = false;

    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(rootDataBase);
    if (database.open())
    {
        QSqlQuery qry;

        if (qry.exec("SELECT id, nombre, precio, descripcion FROM platillos;"))
        {

            while(qry.next())
            {
                unsigned long long id = qry.value(0).toLongLong();

                ++id;
                QString identificador = QString::number(id);
                ui->LEIDPlatillos->setText(identificador);
            }

        }
        else
        {
            QMessageBox succes;
            succes.setText("¡Tenemos un problema con la base de datos!");
            succes.setIcon(QMessageBox::Warning);
            succes.exec();
        }
        qry.clear();
        database.close();
    }
    else
    {
        QMessageBox message;
        message.setText("¡Tenemos un problema con la base de datos!");
        message.setIcon(QMessageBox::Warning);
        message.exec();

    }

}

void CRUDGerenteWidget::on_PBGuardarPlatillos_clicked()
{

    if (!editePlatillos)
    {
        //Agregar

        QSqlDatabase database;
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName(rootDataBase);

        ui->LENombrePlatillos->setEnabled(false);
        ui->LEPrecioPlatillos->setEnabled(false);
        ui->PTEDescripcionPlatillo->setEnabled(false);


        ui->PBGuardarPlatillos->setEnabled(false);
        ui->PBCancelarPlatillos->setEnabled(false);
        ui->PBNuevoPlatillos->setEnabled(true);
        ui->PBIMGPlatillos->setEnabled(false);

        if (database.open())
        {
            QSqlQuery qry;

            QString nombre = ui->LENombrePlatillos->text();
            QString descripcion = ui->PTEDescripcionPlatillo->toPlainText();
            QString precio = ui->LEPrecioPlatillos->text();

            qry.prepare("INSERT INTO platillos ("
                        "nombre,"
                        "precio,"
                        "descripcion,"
                        "img,"
                        "id_gerente) VALUES (?,?,?,?,?);");
            qry.addBindValue(nombre);
            qry.addBindValue(precio);
            qry.addBindValue(descripcion);
            qry.addBindValue(byteArray);
            qry.addBindValue(id_gerente);

            if (qry.exec())
            {
                QMessageBox succes;
                succes.setText("¡Agregado exitosamente!");
                succes.setIcon(QMessageBox::Information);
                succes.exec();

                //En caso de que se agreguen :D se limpian los campos
                //Clear Line Edits
                ui->LENombrePlatillos->clear();
                ui->LEPrecioPlatillos->clear();
                ui->PTEDescripcionPlatillo->clear();
                ui->LEIDPlatillos->clear();
                ui->lblIMG->clear();

            }
            else
            {
                QMessageBox succes;
                succes.setText("¡Error al tratar de agregar el registro!");
                succes.setIcon(QMessageBox::Warning);
                //Clear Line Edits
                ui->LENombrePlatillos->clear();
                ui->LEPrecioPlatillos->clear();
                ui->PTEDescripcionPlatillo->clear();
                ui->LEIDPlatillos->clear();
                ui->lblIMG->clear();

                succes.exec();
            }
            qry.clear();
            database.close();
            editePlatillos = false;
        }
        else
        {
            QMessageBox message;
            message.setText("No se pudo conectar con la base de datos");
            message.setIcon(QMessageBox::Warning);
            message.exec();

        }
    }
    else if (editePlatillos)
    {
        //Actualizar

        QSqlDatabase database;
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName(rootDataBase);

        ui->LENombrePlatillos->setEnabled(false);
        ui->LEPrecioPlatillos->setEnabled(false);
        ui->PTEDescripcionPlatillo->setEnabled(false);

        ui->PBGuardarPlatillos->setEnabled(false);
        ui->PBCancelarPlatillos->setEnabled(false);
        ui->PBNuevoPlatillos->setEnabled(true);
        ui->PBIMGPlatillos->setEnabled(false);

        if (database.open())
        {
            QSqlQuery qry;

            QString id = ui->LEIDPlatillos->text();
            QString nombre = ui->LENombrePlatillos->text();
            QString precio = ui->LEPrecioPlatillos->text();
            QString descripcion = ui->PTEDescripcionPlatillo->toPlainText().toStdString().c_str();

            qry.prepare("UPDATE platillos SET "
                        "nombre = '"+ nombre +"', "
                        "precio = '"+ precio +"', "
                        "descripcion = '"+ descripcion +"', "
                        "img = ?"
                        ", "
                        "id_gerente = '"+id_gerente+"' "
                        "WHERE id ='"+ id +"'; ");

            /*qry.addBindValue(nombre);
            qry.addBindValue(precio);
            qry.addBindValue(descripcion);*/
            qry.addBindValue(byteArray);


            if (qry.exec())
            {
                QMessageBox succes;
                succes.setText("¡Actualizado exitosamente!");
                succes.setIcon(QMessageBox::Information);
                //En caso de que se actualice :D se limpian los campos
                //Clear Line Edits
                ui->LENombrePlatillos->clear();
                ui->LEPrecioPlatillos->clear();
                ui->PTEDescripcionPlatillo->clear();
                ui->LEIDPlatillos->clear();
                ui->lblIMG->clear();

                succes.exec();

            }
            else
            {
                QMessageBox succes;
                succes.setText("¡Error al tratar de actualizar!");
                succes.setIcon(QMessageBox::Warning);

                ui->LENombrePlatillos->clear();
                ui->LEPrecioPlatillos->clear();
                ui->PTEDescripcionPlatillo->clear();
                ui->LEIDPlatillos->clear();
                ui->lblIMG->clear();

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
        editePlatillos = false;
    }
}

void CRUDGerenteWidget::on_PBCancelarPlatillos_clicked()
{
    //Clear Line Edits
    ui->LENombrePlatillos->clear();
    ui->LEPrecioPlatillos->clear();
    ui->LEIDPlatillos->clear();
    ui->PTEDescripcionPlatillo->clear();
    ui->lblIMG->clear();

    ui->LENombrePlatillos->setEnabled(false);
    ui->LEPrecioPlatillos->setEnabled(false);
    ui->PTEDescripcionPlatillo->setEnabled(false);

    ui->PBGuardarPlatillos->setEnabled(false);
    ui->PBCancelarPlatillos->setEnabled(false);
    ui->PBEditarPlatillos->setEnabled(false);
    ui->PBEliminarPlatillos->setEnabled(false);
    ui->PBNuevoPlatillos->setEnabled(true);
    ui->PBIMGPlatillos->setEnabled(false);

    byteArray.clear();

    editePlatillos = false;
}

void CRUDGerenteWidget::on_PBEditarPlatillos_clicked()
{
    ui->PBGuardarPlatillos->setEnabled(true);
    ui->PBCancelarPlatillos->setEnabled(true);
    ui->PBNuevoPlatillos->setEnabled(false);
    ui->PBEditarPlatillos->setEnabled(false);
    ui->PBEliminarPlatillos->setEnabled(false);
    ui->PBIMGPlatillos->setEnabled(true);

    ui->LENombrePlatillos->setEnabled(true);
    ui->LEPrecioPlatillos->setEnabled(true);
    ui->PTEDescripcionPlatillo->setEnabled(true);

    editePlatillos = true;
}

void CRUDGerenteWidget::on_PBEliminarPlatillos_clicked()
{
    //Eliminar

    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(rootDataBase);

    ui->LENombrePlatillos->setEnabled(false);
    ui->LEPrecioPlatillos->setEnabled(false);
    ui->PTEDescripcionPlatillo->setEnabled(false);

    ui->PBGuardarPlatillos->setEnabled(false);
    ui->PBCancelarPlatillos->setEnabled(false);
    ui->PBNuevoPlatillos->setEnabled(true);
    ui->PBIMGPlatillos->setEnabled(false);


    if (database.open())
    {
        QSqlQuery qry;

        QString id = ui->LEIDPlatillos->text();

        qry.prepare("DELETE FROM platillos "
                    "WHERE id ='"+ id +"';");

        if (qry.exec())
        {
            QMessageBox succes;
            succes.setText("¡Eliminado exitosamente!");
            succes.setIcon(QMessageBox::Information);
            //En caso de que se actualice :D se limpian los campos
            //Clear Line Edits
            ui->LENombrePlatillos->clear();
            ui->LEPrecioPlatillos->clear();
            ui->PTEDescripcionPlatillo->clear();
            ui->LEIDPlatillos->clear();
            ui->lblIMG->clear();

            succes.exec();

        }
        else
        {
            QMessageBox succes;
            succes.setText("¡Error al tratar de eliminar!");
            succes.setIcon(QMessageBox::Warning);

            ui->LENombrePlatillos->clear();
            ui->LEPrecioPlatillos->clear();
            ui->PTEDescripcionPlatillo->clear();
            ui->LEIDPlatillos->clear();
            ui->lblIMG->clear();

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
}

void CRUDGerenteWidget::on_PBBuscarPlatillos_clicked()
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(rootDataBase);
    if (database.open())
    {
        QSqlQuery qry;

        QString id = ui->LEBuscarPlatillos->text();

        if (qry.exec("SELECT id, nombre, precio, descripcion, img FROM platillos WHERE id ='"+ id +"';"))
        {
            int cont = 0;
            while(qry.next())
            {
                ++cont;

                QString id = qry.value(0).toString();
                QString nombre = qry.value(1).toString();
                QString precio = qry.value(2).toString();
                QString descripcion = qry.value(3).toString();
                byteArray = qry.value(4).toByteArray();

                ui->LEIDPlatillos->setText(id);
                ui->LENombrePlatillos->setText(nombre);
                ui->LEPrecioPlatillos->setText(precio);
                ui->PTEDescripcionPlatillo->insertPlainText(descripcion);

                QPixmap pix;
                pix.loadFromData(byteArray);
                int w = ui->lblIMG->height();
                int h = ui->lblIMG->height();
                ui->lblIMG->setPixmap(pix.scaled(w,h,Qt::IgnoreAspectRatio));

                ui->PBGuardarPlatillos->setEnabled(false);
                ui->PBCancelarPlatillos->setEnabled(false);
                ui->PBNuevoPlatillos->setEnabled(false);
                ui->PBEditarPlatillos->setEnabled(true);
                ui->PBEliminarPlatillos->setEnabled(true);
                ui->PBIMGPlatillos->setEnabled(false);
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

//Text Changed Event

void CRUDGerenteWidget::enablePlatillos()
{
    if(ui->LENombrePlatillos->text().length() > 0
            && ui->LEPrecioPlatillos->text().length() > 0
            && ui->PTEDescripcionPlatillo->toPlainText().length() > 0
            && !byteArray.isNull())
    {
        ui->PBGuardarPlatillos->setEnabled(true);
    }
    else
    {
        //ui->PBGuardarPlatillos->setEnabled(false);
    }
}

void CRUDGerenteWidget::loadId(QString id)
{
    id_gerente = id;
}

void CRUDGerenteWidget::on_LEBuscarPlatillos_textChanged(const QString &arg1)
{
    if(arg1.length() >= 1)
    {
        if((arg1.toLongLong()))
        {
            ui->PBBuscarPlatillos->setEnabled(true);

            if (arg1.toLongLong() != ui->LEIDPlatillos->text().toLongLong() && ui->LEIDPlatillos->text().length() != 0)
            {
                ui->LENombrePlatillos->clear();
                ui->LEPrecioPlatillos->clear();
                ui->PTEDescripcionPlatillo->clear();
                ui->LEIDPlatillos->clear();
                ui->lblIMG->clear();
            }

        }
        else
        {
            ui->PBBuscarPlatillos->setEnabled(false);
        }

    }
    else
    {
        ui->PBBuscarPlatillos->setEnabled(false);
    }
}

void CRUDGerenteWidget::on_LENombrePlatillos_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enablePlatillos();
}

void CRUDGerenteWidget::on_PTEDescripcionPlatillo_textChanged()
{
    enablePlatillos();
}

void CRUDGerenteWidget::on_LEPrecioPlatillos_textChanged(const QString &arg1)
{
    if (arg1.toFloat())
    {
        ui->PBGuardarPlatillos->setEnabled(true);
    }
    else
    {
        ui->PBGuardarPlatillos->setEnabled(false);
    }
}

void CRUDGerenteWidget::on_PBIMGPlatillos_clicked()
{
    auto name = QFileDialog::getOpenFileName(this, "Select Image", QDir::rootPath(),
                                        "Image files(*.jpg *png *jpeg)");

    //byteArray.clear();
    //imgFile.setFileName(name);
    QFile imgFile(name);
    imgFile.open(QIODevice::ReadOnly);
    byteArray = imgFile.readAll();
    imgFile.close();

    QPixmap pix;
    pix.loadFromData(byteArray);
    int w = ui->lblIMG->height();
    int h = ui->lblIMG->height();
    ui->lblIMG->setPixmap(pix.scaled(w,h,Qt::IgnoreAspectRatio));

}
