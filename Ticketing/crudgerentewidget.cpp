#include "crudgerentewidget.h"
#include "ui_crudgerentewidget.h"

CRUDGerenteWidget::CRUDGerenteWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CRUDGerenteWidget)
{
    ui->setupUi(this);

    QRegExp regexp("[0-9]{0,2}/[0-9]{0,2}/[0-9]{0,4}");
    QValidator* validator = new QRegExpValidator(regexp,this);
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

    ui->PBGuardarJefe->setEnabled(true);
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




    ui->LENombresJefe->setEnabled(false);
    ui->LEApellidoPJefe->setEnabled(false);
    ui->LEApellidoMJefe->setEnabled(false);
    ui->LEFechaJefe->setEnabled(false);
    ui->LETelefonoJefe->setEnabled(false);

    ui->PBGuardarJefe->setEnabled(false);
    ui->PBCancelarJefe->setEnabled(false);
    ui->PBNuevoJefe->setEnabled(true);

    //En caso de que se agreguen :D se limpian los campos
    //Clear Line Edits
    ui->LENombresJefe->clear();
    ui->LEApellidoPJefe->clear();
    ui->LEApellidoMJefe->clear();
    ui->LEFechaJefe->clear();
    ui->LETelefonoJefe->clear();
    ui->LEBuscarJefe->clear();

}

void CRUDGerenteWidget::on_PBBuscarJefe_clicked()
{


}

void CRUDGerenteWidget::networkReplyReadyRead()
{

}
