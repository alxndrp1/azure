#include "scircle.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    scircle w;
    w.show();
    return a.exec();
}
