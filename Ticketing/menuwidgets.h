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
#include <QString>
#include <QRegularExpression>
#include "ticketwidget.h"

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

signals:
    void crear_ticket(vector<Producto> cart);

private slots:
    void on_LEBuscarMenu_textChanged(const QString &arg1);

    void addToCart(QString nombre, QString precio, QString observacion, QByteArray image);

    void on_PBOrdenar_clicked();

private:
    Ui::MenuWidgets *ui;

    vector <Producto> products;

    vector <Producto> cart;

    QString rootDataBase = "C:/Users/Isaias/Downloads/Ticketing-SQLite/build-Ticketing-Desktop_Qt_5_12_10_MinGW_64_bit-Debug/bticketing.db";


};

#endif // MENUWIDGETS_H
