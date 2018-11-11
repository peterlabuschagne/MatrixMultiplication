#include "widget.h"
#include "ui_widget.h"
#include <QStandardItemModel>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent), ui(new Ui::Widget)
{
    int height = 137;
    int width = 70;

    ui->setupUi(this);

    //------------------------ Model setup ---------------------//
    // mModel is the variable class used for matrix A, B, and C.
    mModelA = new QStandardItemModel(this);
    mModelB = new QStandardItemModel(this);
    mModelC = new QStandardItemModel(this);

    mModelA->setRowCount(2);
    mModelA->setColumnCount(6);
    mModelB->setRowCount(3);
    mModelB->setColumnCount(4);
    mModelC->setRowCount(2);
    mModelC->setColumnCount(4);

    //------------------------ View setup ------------------------//
    // Setting column names
    mModelA->setHeaderData(0,Qt::Horizontal, tr("1(real)"));
    mModelA->setHeaderData(1,Qt::Horizontal, tr("1(imag)"));
    mModelA->setHeaderData(2,Qt::Horizontal, tr("2(real)"));
    mModelA->setHeaderData(3,Qt::Horizontal, tr("2(imag)"));
    mModelA->setHeaderData(4,Qt::Horizontal, tr("3(real)"));
    mModelA->setHeaderData(5,Qt::Horizontal, tr("3(imag)"));
    mModelB->setHeaderData(0,Qt::Horizontal, tr("1(real)"));
    mModelB->setHeaderData(1,Qt::Horizontal, tr("1(imag)"));
    mModelB->setHeaderData(2,Qt::Horizontal, tr("2(real)"));
    mModelB->setHeaderData(3,Qt::Horizontal, tr("2(imag)"));
    mModelC->setHeaderData(0,Qt::Horizontal, tr("1(real)"));
    mModelC->setHeaderData(1,Qt::Horizontal, tr("1(imag)"));
    mModelC->setHeaderData(2,Qt::Horizontal, tr("2(real)"));
    mModelC->setHeaderData(3,Qt::Horizontal, tr("2(imag)"));

    // Set table number of rows and columns for each table
    ui->tableViewA->setModel(mModelA);
    ui->tableViewB->setModel(mModelB);
    ui->tableViewC->setModel(mModelC);

    // Setting individual table height, width, and column width
    for(int i = 0; i < 6; ++i){
        ui->tableViewA->setColumnWidth(i,width);
    }
    ui->tableViewA->setFixedWidth(437);
    ui->tableViewA->setFixedHeight(height);
    for(int i = 0; i < 4; ++i){
        ui->tableViewB->setColumnWidth(i,width);

    }
    ui->tableViewB->setFixedHeight(height);
    ui->tableViewB->setFixedWidth(300);
    for(int i = 0; i < 4; ++i){
        ui->tableViewC->setColumnWidth(i,width);
    }
    ui->tableViewC->setFixedHeight(height);
    ui->tableViewC->setFixedWidth(300);
}
