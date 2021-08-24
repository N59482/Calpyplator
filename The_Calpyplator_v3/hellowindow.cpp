#include "hellowindow.h"
#include "mainwindow.h"
#include "ui_hellowindow.h"
#include <QTimer>
#include <QDebug>

HelloWindow::HelloWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelloWindow)
{
    ui->setupUi(this);
    tmr = new QTimer(this);
    connect(tmr, SIGNAL(timeout()),this,SLOT(TimeOutEvent()));
    tmr->start(1500);
}

HelloWindow::~HelloWindow()
{
    delete ui;
}

void HelloWindow::TimeOutEvent()
{
    this->close();
    tmr->stop();
    w = new MainWindow(this);
    w->setWindowFlags(Qt::Window | Qt::WindowCloseButtonHint );
    w->show();
};

