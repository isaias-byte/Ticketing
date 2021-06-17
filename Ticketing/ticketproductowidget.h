#ifndef TICKETPRODUCTOWIDGET_H
#define TICKETPRODUCTOWIDGET_H

#include <QWidget>

namespace Ui {
class TicketProductoWidget;
}

class TicketProductoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TicketProductoWidget(QWidget *parent = nullptr);
    ~TicketProductoWidget();

    QString getNombre() const;
    void setNombre(const QString &value);

    QString getPrecio() const;
    void setPrecio(const QString &value);

    QString getCantidad() const;
    void setCantidad(const QString &value);

    void showProduct();

private:
    Ui::TicketProductoWidget *ui;
    QString nombre;
    QString precio;
    QString cantidad;


};

#endif // TICKETPRODUCTOWIDGET_H
