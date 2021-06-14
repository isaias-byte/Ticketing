#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <QMessageBox>
#include <QByteArray>

using namespace std;

class Producto
{
public:
    Producto();

    QString getNombre() const;
    void setNombre(const QString &value);

    double getPrecio() const;
    void setPrecio(double value);

    QString getDescripcion() const;
    void setDescripcion(const QString &value);

    QByteArray getImg() const;
    void setImg(const QByteArray &value);

    QString getObservacion() const;
    void setObservacion(const QString &value);

    QString getCantidad() const;
    void setCantidad(const QString &value);

private:
    QString nombre;
    double precio;
    QString descripcion;
    QString observacion;
    QByteArray img;
    QString cantidad;

};

#endif // PRODUCTO_H
