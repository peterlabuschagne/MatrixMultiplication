#include "widget.h"
#include "ui_widget.h"
#include "spinboxdelegate.h"
#include <QStandardItemModel>
#include <QDebug>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    mModelA = new QStandardItemModel(this);
    mModelB = new QStandardItemModel(this);
    mModelC = new QStandardItemModel(this);
    mModelA->setRowCount(2);
    mModelA->setColumnCount(6);
    mModelB->setRowCount(3);
    mModelB->setColumnCount(4);
    mModelC->setRowCount(2);
    mModelC->setColumnCount(4);
    ui->tableViewA->setModel(mModelA);
    ui->tableViewB->setModel(mModelB);
    ui->tableViewC->setModel(mModelC);


    for(int i = 0; i < 6; ++i){
        ui->tableViewA->setColumnWidth(i,70);
        ui->tableViewA->setFixedWidth(70*7);
    }
    for(int i = 0; i < 4; ++i){
        ui->tableViewB->setColumnWidth(i,70);
    }
    for(int i = 0; i < 4; ++i){
        ui->tableViewC->setColumnWidth(i,70);
    }


    int row = ui->rowFwidget->text().toInt();
    int col = ui->colFWidget->text().toInt();
    int num = 0;
    int i,j,k=1;
    qInfo() << row;
    qInfo() << col;
    for(i=1;i<=row;i++)
    {
      for(j=1;j<=i;j++)
      {
        if(i == row && j == col)
        {
            num = k;
        }
        k++;
      }
    }
    ui->ans->setText(QString::number(num));

//    ui->tableViewA->setItemDelegate(new SpinBoxDelegate(this));
//    ui->tableViewB->setItemDelegate(new SpinBoxDelegate(this));

}

Widget::~Widget()
{
    delete ui;
}

double Widget::getValueAt(QStandardItemModel *model, int i, int j) const
{
    if (!model->item(i,j)) {
        return 0.0;
    }
    return model->item(i, j)->text().toDouble();
}



void Widget::on_multiply_clicked()
{
    mModelC->clear();
    const int rowCountA = mModelA->rowCount();
    const int rowCountB = mModelB->rowCount();
    const int colCountB = mModelB->columnCount();
    mModelC->setRowCount(rowCountA);
    mModelC->setColumnCount(colCountB);
    double sumr, sumi;
    for(int i = 0; i < rowCountA; ++i) {
        for(int j = 0; j < colCountB; ) {
            sumr = 0.0;
            sumi = 0.0;
            int ak = 0;
            for(int k = 0; k < rowCountB; ++k) {
                const double ra = getValueAt(mModelA, i, ak);
                const double ia = getValueAt(mModelA, i, ak+1);
                const double rb = getValueAt(mModelB, k, j);
                const double ib = getValueAt(mModelB, k, j+1);
                const double real = (ra * rb) - (ia * ib);
                const double imag = (ra * ib) + (ia * rb);
                ak += 2;
                sumr += real;
                sumi += imag;
            }
            j += 2;
            appendTo(mModelC,sumr);
            appendTo(mModelC,sumi);
        }
    }
}

void Widget::appendTo(QStandardItemModel *model, double value) const
{
    const int rowCount = model->rowCount();
    const int colCount = model->columnCount();
    for(int ix = 0; ix < rowCount; ++ix) {
        for(int jx = 0; jx < colCount; ++jx) {
            if(!model->item(ix, jx)) {
                model->setItem(ix,jx, new QStandardItem(QString::number(value)));
                return;
            }
        }
    }
}

void Widget::on_exit_clicked()
{
    close();
}

