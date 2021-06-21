#ifndef TICKETWIDGET_H
#define TICKETWIDGET_H

#include <QWidget>
#include "menuwidgets.h"
#include "producto.h"
#include <iostream>
#include "ticketproductowidget.h"
#include <QSize>
#include <QRandomGenerator>
#include <QPrinter>
#include <QPrintDialog>
#include <QDateTime>
#include <QPageSize>

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

private slots:
    void on_pushButton_clicked();

private:
    Ui::TicketWidget *ui;
};

#endif // TICKETWIDGET_H
