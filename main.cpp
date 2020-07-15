#include "Nosub.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Nosub w;
    w.show();
    return a.exec();
}
