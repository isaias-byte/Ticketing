/********************************************************************************
** Form generated from reading UI file 'menuwidgets.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWIDGETS_H
#define UI_MENUWIDGETS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWidgets
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QGroupBox *GPCarrito;
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_7;
    QGridLayout *GLCarrito;
    QGroupBox *GPMenu;
    QGridLayout *gridLayout_3;
    QLineEdit *LEBuscarMenu;
    QPushButton *PBOrdenar;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_5;
    QGridLayout *GLProductos;
    QWidget *page_2;

    void setupUi(QWidget *MenuWidgets)
    {
        if (MenuWidgets->objectName().isEmpty())
            MenuWidgets->setObjectName(QString::fromUtf8("MenuWidgets"));
        MenuWidgets->resize(1716, 1278);
        gridLayout = new QGridLayout(MenuWidgets);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(MenuWidgets);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        GPCarrito = new QGroupBox(page);
        GPCarrito->setObjectName(QString::fromUtf8("GPCarrito"));
        GPCarrito->setMinimumSize(QSize(100, 400));
        GPCarrito->setMaximumSize(QSize(16777215, 400));
        GPCarrito->setAlignment(Qt::AlignCenter);
        gridLayout_4 = new QGridLayout(GPCarrito);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea_2 = new QScrollArea(GPCarrito);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setMaximumSize(QSize(16777215, 400));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1658, 365));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        GLCarrito = new QGridLayout();
        GLCarrito->setObjectName(QString::fromUtf8("GLCarrito"));

        gridLayout_7->addLayout(GLCarrito, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_4->addWidget(scrollArea_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(GPCarrito, 1, 0, 1, 1);

        GPMenu = new QGroupBox(page);
        GPMenu->setObjectName(QString::fromUtf8("GPMenu"));
        GPMenu->setMinimumSize(QSize(0, 0));
        GPMenu->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(GPMenu);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        LEBuscarMenu = new QLineEdit(GPMenu);
        LEBuscarMenu->setObjectName(QString::fromUtf8("LEBuscarMenu"));
        LEBuscarMenu->setMinimumSize(QSize(100, 30));

        gridLayout_3->addWidget(LEBuscarMenu, 0, 1, 1, 1);

        PBOrdenar = new QPushButton(GPMenu);
        PBOrdenar->setObjectName(QString::fromUtf8("PBOrdenar"));
        PBOrdenar->setMinimumSize(QSize(200, 30));

        gridLayout_3->addWidget(PBOrdenar, 0, 0, 1, 1);

        scrollArea = new QScrollArea(GPMenu);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 0));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1658, 765));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        GLProductos = new QGridLayout();
        GLProductos->setObjectName(QString::fromUtf8("GLProductos"));

        gridLayout_5->addLayout(GLProductos, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 1, 0, 1, 2);


        gridLayout_2->addWidget(GPMenu, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);


        retranslateUi(MenuWidgets);

        QMetaObject::connectSlotsByName(MenuWidgets);
    } // setupUi

    void retranslateUi(QWidget *MenuWidgets)
    {
        MenuWidgets->setWindowTitle(QCoreApplication::translate("MenuWidgets", "Men\303\272", nullptr));
        GPCarrito->setTitle(QCoreApplication::translate("MenuWidgets", "CARRITO", nullptr));
        GPMenu->setTitle(QCoreApplication::translate("MenuWidgets", "MEN\303\232", nullptr));
        LEBuscarMenu->setPlaceholderText(QCoreApplication::translate("MenuWidgets", "Buscar Producto", nullptr));
        PBOrdenar->setText(QCoreApplication::translate("MenuWidgets", "\302\241Ordenar!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWidgets: public Ui_MenuWidgets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWIDGETS_H
