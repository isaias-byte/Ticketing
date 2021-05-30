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

    m_networkManager = new QNetworkAccessManager( this );

    QVariantMap newActive;

    newActive[ "Nombres" ] = ui->LENombresJefe->text();
    newActive[ "ApellidoPaterno" ] = ui->LEApellidoPJefe->text();
    newActive[ "ApellidoMaterno" ] = ui->LENombresJefe->text();
    newActive[ "FechaNacimiento" ] = ui->LEFechaJefe->text();
    newActive[ "Telefono" ] = ui->LETelefonoJefe->text().toInt();


    QJsonDocument jsonDoc = QJsonDocument::fromVariant( newActive );

    QNetworkRequest newActiveRequest( QUrl( "https://ticketing-b3cc8-default-rtdb.firebaseio.com/JefeMeseros.json" ) );

    newActiveRequest.setHeader( QNetworkRequest::ContentTypeHeader, QString ( "application/json" ) );

    m_networkManager->post( newActiveRequest, jsonDoc.toJson() );

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
    m_networkManager = new QNetworkAccessManager( this );

    m_networkReply = m_networkManager->get( QNetworkRequest( QUrl( "https://ticketing-b3cc8-default-rtdb.firebaseio.com/JefeMeseros.json" )));

    connect(m_networkReply, &QNetworkReply::readyRead, this, &CRUDGerenteWidget::networkReplyReadyRead);

}

void CRUDGerenteWidget::networkReplyReadyRead()
{
    qDebug () << m_networkReply->readAll();
}
