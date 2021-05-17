#include "scircle.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Scircle w;
    w.show();
    return a.exec();
}
