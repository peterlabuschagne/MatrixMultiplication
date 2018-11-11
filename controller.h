//#include "widget.h"
//#include "ui_widget.h"
//#include "model.h"
//#include "view.h"
//#include <QStandardItemModel>
//#include <QDebug>
//#include <QWidget>


//double Widget::getValueAt(QStandardItemModel *model, int i, int j) const
//{
//    if (!model->item(i,j)) {
//        return 0.0;
//    }
//    return model->item(i, j)->text().toDouble();
//}

//void Widget::floydValue(){
//    int row = ui->rowFwidget->text().toInt();
//    int col = ui->colFWidget->text().toInt();
//    int num = 0;
//    int i,j,k=1;
//    qInfo() << row;
//    qInfo() << col;
//    for(i=1;i<=row;i++)
//    {
//      for(j=1;j<=i;j++)
//      {
//        if(i == row && j == col)
//        {
//            num = k;
//        }
//        k++;
//      }
//    }
//    ui->ans->setText(QString::number(num));
//}


//void Widget::on_multiply_clicked()
//{
//    mModelC->clear();
//    const int rowCountA = mModelA->rowCount();
//    const int rowCountB = mModelB->rowCount();
//    const int colCountB = mModelB->columnCount();
//    mModelC->setRowCount(rowCountA);
//    mModelC->setColumnCount(colCountB);
//    double sumr, sumi;
//    for(int i = 0; i < rowCountA; ++i) {
//        for(int j = 0; j < colCountB; ) {
//            sumr = 0.0;
//            sumi = 0.0;
//            int ak = 0;
//            for(int k = 0; k < rowCountB; ++k) {
//                const double ra = getValueAt(mModelA, i, ak);
//                const double ia = getValueAt(mModelA, i, ak+1);
//                const double rb = getValueAt(mModelB, k, j);
//                const double ib = getValueAt(mModelB, k, j+1);
//                const double real = (ra * rb) - (ia * ib);
//                const double imag = (ra * ib) + (ia * rb);
//                ak += 2;
//                sumr += real;
//                sumi += imag;
//            }
//            j += 2;
//            appendTo(mModelC,sumr);
//            appendTo(mModelC,sumi);
//        }
//    }
//}

//void Widget::appendTo(QStandardItemModel *model, double value) const
//{
//    const int rowCount = model->rowCount();
//    const int colCount = model->columnCount();
//    for(int ix = 0; ix < rowCount; ++ix) {
//        for(int jx = 0; jx < colCount; ++jx) {
//            if(!model->item(ix, jx)) {
//                model->setItem(ix,jx, new QStandardItem(QString::number(value)));
//                return;
//            }
//        }
//    }
//}

//void Widget::on_exit_clicked()
//{
//    close();
//}


//void Widget::on_rowFwidget_editingFinished()
//{
//    floydValue();
//}

//void Widget::on_colFWidget_editingFinished()
//{
//    floydValue();
//}
