#include "ticketproductowidget.h"
#include "ui_ticketproductowidget.h"

TicketProductoWidget::TicketProductoWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TicketProductoWidget)
{
    ui->setupUi(this);
}

TicketProductoWidget::~TicketProductoWidget()
{
    delete ui;
}

QString TicketProductoWidget::getNombre() const
{
    return nombre;
}

void TicketProductoWidget::setNombre(const QString &value)
{
    nombre = value;
}

QString TicketProductoWidget::getPrecio() const
{
    return precio;
}

void TicketProductoWidget::setPrecio(const QString &value)
{
    precio = value;
}

QString TicketProductoWidget::getCantidad() const
{
    return cantidad;
}

void TicketProductoWidget::setCantidad(const QString &value)
{
    cantidad = value;
}

void TicketProductoWidget::showProduct()
{
    ui->lblNombre->setText(nombre);
    ui->lblPrecio->setText("$" + precio);
    ui->lblCantidad->setText(cantidad);

}
