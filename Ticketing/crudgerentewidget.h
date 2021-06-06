#ifndef CRUDGERENTEWIDGET_H
#define CRUDGERENTEWIDGET_H

#include <QWidget>
#include <QJsonDocument>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QtSql/QtSql>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>

namespace Ui {
class CRUDGerenteWidget;
}

class CRUDGerenteWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CRUDGerenteWidget(QWidget *parent = nullptr);
    ~CRUDGerenteWidget();

private slots:
    void on_PBNuevoJefe_clicked();

    void on_PBCancelarJefe_clicked();

    void on_PBGuardarJefe_clicked();

    void on_PBBuscarJefe_clicked();

    void networkReplyReadyRead();

    void on_LETelefonoJefe_textChanged(const QString &arg1);

    void on_LEBuscarJefe_textChanged(const QString &arg1);

private:
    Ui::CRUDGerenteWidget *ui;

};

#endif // CRUDGERENTEWIDGET_H
