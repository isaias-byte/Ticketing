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

private:
    QString nombre;
    double precio;
    QString descripcion;
    QByteArray img;

};

#endif // PRODUCTO_H
