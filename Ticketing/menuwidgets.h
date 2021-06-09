#ifndef MENUWIDGETS_H
#define MENUWIDGETS_H

#include <QWidget>
#include <vector>
#include <iostream>
#include "producto.h"
#include "productwidget.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

using namespace std;

namespace Ui {
class MenuWidgets;
}

class MenuWidgets : public QWidget
{
    Q_OBJECT

public:
    explicit MenuWidgets(QWidget *parent = nullptr);
    ~MenuWidgets();

    void cargarProductos();
    void cargarWidgets();

private:
    Ui::MenuWidgets *ui;

    vector <Producto> products;

    QString rootDataBase = "D:/Trabajos-tareas/UNI/5_universidad/Ingenieria de Software I/Proyecto/Ticketing-SQLite/build-Ticketing-Desktop_Qt_5_12_10_MinGW_64_bit-Debug/bticketing.db";


};

#endif // MENUWIDGETS_H
