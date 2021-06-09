#ifndef PRODUCTWIDGET_H
#define PRODUCTWIDGET_H

#include <QWidget>
#include <QString>
#include <QByteArray>

namespace Ui {
class ProductWidget;
}

class ProductWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductWidget(QWidget *parent = nullptr);
    ~ProductWidget();

    QString getNombre() const;
    void setNombre(const QString &value);

    double getPrecio() const;
    void setPrecio(double value);

    QString getDescripcion() const;
    void setDescripcion(const QString &value);

    QByteArray getImg() const;
    void setImg(const QByteArray &value);

private:
    Ui::ProductWidget *ui;

    QString nombre;
    double precio;
    QString descripcion;
    QByteArray img;

    void showProduct();



};

#endif // PRODUCTWIDGET_H
