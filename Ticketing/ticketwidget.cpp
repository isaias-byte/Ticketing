#include "ticketwidget.h"
#include "ui_ticketwidget.h"

TicketWidget::TicketWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TicketWidget)
{
    ui->setupUi(this);
}

TicketWidget::~TicketWidget()
{
    delete ui;
}

void TicketWidget::recibir_ticket(vector<Producto> cart)
{
    double total = 0.0, subtotal = 0.0, impuestos = 0.0;
    int row = 0, j = 0;

    const QString possibleCharacters("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
    const int randomStringLength = 13;

    QString randomString;

    for(int i (0); i < randomStringLength ; ++i)
    {
        int index = rand() % possibleCharacters.length();
        QChar nextChar = possibleCharacters.at(index);
        randomString.append(nextChar);
    }

    for(unsigned long long i (0) ; i != cart.size() ; ++i)
    {


        TicketProductoWidget* r = new TicketProductoWidget();

        r->setNombre(cart[i].getNombre());
        r->setPrecio(QString("%2").arg(cart[i].getPrecio()));
        r->setCantidad(cart[i].getCantidad());
        r->showProduct();

        if(j % 1 == 0 )
        {
            ++row;

        }

        //ui->VLProductos->addWidget(r , 1 + row);
        QString product = cart[i].getNombre();
        product.append("  $" + QString("%2").arg(cart[i].getPrecio()));
        product.append("\t" + cart[i].getCantidad());
        ui->VLProductos->append(product);


        if (i >= 12)
        {
            QSize size = ui->VLProductos->document()->size().toSize();
            ui->VLProductos->setFixedHeight( size.height() + 5);
            //ui->VLProductos->setSizeIncrement(0, size.height()+ 30);
            //ui->VLProductos->setFixedHeight(size.height() + 30);
        }
        ++j;

        subtotal += (cart[i].getPrecio() * cart[i].getCantidad().toInt());

    }

    ui->VLProductos->adjustSize();
    ui->VLProductos->setReadOnly(true);

    impuestos = (subtotal*16)/100;

    total = impuestos + subtotal;

    ui->lblSubtotal->setText("Subtotal: $" + QString("%2").arg(subtotal));
    ui->lblTotal->setText("Total: $" + QString("%2").arg(total));
    ui->lblSerie->setText("N° de Serie: " + randomString);

}


void TicketWidget::on_pushButton_clicked()
{
    QPrinter printer(QPrinter::HighResolution);

    printer.setPrinterName("printer");
    QPrintDialog dialog(&printer, this);
    if(dialog.exec() == QDialog::Rejected) return;

    QTextEdit textEdit;

    printer.setPaperSource(printer.Auto);

    printer.setOutputFormat(printer.PdfFormat);

    printer.setOutputFileName("SuTicket.pdf");

    //printer.setPageSize(QSize(79, 144),QPrinter::Millimeter);

    textEdit.append("  " + ui->lblRestaurante->text());
    textEdit.append("");

    textEdit.append("  " + ui->lblNombreRestaurante->text());
    textEdit.append("");

    textEdit.append("  " + ui->lblDireccion->text());
    textEdit.append("");

    textEdit.append("  " + ui->lblColonia->text());
    textEdit.append("");

    textEdit.append("  " + ui->lblRFC->text());
    textEdit.append("");

    textEdit.append("  " + ui->lblSerie->text());
    textEdit.append("");

    textEdit.append("  " + ui->VLProductos->toPlainText());
    textEdit.append("");

    textEdit.append("  " + ui->lblSubtotal->text());
    textEdit.append("");

    textEdit.append("  " + ui->lblTotal->text());




    textEdit.print(&printer);
}
