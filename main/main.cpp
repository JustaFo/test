#include <QtGui/QApplication>
#include "imgprocessor.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImgProcessor w;
    w.show();

    return a.exec();
}
