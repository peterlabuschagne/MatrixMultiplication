#include "widget.h"
#include <QApplication>
#include <QtDebug>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("Fusion");
    Widget w;
    w.show();
    w.resize(1000,300);

    return a.exec();
}
