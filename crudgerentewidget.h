#ifndef CRUDGERENTEWIDGET_H
#define CRUDGERENTEWIDGET_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QJsonDocument>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QJsonArray>
#include <QJsonObject>

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

    QNetworkAccessManager * m_networkManager;
    QNetworkReply * m_networkReply;
};

#endif // CRUDGERENTEWIDGET_H
