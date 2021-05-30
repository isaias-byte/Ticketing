#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QDebug>
#include <QJsonDocument>
#include <QVariantMap>
#include <QMessageBox>
#include "crudgerentewidget.h"


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

private:
    Ui::MainWindow *ui;

    QNetworkAccessManager * m_networkManager;
    QNetworkReply * m_networkReply;

    QAction* openLoginMeserosAction, *openLoginClient;
    QMenu* m;

    void enableEmpezarPB();

};
#endif // MAINWINDOW_H
