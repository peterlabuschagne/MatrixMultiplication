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
    double getValueAt(QStandardItemModel *model, int ix, int jx) const;
    void appendTo(QStandardItemModel *model, double value) const;
    void floydValue() const;
    Ui::Widget *ui;
    QStandardItemModel *mModelA;
    QStandardItemModel *mModelB;
    QStandardItemModel *mModelC;

private slots:
    void on_multiply_clicked();
    void on_exit_clicked();
    void on_rowFwidget_editingFinished();
    void on_colFWidget_editingFinished();

private:


};

#endif // WIDGET_H
