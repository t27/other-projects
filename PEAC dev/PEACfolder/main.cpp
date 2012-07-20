#include <QtGui/QApplication>
#include "peac.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PEAC w;
    w.show();
    
    return a.exec();
}
