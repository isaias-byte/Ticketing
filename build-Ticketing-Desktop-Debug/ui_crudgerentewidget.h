/********************************************************************************
** Form generated from reading UI file 'crudgerentewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUDGERENTEWIDGET_H
#define UI_CRUDGERENTEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRUDGerenteWidget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *JefeMeseros;
    QGridLayout *gridLayout_3;
    QGroupBox *GBJefeMeseros;
    QGridLayout *gridLayout_4;
    QPushButton *PBGuardarJefe;
    QPushButton *PBEliminarJefe;
    QLineEdit *LETelefonoJefe;
    QPushButton *PBNuevoJefe;
    QPushButton *PBCancelarJefe;
    QLabel *lblFechaJefe;
    QLabel *lblIDJefe;
    QLineEdit *LEBuscarJefe;
    QLabel *lblNombresJefe;
    QLineEdit *LENombresJefe;
    QPushButton *PBEditarJefe;
    QLineEdit *LEApellidoMJefe;
    QLabel *lblApellidoMJefe;
    QPushButton *PBBuscarJefe;
    QLabel *lblTelefonoJefe;
    QLineEdit *LEApellidoPJefe;
    QLineEdit *LEFechaJefe;
    QLabel *lblApellidoPJefe;
    QLineEdit *LEIDJefe;
    QWidget *Platillos;
    QGridLayout *gridLayout_5;
    QGroupBox *GBPlatillos;
    QGridLayout *gridLayout_6;
    QLabel *lblIMGPlatillos;
    QLineEdit *LENombrePlatillos;
    QLabel *lblIDPlatillo;
    QLabel *lblPrecioPlatillos;
    QLabel *lblDescripcionPlatillo;
    QLabel *lblIMG;
    QPushButton *PBGuardarPlatillos;
    QPushButton *PBNuevoPlatillos;
    QLineEdit *LEBuscarPlatillos;
    QPlainTextEdit *PTEDescripcionPlatillo;
    QLineEdit *LEIDPlatillos;
    QPushButton *PBBuscarPlatillos;
    QPushButton *PBEditarPlatillos;
    QLabel *lblNombrePlatillo;
    QPushButton *PBIMGPlatillos;
    QLineEdit *LEPrecioPlatillos;
    QPushButton *PBCancelarPlatillos;
    QPushButton *PBEliminarPlatillos;
    QWidget *Mesas;
    QWidget *page_2;

    void setupUi(QWidget *CRUDGerenteWidget)
    {
        if (CRUDGerenteWidget->objectName().isEmpty())
            CRUDGerenteWidget->setObjectName(QString::fromUtf8("CRUDGerenteWidget"));
        CRUDGerenteWidget->resize(1716, 1278);
        gridLayout = new QGridLayout(CRUDGerenteWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(CRUDGerenteWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        JefeMeseros = new QWidget();
        JefeMeseros->setObjectName(QString::fromUtf8("JefeMeseros"));
        gridLayout_3 = new QGridLayout(JefeMeseros);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        GBJefeMeseros = new QGroupBox(JefeMeseros);
        GBJefeMeseros->setObjectName(QString::fromUtf8("GBJefeMeseros"));
        GBJefeMeseros->setAlignment(Qt::AlignCenter);
        gridLayout_4 = new QGridLayout(GBJefeMeseros);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        PBGuardarJefe = new QPushButton(GBJefeMeseros);
        PBGuardarJefe->setObjectName(QString::fromUtf8("PBGuardarJefe"));
        PBGuardarJefe->setEnabled(false);
        PBGuardarJefe->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(PBGuardarJefe, 13, 2, 1, 1);

        PBEliminarJefe = new QPushButton(GBJefeMeseros);
        PBEliminarJefe->setObjectName(QString::fromUtf8("PBEliminarJefe"));
        PBEliminarJefe->setEnabled(false);
        PBEliminarJefe->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(PBEliminarJefe, 13, 6, 1, 1);

        LETelefonoJefe = new QLineEdit(GBJefeMeseros);
        LETelefonoJefe->setObjectName(QString::fromUtf8("LETelefonoJefe"));
        LETelefonoJefe->setEnabled(false);
        LETelefonoJefe->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(LETelefonoJefe, 12, 0, 1, 1);

        PBNuevoJefe = new QPushButton(GBJefeMeseros);
        PBNuevoJefe->setObjectName(QString::fromUtf8("PBNuevoJefe"));
        PBNuevoJefe->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(PBNuevoJefe, 13, 1, 1, 1);

        PBCancelarJefe = new QPushButton(GBJefeMeseros);
        PBCancelarJefe->setObjectName(QString::fromUtf8("PBCancelarJefe"));
        PBCancelarJefe->setEnabled(false);
        PBCancelarJefe->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(PBCancelarJefe, 13, 3, 1, 1);

        lblFechaJefe = new QLabel(GBJefeMeseros);
        lblFechaJefe->setObjectName(QString::fromUtf8("lblFechaJefe"));
        lblFechaJefe->setMaximumSize(QSize(150, 30));

        gridLayout_4->addWidget(lblFechaJefe, 9, 0, 1, 1);

        lblIDJefe = new QLabel(GBJefeMeseros);
        lblIDJefe->setObjectName(QString::fromUtf8("lblIDJefe"));
        lblIDJefe->setMinimumSize(QSize(0, 0));
        lblIDJefe->setMaximumSize(QSize(100, 30));

        gridLayout_4->addWidget(lblIDJefe, 1, 0, 1, 1);

        LEBuscarJefe = new QLineEdit(GBJefeMeseros);
        LEBuscarJefe->setObjectName(QString::fromUtf8("LEBuscarJefe"));
        LEBuscarJefe->setMaximumSize(QSize(500, 30));

        gridLayout_4->addWidget(LEBuscarJefe, 0, 0, 1, 1);

        lblNombresJefe = new QLabel(GBJefeMeseros);
        lblNombresJefe->setObjectName(QString::fromUtf8("lblNombresJefe"));
        lblNombresJefe->setMaximumSize(QSize(100, 30));

        gridLayout_4->addWidget(lblNombresJefe, 3, 0, 1, 1);

        LENombresJefe = new QLineEdit(GBJefeMeseros);
        LENombresJefe->setObjectName(QString::fromUtf8("LENombresJefe"));
        LENombresJefe->setEnabled(false);
        LENombresJefe->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(LENombresJefe, 4, 0, 1, 1);

        PBEditarJefe = new QPushButton(GBJefeMeseros);
        PBEditarJefe->setObjectName(QString::fromUtf8("PBEditarJefe"));
        PBEditarJefe->setEnabled(false);
        PBEditarJefe->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(PBEditarJefe, 13, 5, 1, 1);

        LEApellidoMJefe = new QLineEdit(GBJefeMeseros);
        LEApellidoMJefe->setObjectName(QString::fromUtf8("LEApellidoMJefe"));
        LEApellidoMJefe->setEnabled(false);
        LEApellidoMJefe->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(LEApellidoMJefe, 8, 0, 1, 1);

        lblApellidoMJefe = new QLabel(GBJefeMeseros);
        lblApellidoMJefe->setObjectName(QString::fromUtf8("lblApellidoMJefe"));
        lblApellidoMJefe->setMaximumSize(QSize(100, 30));

        gridLayout_4->addWidget(lblApellidoMJefe, 7, 0, 1, 1);

        PBBuscarJefe = new QPushButton(GBJefeMeseros);
        PBBuscarJefe->setObjectName(QString::fromUtf8("PBBuscarJefe"));
        PBBuscarJefe->setEnabled(false);
        PBBuscarJefe->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(PBBuscarJefe, 0, 1, 1, 1);

        lblTelefonoJefe = new QLabel(GBJefeMeseros);
        lblTelefonoJefe->setObjectName(QString::fromUtf8("lblTelefonoJefe"));
        lblTelefonoJefe->setMaximumSize(QSize(100, 30));

        gridLayout_4->addWidget(lblTelefonoJefe, 11, 0, 1, 1);

        LEApellidoPJefe = new QLineEdit(GBJefeMeseros);
        LEApellidoPJefe->setObjectName(QString::fromUtf8("LEApellidoPJefe"));
        LEApellidoPJefe->setEnabled(false);
        LEApellidoPJefe->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(LEApellidoPJefe, 6, 0, 1, 1);

        LEFechaJefe = new QLineEdit(GBJefeMeseros);
        LEFechaJefe->setObjectName(QString::fromUtf8("LEFechaJefe"));
        LEFechaJefe->setEnabled(false);
        LEFechaJefe->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(LEFechaJefe, 10, 0, 1, 1);

        lblApellidoPJefe = new QLabel(GBJefeMeseros);
        lblApellidoPJefe->setObjectName(QString::fromUtf8("lblApellidoPJefe"));
        lblApellidoPJefe->setMaximumSize(QSize(100, 30));

        gridLayout_4->addWidget(lblApellidoPJefe, 5, 0, 1, 1);

        LEIDJefe = new QLineEdit(GBJefeMeseros);
        LEIDJefe->setObjectName(QString::fromUtf8("LEIDJefe"));
        LEIDJefe->setEnabled(false);
        LEIDJefe->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(LEIDJefe, 2, 0, 1, 1);


        gridLayout_3->addWidget(GBJefeMeseros, 0, 0, 1, 1);

        tabWidget->addTab(JefeMeseros, QString());
        Platillos = new QWidget();
        Platillos->setObjectName(QString::fromUtf8("Platillos"));
        gridLayout_5 = new QGridLayout(Platillos);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        GBPlatillos = new QGroupBox(Platillos);
        GBPlatillos->setObjectName(QString::fromUtf8("GBPlatillos"));
        GBPlatillos->setAlignment(Qt::AlignCenter);
        gridLayout_6 = new QGridLayout(GBPlatillos);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        lblIMGPlatillos = new QLabel(GBPlatillos);
        lblIMGPlatillos->setObjectName(QString::fromUtf8("lblIMGPlatillos"));
        lblIMGPlatillos->setMaximumSize(QSize(100, 30));

        gridLayout_6->addWidget(lblIMGPlatillos, 9, 0, 1, 1);

        LENombrePlatillos = new QLineEdit(GBPlatillos);
        LENombrePlatillos->setObjectName(QString::fromUtf8("LENombrePlatillos"));
        LENombrePlatillos->setEnabled(false);
        LENombrePlatillos->setMaximumSize(QSize(200, 30));

        gridLayout_6->addWidget(LENombrePlatillos, 4, 0, 1, 1);

        lblIDPlatillo = new QLabel(GBPlatillos);
        lblIDPlatillo->setObjectName(QString::fromUtf8("lblIDPlatillo"));
        lblIDPlatillo->setMaximumSize(QSize(100, 30));

        gridLayout_6->addWidget(lblIDPlatillo, 1, 0, 1, 1);

        lblPrecioPlatillos = new QLabel(GBPlatillos);
        lblPrecioPlatillos->setObjectName(QString::fromUtf8("lblPrecioPlatillos"));
        lblPrecioPlatillos->setMaximumSize(QSize(100, 30));

        gridLayout_6->addWidget(lblPrecioPlatillos, 5, 0, 1, 1);

        lblDescripcionPlatillo = new QLabel(GBPlatillos);
        lblDescripcionPlatillo->setObjectName(QString::fromUtf8("lblDescripcionPlatillo"));
        lblDescripcionPlatillo->setMaximumSize(QSize(100, 30));

        gridLayout_6->addWidget(lblDescripcionPlatillo, 7, 0, 1, 1);

        lblIMG = new QLabel(GBPlatillos);
        lblIMG->setObjectName(QString::fromUtf8("lblIMG"));
        lblIMG->setMaximumSize(QSize(200, 200));

        gridLayout_6->addWidget(lblIMG, 11, 0, 1, 1);

        PBGuardarPlatillos = new QPushButton(GBPlatillos);
        PBGuardarPlatillos->setObjectName(QString::fromUtf8("PBGuardarPlatillos"));
        PBGuardarPlatillos->setEnabled(false);
        PBGuardarPlatillos->setMaximumSize(QSize(200, 30));

        gridLayout_6->addWidget(PBGuardarPlatillos, 12, 7, 1, 1);

        PBNuevoPlatillos = new QPushButton(GBPlatillos);
        PBNuevoPlatillos->setObjectName(QString::fromUtf8("PBNuevoPlatillos"));
        PBNuevoPlatillos->setMaximumSize(QSize(200, 30));

        gridLayout_6->addWidget(PBNuevoPlatillos, 12, 5, 1, 1);

        LEBuscarPlatillos = new QLineEdit(GBPlatillos);
        LEBuscarPlatillos->setObjectName(QString::fromUtf8("LEBuscarPlatillos"));
        LEBuscarPlatillos->setEnabled(true);
        LEBuscarPlatillos->setMaximumSize(QSize(500, 30));

        gridLayout_6->addWidget(LEBuscarPlatillos, 0, 4, 1, 1);

        PTEDescripcionPlatillo = new QPlainTextEdit(GBPlatillos);
        PTEDescripcionPlatillo->setObjectName(QString::fromUtf8("PTEDescripcionPlatillo"));
        PTEDescripcionPlatillo->setEnabled(false);
        PTEDescripcionPlatillo->setMaximumSize(QSize(300, 150));

        gridLayout_6->addWidget(PTEDescripcionPlatillo, 8, 0, 1, 1);

        LEIDPlatillos = new QLineEdit(GBPlatillos);
        LEIDPlatillos->setObjectName(QString::fromUtf8("LEIDPlatillos"));
        LEIDPlatillos->setEnabled(false);
        LEIDPlatillos->setMaximumSize(QSize(200, 30));

        gridLayout_6->addWidget(LEIDPlatillos, 2, 0, 1, 1);

        PBBuscarPlatillos = new QPushButton(GBPlatillos);
        PBBuscarPlatillos->setObjectName(QString::fromUtf8("PBBuscarPlatillos"));
        PBBuscarPlatillos->setEnabled(false);
        PBBuscarPlatillos->setMaximumSize(QSize(200, 30));

        gridLayout_6->addWidget(PBBuscarPlatillos, 0, 5, 1, 1);

        PBEditarPlatillos = new QPushButton(GBPlatillos);
        PBEditarPlatillos->setObjectName(QString::fromUtf8("PBEditarPlatillos"));
        PBEditarPlatillos->setEnabled(false);
        PBEditarPlatillos->setMaximumSize(QSize(200, 30));

        gridLayout_6->addWidget(PBEditarPlatillos, 12, 9, 1, 1);

        lblNombrePlatillo = new QLabel(GBPlatillos);
        lblNombrePlatillo->setObjectName(QString::fromUtf8("lblNombrePlatillo"));
        lblNombrePlatillo->setMaximumSize(QSize(100, 30));

        gridLayout_6->addWidget(lblNombrePlatillo, 3, 0, 1, 1);

        PBIMGPlatillos = new QPushButton(GBPlatillos);
        PBIMGPlatillos->setObjectName(QString::fromUtf8("PBIMGPlatillos"));
        PBIMGPlatillos->setEnabled(false);
        PBIMGPlatillos->setMaximumSize(QSize(200, 30));

        gridLayout_6->addWidget(PBIMGPlatillos, 10, 0, 1, 1);

        LEPrecioPlatillos = new QLineEdit(GBPlatillos);
        LEPrecioPlatillos->setObjectName(QString::fromUtf8("LEPrecioPlatillos"));
        LEPrecioPlatillos->setEnabled(false);
        LEPrecioPlatillos->setMaximumSize(QSize(200, 30));

        gridLayout_6->addWidget(LEPrecioPlatillos, 6, 0, 1, 1);

        PBCancelarPlatillos = new QPushButton(GBPlatillos);
        PBCancelarPlatillos->setObjectName(QString::fromUtf8("PBCancelarPlatillos"));
        PBCancelarPlatillos->setEnabled(false);
        PBCancelarPlatillos->setMaximumSize(QSize(200, 30));

        gridLayout_6->addWidget(PBCancelarPlatillos, 12, 8, 1, 1);

        PBEliminarPlatillos = new QPushButton(GBPlatillos);
        PBEliminarPlatillos->setObjectName(QString::fromUtf8("PBEliminarPlatillos"));
        PBEliminarPlatillos->setEnabled(false);
        PBEliminarPlatillos->setMaximumSize(QSize(200, 30));

        gridLayout_6->addWidget(PBEliminarPlatillos, 12, 10, 1, 1);


        gridLayout_5->addWidget(GBPlatillos, 0, 0, 1, 1);

        tabWidget->addTab(Platillos, QString());
        Mesas = new QWidget();
        Mesas->setObjectName(QString::fromUtf8("Mesas"));
        tabWidget->addTab(Mesas, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(CRUDGerenteWidget);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CRUDGerenteWidget);
    } // setupUi

    void retranslateUi(QWidget *CRUDGerenteWidget)
    {
        CRUDGerenteWidget->setWindowTitle(QCoreApplication::translate("CRUDGerenteWidget", "CRUD", nullptr));
        GBJefeMeseros->setTitle(QCoreApplication::translate("CRUDGerenteWidget", "CRUD JEFE DE MESEROS", nullptr));
        PBGuardarJefe->setText(QCoreApplication::translate("CRUDGerenteWidget", "Guardar", nullptr));
        PBEliminarJefe->setText(QCoreApplication::translate("CRUDGerenteWidget", "Eliminar", nullptr));
        LETelefonoJefe->setPlaceholderText(QCoreApplication::translate("CRUDGerenteWidget", "1234567890", nullptr));
        PBNuevoJefe->setText(QCoreApplication::translate("CRUDGerenteWidget", "Nuevo", nullptr));
        PBCancelarJefe->setText(QCoreApplication::translate("CRUDGerenteWidget", "Cancelar", nullptr));
        lblFechaJefe->setText(QCoreApplication::translate("CRUDGerenteWidget", "Fecha de nacimiento:", nullptr));
        lblIDJefe->setText(QCoreApplication::translate("CRUDGerenteWidget", "ID:", nullptr));
        LEBuscarJefe->setPlaceholderText(QCoreApplication::translate("CRUDGerenteWidget", "Identificador", nullptr));
        lblNombresJefe->setText(QCoreApplication::translate("CRUDGerenteWidget", "Nombre (s):", nullptr));
        LENombresJefe->setPlaceholderText(QCoreApplication::translate("CRUDGerenteWidget", "Nombres", nullptr));
        PBEditarJefe->setText(QCoreApplication::translate("CRUDGerenteWidget", "Editar", nullptr));
        LEApellidoMJefe->setPlaceholderText(QCoreApplication::translate("CRUDGerenteWidget", "Apellido Materno", nullptr));
        lblApellidoMJefe->setText(QCoreApplication::translate("CRUDGerenteWidget", "Apellido Materno:", nullptr));
        PBBuscarJefe->setText(QCoreApplication::translate("CRUDGerenteWidget", "Buscar", nullptr));
        lblTelefonoJefe->setText(QCoreApplication::translate("CRUDGerenteWidget", "Tel\303\251fono:", nullptr));
        LEApellidoPJefe->setPlaceholderText(QCoreApplication::translate("CRUDGerenteWidget", "Apellido Paterno", nullptr));
        LEFechaJefe->setPlaceholderText(QCoreApplication::translate("CRUDGerenteWidget", "YYYY-MM-DD", nullptr));
        lblApellidoPJefe->setText(QCoreApplication::translate("CRUDGerenteWidget", "Apellido Paterno:", nullptr));
        LEIDJefe->setPlaceholderText(QCoreApplication::translate("CRUDGerenteWidget", "ID", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(JefeMeseros), QCoreApplication::translate("CRUDGerenteWidget", "JefeMeseros", nullptr));
        GBPlatillos->setTitle(QCoreApplication::translate("CRUDGerenteWidget", "CRUD Platillos", nullptr));
        lblIMGPlatillos->setText(QCoreApplication::translate("CRUDGerenteWidget", "Imagen:", nullptr));
        LENombrePlatillos->setPlaceholderText(QCoreApplication::translate("CRUDGerenteWidget", "Nombre", nullptr));
        lblIDPlatillo->setText(QCoreApplication::translate("CRUDGerenteWidget", "ID:", nullptr));
        lblPrecioPlatillos->setText(QCoreApplication::translate("CRUDGerenteWidget", "Precio:", nullptr));
        lblDescripcionPlatillo->setText(QCoreApplication::translate("CRUDGerenteWidget", "Descripci\303\263n:", nullptr));
        lblIMG->setText(QString());
        PBGuardarPlatillos->setText(QCoreApplication::translate("CRUDGerenteWidget", "Guardar", nullptr));
        PBNuevoPlatillos->setText(QCoreApplication::translate("CRUDGerenteWidget", "Nuevo", nullptr));
        LEBuscarPlatillos->setPlaceholderText(QCoreApplication::translate("CRUDGerenteWidget", "ID", nullptr));
        LEIDPlatillos->setPlaceholderText(QCoreApplication::translate("CRUDGerenteWidget", "ID", nullptr));
        PBBuscarPlatillos->setText(QCoreApplication::translate("CRUDGerenteWidget", "Buscar", nullptr));
        PBEditarPlatillos->setText(QCoreApplication::translate("CRUDGerenteWidget", "Editar", nullptr));
        lblNombrePlatillo->setText(QCoreApplication::translate("CRUDGerenteWidget", "Nombre:", nullptr));
        PBIMGPlatillos->setText(QCoreApplication::translate("CRUDGerenteWidget", "Cargar Imagen", nullptr));
        LEPrecioPlatillos->setPlaceholderText(QCoreApplication::translate("CRUDGerenteWidget", "Precio", nullptr));
        PBCancelarPlatillos->setText(QCoreApplication::translate("CRUDGerenteWidget", "Cancelar", nullptr));
        PBEliminarPlatillos->setText(QCoreApplication::translate("CRUDGerenteWidget", "Eliminar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Platillos), QCoreApplication::translate("CRUDGerenteWidget", "Platillos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Mesas), QCoreApplication::translate("CRUDGerenteWidget", "Mesas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CRUDGerenteWidget: public Ui_CRUDGerenteWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUDGERENTEWIDGET_H
