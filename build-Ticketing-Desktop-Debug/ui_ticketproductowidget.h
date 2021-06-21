/********************************************************************************
** Form generated from reading UI file 'ticketproductowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETPRODUCTOWIDGET_H
#define UI_TICKETPRODUCTOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicketProductoWidget
{
public:
    QLabel *lblNombre;
    QLabel *lblPrecio;
    QLabel *lblCantidad;

    void setupUi(QWidget *TicketProductoWidget)
    {
        if (TicketProductoWidget->objectName().isEmpty())
            TicketProductoWidget->setObjectName(QString::fromUtf8("TicketProductoWidget"));
        TicketProductoWidget->resize(356, 50);
        lblNombre = new QLabel(TicketProductoWidget);
        lblNombre->setObjectName(QString::fromUtf8("lblNombre"));
        lblNombre->setGeometry(QRect(10, 15, 161, 21));
        lblNombre->setWordWrap(true);
        lblPrecio = new QLabel(TicketProductoWidget);
        lblPrecio->setObjectName(QString::fromUtf8("lblPrecio"));
        lblPrecio->setGeometry(QRect(200, 15, 61, 21));
        lblCantidad = new QLabel(TicketProductoWidget);
        lblCantidad->setObjectName(QString::fromUtf8("lblCantidad"));
        lblCantidad->setGeometry(QRect(280, 15, 71, 21));

        retranslateUi(TicketProductoWidget);

        QMetaObject::connectSlotsByName(TicketProductoWidget);
    } // setupUi

    void retranslateUi(QWidget *TicketProductoWidget)
    {
        TicketProductoWidget->setWindowTitle(QCoreApplication::translate("TicketProductoWidget", "Form", nullptr));
        lblNombre->setText(QCoreApplication::translate("TicketProductoWidget", "Nombre", nullptr));
        lblPrecio->setText(QCoreApplication::translate("TicketProductoWidget", "Precio", nullptr));
        lblCantidad->setText(QCoreApplication::translate("TicketProductoWidget", "Cantidad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicketProductoWidget: public Ui_TicketProductoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETPRODUCTOWIDGET_H
