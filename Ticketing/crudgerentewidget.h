#ifndef CRUDGERENTEWIDGET_H
#define CRUDGERENTEWIDGET_H

#include <QWidget>
#include <QJsonDocument>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>

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

private:
    Ui::CRUDGerenteWidget *ui;

};

#endif // CRUDGERENTEWIDGET_H
