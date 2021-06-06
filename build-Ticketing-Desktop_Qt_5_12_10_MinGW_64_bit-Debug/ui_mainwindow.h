/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *SWMain;
    QWidget *page;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLabel *lblIzquierdo;
    QGroupBox *GBMain;
    QGridLayout *gridLayout_3;
    QLabel *lblFeliz;
    QLabel *lblTacontento;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QLabel *lblDerecho;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *lblOrdena;
    QPushButton *empezarPB;
    QLabel *lblNombre;
    QLabel *lblMesa;
    QLineEdit *LENombre;
    QLineEdit *LEMesa;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1716, 1278);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SWMain = new QStackedWidget(centralwidget);
        SWMain->setObjectName(QString::fromUtf8("SWMain"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_5 = new QGridLayout(page);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setLayoutDirection(Qt::LeftToRight);
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lblIzquierdo = new QLabel(groupBox_2);
        lblIzquierdo->setObjectName(QString::fromUtf8("lblIzquierdo"));

        gridLayout_4->addWidget(lblIzquierdo, 0, 0, 1, 1);

        GBMain = new QGroupBox(groupBox_2);
        GBMain->setObjectName(QString::fromUtf8("GBMain"));
        gridLayout_3 = new QGridLayout(GBMain);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lblFeliz = new QLabel(GBMain);
        lblFeliz->setObjectName(QString::fromUtf8("lblFeliz"));
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat"));
        font.setPointSize(20);
        lblFeliz->setFont(font);
        lblFeliz->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblFeliz, 2, 0, 1, 1);

        lblTacontento = new QLabel(GBMain);
        lblTacontento->setObjectName(QString::fromUtf8("lblTacontento"));
        lblTacontento->setMaximumSize(QSize(360, 200));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Montserrat"));
        font1.setPointSize(35);
        lblTacontento->setFont(font1);
        lblTacontento->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTacontento, 1, 0, 1, 1);


        gridLayout_4->addWidget(GBMain, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        lblDerecho = new QLabel(groupBox);
        lblDerecho->setObjectName(QString::fromUtf8("lblDerecho"));

        gridLayout_6->addWidget(lblDerecho, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lblOrdena = new QLabel(groupBox_3);
        lblOrdena->setObjectName(QString::fromUtf8("lblOrdena"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Montserrat"));
        font2.setPointSize(40);
        lblOrdena->setFont(font2);
        lblOrdena->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblOrdena, 0, 0, 1, 1);

        empezarPB = new QPushButton(groupBox_3);
        empezarPB->setObjectName(QString::fromUtf8("empezarPB"));
        empezarPB->setMinimumSize(QSize(100, 50));

        gridLayout_2->addWidget(empezarPB, 5, 0, 1, 1);

        lblNombre = new QLabel(groupBox_3);
        lblNombre->setObjectName(QString::fromUtf8("lblNombre"));
        lblNombre->setMinimumSize(QSize(100, 50));
        lblNombre->setFont(font);

        gridLayout_2->addWidget(lblNombre, 1, 0, 1, 1);

        lblMesa = new QLabel(groupBox_3);
        lblMesa->setObjectName(QString::fromUtf8("lblMesa"));
        lblMesa->setFont(font);

        gridLayout_2->addWidget(lblMesa, 3, 0, 1, 1);

        LENombre = new QLineEdit(groupBox_3);
        LENombre->setObjectName(QString::fromUtf8("LENombre"));
        LENombre->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(LENombre, 2, 0, 1, 1);

        LEMesa = new QLineEdit(groupBox_3);
        LEMesa->setObjectName(QString::fromUtf8("LEMesa"));
        LEMesa->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(LEMesa, 4, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 1, 0, 1, 1);

        lblDerecho->raise();
        groupBox_3->raise();

        gridLayout_5->addWidget(groupBox, 0, 1, 1, 1);

        SWMain->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        SWMain->addWidget(page_2);

        gridLayout->addWidget(SWMain, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1716, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TICKETING", nullptr));
        groupBox_2->setTitle(QString());
        lblIzquierdo->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        GBMain->setTitle(QString());
        lblFeliz->setText(QApplication::translate("MainWindow", "El que te hace feliz", nullptr));
        lblTacontento->setText(QApplication::translate("MainWindow", "Tacontento", nullptr));
        groupBox->setTitle(QString());
        lblDerecho->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_3->setTitle(QString());
        lblOrdena->setText(QApplication::translate("MainWindow", "\302\241Ordena ahora!", nullptr));
        empezarPB->setText(QApplication::translate("MainWindow", "\302\241Empieza a ordenar!", nullptr));
        lblNombre->setText(QApplication::translate("MainWindow", "Ingresa su nombre", nullptr));
        lblMesa->setText(QApplication::translate("MainWindow", "Ingresa el c\303\263digo de la mesa", nullptr));
        LENombre->setText(QString());
        LENombre->setPlaceholderText(QApplication::translate("MainWindow", "Nombre", nullptr));
        LEMesa->setPlaceholderText(QApplication::translate("MainWindow", "Mesa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
