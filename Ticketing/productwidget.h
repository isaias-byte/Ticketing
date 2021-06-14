#ifndef PRODUCTWIDGET_H
#define PRODUCTWIDGET_H

#include <QWidget>
#include <QString>
#include <QByteArray>
#include <QInputDialog>

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

    QString getPrecio() const;
    void setPrecio(QString value);

    QString getDescripcion() const;
    void setDescripcion(const QString &value);

    QByteArray getImg() const;
    void setImg(const QByteArray &value);

    void showProduct();

    QString getObservacion() const;
    void setObservacion(const QString &value);

signals:
    void addItem(QString nombre, QString precio, QString observaciones, QByteArray image);

private slots:
    void on_btnAgregar_clicked();

    void on_btnVer_clicked();

private:
    Ui::ProductWidget *ui;

    QString nombre;
    QString precio;
    QString descripcion;
    QByteArray img;
    QString observacion;

};

#endif // PRODUCTWIDGET_H
