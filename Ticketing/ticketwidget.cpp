#include "ticketwidget.h"
#include "ui_ticketwidget.h"

TicketWidget::TicketWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TicketWidget)
{
    ui->setupUi(this);
}

TicketWidget::~TicketWidget()
{
    delete ui;
}

void TicketWidget::recibir_ticket(vector<Producto> cart)
{
    int row = 0, j = 0;
    for(unsigned long long i (0) ; i != cart.size() ; ++i)
    {

        TicketProductoWidget* r = new TicketProductoWidget();

        r->setNombre(cart[i].getNombre());
        r->setPrecio(QString("%2").arg(cart[i].getPrecio()));
        r->setCantidad(cart[i].getCantidad());
        r->showProduct();

        if(j % 1 == 0 )
        {
            ++row;

        }

        ui->VLProductos->addWidget(r , 1 + row);

        ++j;
    }
    //qDebug()<<cart.size();
}

