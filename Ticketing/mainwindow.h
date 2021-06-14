#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QJsonDocument>
#include <QMessageBox>
#include "crudgerentewidget.h"
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <iostream>
#include "menuwidgets.h"

using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_LENombre_textChanged(const QString &arg1);

    void on_LEMesa_textChanged(const QString &arg1);

    void on_empezarPB_clicked();

    void loginMeseros();

    void loginClientes();

    void on_PBLoginMeseros_clicked();

    void on_LEIDMeseros_textChanged(const QString &arg1);

    void on_LEPasswordMeseros_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;

    QAction* openLoginMeserosAction, *openLoginClient;
    QMenu* m;

    QString rootDataBase = "C:/Users/Isaias/Downloads/Ticketing-SQLite/build-Ticketing-Desktop_Qt_5_12_10_MinGW_64_bit-Debug/bticketing.db";

    void enableEmpezarPB();
    void enableLogin();

};
#endif // MAINWINDOW_H
