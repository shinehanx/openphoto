#include "MainWindow.h"

#include <QApplication>
#include <QFile>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //qss
    QFile file(":/rc/style/stylesheet.qss");
    if (file.open(QFile::ReadOnly)) {
        QString qss = file.readAll();
        //a.setStyleSheet(qss);
    }
    file.close();

    w.show();
    return a.exec();
}
