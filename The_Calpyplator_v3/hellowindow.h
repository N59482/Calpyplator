#ifndef HELLOWINDOW_H
#define HELLOWINDOW_H

#include "mainwindow.h"
#include <QTimer>
#include <QDialog>
#include <QLabel>

namespace Ui {
class HelloWindow;
}

class HelloWindow : public QDialog
{
    Q_OBJECT
public:
    explicit HelloWindow(QWidget *parent = nullptr);
    ~HelloWindow();
private:
    Ui::HelloWindow *ui;
    MainWindow *w;
    QTimer * tmr;
private slots:
    void TimeOutEvent();
};

#endif // HELLOWINDOW_H
