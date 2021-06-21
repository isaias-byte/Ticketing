/********************************************************************************
** Form generated from reading UI file 'productwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTWIDGET_H
#define UI_PRODUCTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductWidget
{
public:
    QLabel *lblPicture;
    QLabel *lblNombre;
    QLabel *lblDescripcion;
    QPushButton *btnAgregar;
    QPushButton *btnVer;
    QLabel *lblPrecio;
    QPlainTextEdit *PTEObservacion;
    QSpinBox *amountSB;

    void setupUi(QWidget *ProductWidget)
    {
        if (ProductWidget->objectName().isEmpty())
            ProductWidget->setObjectName(QString::fromUtf8("ProductWidget"));
        ProductWidget->resize(227, 355);
        ProductWidget->setMinimumSize(QSize(213, 355));
        lblPicture = new QLabel(ProductWidget);
        lblPicture->setObjectName(QString::fromUtf8("lblPicture"));
        lblPicture->setGeometry(QRect(30, 10, 131, 111));
        lblNombre = new QLabel(ProductWidget);
        lblNombre->setObjectName(QString::fromUtf8("lblNombre"));
        lblNombre->setGeometry(QRect(10, 140, 151, 16));
        lblDescripcion = new QLabel(ProductWidget);
        lblDescripcion->setObjectName(QString::fromUtf8("lblDescripcion"));
        lblDescripcion->setGeometry(QRect(10, 180, 201, 31));
        btnAgregar = new QPushButton(ProductWidget);
        btnAgregar->setObjectName(QString::fromUtf8("btnAgregar"));
        btnAgregar->setEnabled(false);
        btnAgregar->setGeometry(QRect(10, 320, 71, 28));
        btnVer = new QPushButton(ProductWidget);
        btnVer->setObjectName(QString::fromUtf8("btnVer"));
        btnVer->setGeometry(QRect(80, 320, 71, 28));
        lblPrecio = new QLabel(ProductWidget);
        lblPrecio->setObjectName(QString::fromUtf8("lblPrecio"));
        lblPrecio->setGeometry(QRect(10, 160, 151, 16));
        PTEObservacion = new QPlainTextEdit(ProductWidget);
        PTEObservacion->setObjectName(QString::fromUtf8("PTEObservacion"));
        PTEObservacion->setEnabled(false);
        PTEObservacion->setGeometry(QRect(20, 220, 191, 81));
        amountSB = new QSpinBox(ProductWidget);
        amountSB->setObjectName(QString::fromUtf8("amountSB"));
        amountSB->setGeometry(QRect(160, 320, 55, 28));

        retranslateUi(ProductWidget);

        QMetaObject::connectSlotsByName(ProductWidget);
    } // setupUi

    void retranslateUi(QWidget *ProductWidget)
    {
        ProductWidget->setWindowTitle(QCoreApplication::translate("ProductWidget", "Form", nullptr));
        lblPicture->setText(QString());
        lblNombre->setText(QCoreApplication::translate("ProductWidget", "nombre", nullptr));
        lblDescripcion->setText(QCoreApplication::translate("ProductWidget", "descripcion", nullptr));
        btnAgregar->setText(QCoreApplication::translate("ProductWidget", "Agregar", nullptr));
        btnVer->setText(QCoreApplication::translate("ProductWidget", "Ver", nullptr));
        lblPrecio->setText(QCoreApplication::translate("ProductWidget", "precio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductWidget: public Ui_ProductWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTWIDGET_H
