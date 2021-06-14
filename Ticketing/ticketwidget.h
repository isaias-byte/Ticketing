#ifndef TICKETWIDGET_H
#define TICKETWIDGET_H

#include <QWidget>
#include "menuwidgets.h"
#include "producto.h"
#include <iostream>
#include "ticketproductowidget.h"

using namespace std;

namespace Ui {
class TicketWidget;
}

class TicketWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TicketWidget(QWidget *parent = nullptr);
    ~TicketWidget();

public slots:
    void recibir_ticket(vector<Producto> cart);

private:
    Ui::TicketWidget *ui;
};

#endif // TICKETWIDGET_H
