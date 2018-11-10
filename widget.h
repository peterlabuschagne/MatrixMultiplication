#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>




namespace Ui
{
class Widget;
}

class QStandardItemModel;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_multiply_clicked();
    void on_exit_clicked();
//    void on_rowA_valueChanged(int arg1);
//    void on_colA_valueChanged(int arg1);
//    void on_rowB_valueChanged(int arg1);
//    void on_colB_valueChanged(int arg1);

private:
    double getValueAt(QStandardItemModel *model, int ix, int jx) const;
    void appendTo(QStandardItemModel *model, double value) const;
    Ui::Widget *ui;
    QStandardItemModel *mModelA;
    QStandardItemModel *mModelB;
    QStandardItemModel *mModelC;

};

#endif // WIDGET_H
