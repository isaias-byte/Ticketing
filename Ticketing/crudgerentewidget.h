#ifndef CRUDGERENTEWIDGET_H
#define CRUDGERENTEWIDGET_H

#include <QWidget>
#include <QJsonDocument>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QtSql/QtSql>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QFile>
#include <QFileDialog>
#include <QByteArray>

namespace Ui {
class CRUDGerenteWidget;
}

class CRUDGerenteWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CRUDGerenteWidget(QWidget *parent = nullptr);
    ~CRUDGerenteWidget();
    void loadId(QString id);

private slots:
    void on_PBNuevoJefe_clicked();

    void on_PBCancelarJefe_clicked();

    void on_PBGuardarJefe_clicked();

    void on_PBBuscarJefe_clicked();

    void on_LETelefonoJefe_textChanged(const QString &arg1);

    void on_LEBuscarJefe_textChanged(const QString &arg1);

    void on_PBEditarJefe_clicked();

    void on_LENombresJefe_textChanged(const QString &arg1);

    void on_LEApellidoPJefe_textChanged(const QString &arg1);

    void on_LEApellidoMJefe_textChanged(const QString &arg1);

    void on_LEFechaJefe_textChanged(const QString &arg1);

    void on_PBEliminarJefe_clicked();

    void on_PBNuevoPlatillos_clicked();

    void on_PBGuardarPlatillos_clicked();

    void on_LEPrecioPlatillos_textChanged(const QString &arg1);

    void on_PBCancelarPlatillos_clicked();

    void on_PBEditarPlatillos_clicked();

    void on_PBEliminarPlatillos_clicked();

    void on_LEBuscarPlatillos_textChanged(const QString &arg1);

    void on_LENombrePlatillos_textChanged(const QString &arg1);

    void on_PTEDescripcionPlatillo_textChanged();

    void on_PBBuscarPlatillos_clicked();

    void on_PBIMGPlatillos_clicked();

private:
    Ui::CRUDGerenteWidget *ui;

    void enableJefe();
    void enablePlatillos();



    QString rootDataBase = "C:/Users/Isaias/Downloads/Ticketing-SQLite/build-Ticketing-Desktop_Qt_5_12_10_MinGW_64_bit-Debug/bticketing.db";

    bool edited = false;
    bool editePlatillos = false;
    QByteArray byteArray;
    QFile imgFile;
    QString id_gerente;


};

#endif // CRUDGERENTEWIDGET_H
