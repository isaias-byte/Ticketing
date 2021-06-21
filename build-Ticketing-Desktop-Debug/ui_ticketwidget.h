/********************************************************************************
** Form generated from reading UI file 'ticketwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETWIDGET_H
#define UI_TICKETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicketWidget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QLabel *lblSubtotal;
    QTextEdit *VLProductos;
    QLabel *lblRestaurante;
    QLabel *lblSerie;
    QLabel *lblNombreRestaurante;
    QLabel *lblColonia;
    QLabel *lblDireccion;
    QLabel *lblRFC;
    QLabel *lblTotal;
    QPushButton *pushButton;
    QWidget *page_2;

    void setupUi(QWidget *TicketWidget)
    {
        if (TicketWidget->objectName().isEmpty())
            TicketWidget->setObjectName(QString::fromUtf8("TicketWidget"));
        TicketWidget->resize(325, 571);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TicketWidget->sizePolicy().hasHeightForWidth());
        TicketWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat"));
        TicketWidget->setFont(font);
        TicketWidget->setStyleSheet(QString::fromUtf8("background-color:white;"));
        gridLayout = new QGridLayout(TicketWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(TicketWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setFont(font);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lblSubtotal = new QLabel(page);
        lblSubtotal->setObjectName(QString::fromUtf8("lblSubtotal"));
        lblSubtotal->setFont(font);

        gridLayout_2->addWidget(lblSubtotal, 12, 0, 1, 1);

        VLProductos = new QTextEdit(page);
        VLProductos->setObjectName(QString::fromUtf8("VLProductos"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(VLProductos->sizePolicy().hasHeightForWidth());
        VLProductos->setSizePolicy(sizePolicy1);
        VLProductos->setFont(font);
        VLProductos->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;"));

        gridLayout_2->addWidget(VLProductos, 11, 0, 1, 4);

        lblRestaurante = new QLabel(page);
        lblRestaurante->setObjectName(QString::fromUtf8("lblRestaurante"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft JhengHei"));
        font1.setPointSize(10);
        font1.setBold(true);
        lblRestaurante->setFont(font1);

        gridLayout_2->addWidget(lblRestaurante, 5, 0, 1, 1);

        lblSerie = new QLabel(page);
        lblSerie->setObjectName(QString::fromUtf8("lblSerie"));
        lblSerie->setFont(font);

        gridLayout_2->addWidget(lblSerie, 10, 0, 1, 4);

        lblNombreRestaurante = new QLabel(page);
        lblNombreRestaurante->setObjectName(QString::fromUtf8("lblNombreRestaurante"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(false);
        lblNombreRestaurante->setFont(font2);

        gridLayout_2->addWidget(lblNombreRestaurante, 6, 0, 1, 1);

        lblColonia = new QLabel(page);
        lblColonia->setObjectName(QString::fromUtf8("lblColonia"));
        lblColonia->setFont(font);

        gridLayout_2->addWidget(lblColonia, 8, 0, 1, 4);

        lblDireccion = new QLabel(page);
        lblDireccion->setObjectName(QString::fromUtf8("lblDireccion"));
        lblDireccion->setFont(font);

        gridLayout_2->addWidget(lblDireccion, 7, 0, 1, 4);

        lblRFC = new QLabel(page);
        lblRFC->setObjectName(QString::fromUtf8("lblRFC"));
        lblRFC->setFont(font);

        gridLayout_2->addWidget(lblRFC, 9, 0, 1, 1);

        lblTotal = new QLabel(page);
        lblTotal->setObjectName(QString::fromUtf8("lblTotal"));
        lblTotal->setFont(font);

        gridLayout_2->addWidget(lblTotal, 13, 0, 1, 4);

        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 14, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);


        retranslateUi(TicketWidget);

        QMetaObject::connectSlotsByName(TicketWidget);
    } // setupUi

    void retranslateUi(QWidget *TicketWidget)
    {
        TicketWidget->setWindowTitle(QCoreApplication::translate("TicketWidget", "TICKET", nullptr));
        lblSubtotal->setText(QCoreApplication::translate("TicketWidget", "SubTotal: ", nullptr));
        lblRestaurante->setText(QCoreApplication::translate("TicketWidget", "Restaurante", nullptr));
        lblSerie->setText(QCoreApplication::translate("TicketWidget", "N\302\260 de Serie:  ", nullptr));
        lblNombreRestaurante->setText(QCoreApplication::translate("TicketWidget", "Tacontento", nullptr));
        lblColonia->setText(QCoreApplication::translate("TicketWidget", "Col. Benito Juarez Auditorio", nullptr));
        lblDireccion->setText(QCoreApplication::translate("TicketWidget", "Hidalgo #5211", nullptr));
        lblRFC->setText(QCoreApplication::translate("TicketWidget", "RFC: 216654023", nullptr));
        lblTotal->setText(QCoreApplication::translate("TicketWidget", "Total: ", nullptr));
        pushButton->setText(QCoreApplication::translate("TicketWidget", "IMPRIMIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicketWidget: public Ui_TicketWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETWIDGET_H
