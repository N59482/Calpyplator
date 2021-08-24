#include "hellowindow.h"
#include <QApplication>
#include <QTimer>
#include <QDebug>
#include "QGraphicsOpacityEffect"
#include <QStyleFactory>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelloWindow hello;
    hello.setWindowFlags(Qt::Window |
                         Qt::CustomizeWindowHint |
                         Qt::FramelessWindowHint
                         );
    hello.setAttribute( Qt::WA_TranslucentBackground, true );// делает прозрачный бек почитать про это
    hello.show();
    return a.exec();
}

