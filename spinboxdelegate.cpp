//#include "spinboxdelegate.h"
//#include <QSpinBox>

//SpinBoxDelegate::SpinBoxDelegate(QObject *parent)
//    : QItemDelegate(parent)
//{

//}

//QWidget *SpinBoxDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &, const QModelIndex &) const
//{
//    auto SpinBox = new QSpinBox(parent);
//    SpinBox->setMinimum(-999999999.999);
//    SpinBox->setMaximum(+999999999.999);
//    return SpinBox;
//}

//void SpinBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
//{
//    auto SpinBox = static_cast<QSpinBox *>(editor);
//    SpinBox->setValue(index.data().toDouble());
//}

//void SpinBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
//{
//    auto SpinBox = static_cast<QSpinBox *>(editor);
//    model->setData(index, SpinBox->value());
//}

//void SpinBoxDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &) const
//{
//    editor->setGeometry(option.rect);
//}
