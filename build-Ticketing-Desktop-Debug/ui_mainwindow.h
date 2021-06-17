/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
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
    QGroupBox *GBMain;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *lblTacontento;
    QLabel *lblFeliz;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *lblOrdena;
    QPushButton *empezarPB;
    QLabel *lblNombre;
    QLabel *lblMesa;
    QLineEdit *LENombre;
    QLineEdit *LEMesa;
    QWidget *page_2;
    QGridLayout *gridLayout_7;
    QGroupBox *GBLoginMeseros;
    QGridLayout *gridLayout_8;
    QLabel *lblIDMeseros;
    QLineEdit *LEIDMeseros;
    QLabel *lblPasswordMeseros;
    QLineEdit *LEPasswordMeseros;
    QPushButton *PBLoginMeseros;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1728, 1278);
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
        groupBox_2->setStyleSheet(QString::fromUtf8("border-radius:0px;"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        GBMain = new QGroupBox(groupBox_2);
        GBMain->setObjectName(QString::fromUtf8("GBMain"));
        GBMain->setStyleSheet(QString::fromUtf8("background:transparent;"));
        gridLayout_3 = new QGridLayout(GBMain);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(GBMain);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(700, 600));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Resources/imgs/taco.png) 0 0 0 0 stretch stretch;"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        lblTacontento = new QLabel(GBMain);
        lblTacontento->setObjectName(QString::fromUtf8("lblTacontento"));
        lblTacontento->setMaximumSize(QSize(16777215, 600));
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat"));
        font.setPointSize(35);
        lblTacontento->setFont(font);
        lblTacontento->setStyleSheet(QString::fromUtf8("background:transparent;"));
        lblTacontento->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTacontento, 1, 0, 1, 1);

        lblFeliz = new QLabel(GBMain);
        lblFeliz->setObjectName(QString::fromUtf8("lblFeliz"));
        lblFeliz->setMaximumSize(QSize(16777215, 100));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Montserrat"));
        font1.setPointSize(20);
        lblFeliz->setFont(font1);
        lblFeliz->setStyleSheet(QString::fromUtf8("background:transparent;"));
        lblFeliz->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblFeliz, 2, 0, 1, 1);


        gridLayout_4->addWidget(GBMain, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(950, 0));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        groupBox->setStyleSheet(QString::fromUtf8("background:url(:Resources/imgs/2.jpeg);"));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(700, 16777215));
        groupBox_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lblOrdena = new QLabel(groupBox_3);
        lblOrdena->setObjectName(QString::fromUtf8("lblOrdena"));
        lblOrdena->setMaximumSize(QSize(16777215, 400));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Montserrat"));
        font2.setPointSize(40);
        lblOrdena->setFont(font2);
        lblOrdena->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblOrdena->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblOrdena, 0, 0, 1, 1);

        empezarPB = new QPushButton(groupBox_3);
        empezarPB->setObjectName(QString::fromUtf8("empezarPB"));
        empezarPB->setEnabled(false);
        empezarPB->setMinimumSize(QSize(100, 50));
        empezarPB->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(181, 181, 181);\n"
"selection-background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_2->addWidget(empezarPB, 5, 0, 1, 1);

        lblNombre = new QLabel(groupBox_3);
        lblNombre->setObjectName(QString::fromUtf8("lblNombre"));
        lblNombre->setMinimumSize(QSize(0, 0));
        lblNombre->setMaximumSize(QSize(400, 100));
        lblNombre->setFont(font1);
        lblNombre->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(lblNombre, 1, 0, 1, 1);

        lblMesa = new QLabel(groupBox_3);
        lblMesa->setObjectName(QString::fromUtf8("lblMesa"));
        lblMesa->setMaximumSize(QSize(600, 100));
        lblMesa->setFont(font1);
        lblMesa->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(lblMesa, 3, 0, 1, 1);

        LENombre = new QLineEdit(groupBox_3);
        LENombre->setObjectName(QString::fromUtf8("LENombre"));
        LENombre->setMinimumSize(QSize(0, 50));
        LENombre->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(LENombre, 2, 0, 1, 1);

        LEMesa = new QLineEdit(groupBox_3);
        LEMesa->setObjectName(QString::fromUtf8("LEMesa"));
        LEMesa->setMinimumSize(QSize(0, 50));
        LEMesa->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(LEMesa, 4, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 1, 1, 1);

        SWMain->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_7 = new QGridLayout(page_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        GBLoginMeseros = new QGroupBox(page_2);
        GBLoginMeseros->setObjectName(QString::fromUtf8("GBLoginMeseros"));
        GBLoginMeseros->setMinimumSize(QSize(300, 300));
        GBLoginMeseros->setMaximumSize(QSize(300, 300));
        GBLoginMeseros->setAlignment(Qt::AlignCenter);
        gridLayout_8 = new QGridLayout(GBLoginMeseros);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        lblIDMeseros = new QLabel(GBLoginMeseros);
        lblIDMeseros->setObjectName(QString::fromUtf8("lblIDMeseros"));
        lblIDMeseros->setMinimumSize(QSize(100, 30));
        lblIDMeseros->setMaximumSize(QSize(100, 30));

        gridLayout_8->addWidget(lblIDMeseros, 0, 0, 1, 1);

        LEIDMeseros = new QLineEdit(GBLoginMeseros);
        LEIDMeseros->setObjectName(QString::fromUtf8("LEIDMeseros"));
        LEIDMeseros->setMinimumSize(QSize(250, 30));

        gridLayout_8->addWidget(LEIDMeseros, 1, 0, 1, 1);

        lblPasswordMeseros = new QLabel(GBLoginMeseros);
        lblPasswordMeseros->setObjectName(QString::fromUtf8("lblPasswordMeseros"));
        lblPasswordMeseros->setMinimumSize(QSize(100, 30));
        lblPasswordMeseros->setMaximumSize(QSize(100, 30));
        lblPasswordMeseros->setTextFormat(Qt::PlainText);

        gridLayout_8->addWidget(lblPasswordMeseros, 2, 0, 1, 1);

        LEPasswordMeseros = new QLineEdit(GBLoginMeseros);
        LEPasswordMeseros->setObjectName(QString::fromUtf8("LEPasswordMeseros"));
        LEPasswordMeseros->setMinimumSize(QSize(250, 30));
        LEPasswordMeseros->setEchoMode(QLineEdit::Password);

        gridLayout_8->addWidget(LEPasswordMeseros, 3, 0, 1, 1);

        PBLoginMeseros = new QPushButton(GBLoginMeseros);
        PBLoginMeseros->setObjectName(QString::fromUtf8("PBLoginMeseros"));
        PBLoginMeseros->setEnabled(false);
        PBLoginMeseros->setMinimumSize(QSize(30, 30));

        gridLayout_8->addWidget(PBLoginMeseros, 4, 0, 1, 1);


        gridLayout_7->addWidget(GBLoginMeseros, 0, 0, 1, 1);

        SWMain->addWidget(page_2);

        gridLayout->addWidget(SWMain, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1728, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        SWMain->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "TICKETING", nullptr));
        groupBox_2->setTitle(QString());
        GBMain->setTitle(QString());
        label->setText(QString());
        lblTacontento->setText(QCoreApplication::translate("MainWindow", "Tacontento", nullptr));
        lblFeliz->setText(QCoreApplication::translate("MainWindow", "El que te hace feliz", nullptr));
        groupBox->setTitle(QString());
        groupBox_3->setTitle(QString());
        lblOrdena->setText(QCoreApplication::translate("MainWindow", "\302\241Ordena ahora!", nullptr));
        empezarPB->setText(QCoreApplication::translate("MainWindow", "\302\241Empieza a ordenar!", nullptr));
        lblNombre->setText(QCoreApplication::translate("MainWindow", "Ingresa su nombre", nullptr));
        lblMesa->setText(QCoreApplication::translate("MainWindow", "Ingresa el c\303\263digo de la mesa", nullptr));
        LENombre->setText(QString());
        LENombre->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        LEMesa->setPlaceholderText(QCoreApplication::translate("MainWindow", "Mesa", nullptr));
        GBLoginMeseros->setTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        lblIDMeseros->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        LEIDMeseros->setPlaceholderText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        lblPasswordMeseros->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        LEPasswordMeseros->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        PBLoginMeseros->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
