#include "productwidget.h"
#include "ui_productwidget.h"

ProductWidget::ProductWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProductWidget)
{
    ui->setupUi(this);
}

ProductWidget::~ProductWidget()
{
    delete ui;
}

QString ProductWidget::getNombre() const
{
    return nombre;
}

void ProductWidget::setNombre(const QString &value)
{
    nombre = value;
}

QString ProductWidget::getPrecio() const
{
    return precio;
}

void ProductWidget::setPrecio(QString value)
{
    precio = value;
}

QString ProductWidget::getDescripcion() const
{
    return descripcion;
}

void ProductWidget::setDescripcion(const QString &value)
{
    descripcion = value;
}

QByteArray ProductWidget::getImg() const
{
    return img;
}

void ProductWidget::setImg(const QByteArray &value)
{
    img = value;
}

QString ProductWidget::getObservacion() const
{
    return observacion;
}

QString ProductWidget::getCantidad() const
{
    return cantidad;
}

void ProductWidget::setCantidad(const QString &value)
{
    cantidad = value;
}

void ProductWidget::setObservacion(const QString &value)
{
    observacion = value;
    ui->amountSB->setEnabled(false);
    ui->PTEObservacion->setEnabled(false);
    ui->btnAgregar->setHidden(true);
    ui->btnVer->setHidden(false);
}

void ProductWidget::showProduct()
{
    QPixmap pix;
    pix.loadFromData(img);
    int w = ui->lblPicture->width();
    int h = ui->lblPicture->height();
    ui->lblPicture->setPixmap(pix.scaled(w,h,Qt::IgnoreAspectRatio));
    ui->lblNombre->setText(nombre);
    ui->lblPrecio->setText("\t $" + precio);
    ui->lblDescripcion->setText(descripcion);
    ui->PTEObservacion->setPlainText(observacion);
    ui->amountSB->setValue(cantidad.toInt());

}

void ProductWidget::on_btnAgregar_clicked()
{
    emit addItem(nombre, precio, ui->PTEObservacion->toPlainText(), img, ui->amountSB->value());
    ui->PTEObservacion->clear();
    ui->amountSB->setValue(0);
}


void ProductWidget::on_btnVer_clicked()
{
//    emit add
//    QInputDialog *see = new QInputDialog(this);
//    see -> show();
}


void ProductWidget::on_amountSB_valueChanged(int arg1)
{
    if (arg1 > 0)
    {
        ui->btnAgregar->setEnabled(true);
        ui->PTEObservacion->setEnabled(true);
    }
    else
    {
        ui->btnAgregar->setEnabled(false);
        ui->PTEObservacion->setEnabled(false);
    }
}


