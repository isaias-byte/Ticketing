#include "producto.h"

Producto::Producto()
{

}

QString Producto::getNombre() const
{
    return nombre;
}

void Producto::setNombre(const QString &value)
{
    nombre = value;
}

double Producto::getPrecio() const
{
    return precio;
}

void Producto::setPrecio(double value)
{
    precio = value;
}

QString Producto::getDescripcion() const
{
    return descripcion;
}

void Producto::setDescripcion(const QString &value)
{
    descripcion = value;
}

QByteArray Producto::getImg() const
{
    return img;
}

void Producto::setImg(const QByteArray &value)
{
    img = value;
}

QString Producto::getObservacion() const
{
    return observacion;
}

void Producto::setObservacion(const QString &value)
{
    observacion = value;
}

QString Producto::getCantidad() const
{
    return cantidad;
}

void Producto::setCantidad(const QString &value)
{
    cantidad = value;
}
