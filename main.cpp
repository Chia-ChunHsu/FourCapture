#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //Version2.0
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
