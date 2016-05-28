#include "simpleclient.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimpleClient w;
    w.show();
    return a.exec();
}
