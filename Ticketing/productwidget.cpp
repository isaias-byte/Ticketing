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

double ProductWidget::getPrecio() const
{
    return precio;
}

void ProductWidget::setPrecio(double value)
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

void ProductWidget::showProduct()
{
    QString price = QString::number(precio);

    QPixmap pix;
    pix.loadFromData(img);
    int w = ui->lblPicture->height();
    int h = ui->lblPicture->height();
    ui->lblPicture->setPixmap(pix.scaled(w,h,Qt::IgnoreAspectRatio));
    ui->lblNombre->setText(nombre);
    ui->lblPrecio->setText(price);
    ui->lblDescripcion->setText(descripcion);

}
