#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>
#include <QPushButton>
#include <QTimer>
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    enum operation
    {
        PLUS,
        MINUS,
        MULTIPLICATION,
        DEV,
        NONE,
    };
    operation oper = NONE;
    QPalette darkPalette;
    double equality();
private slots:
    void on_ppoint_clicked();
    void on_pC_clicked();
    void on_pAC_clicked();
    void on_pproc_clicked();
    void on_pequal_clicked();
    void on_pKoren_clicked();
    void on_pKvadrat_clicked();
    void on_pLog_clicked();
    void on_pPlusminus_clicked();
    void createnumber();
    void plus();
    void minus();
    void multiplication();
    void dev();
    void on_pStyle_clicked();

private:
    void lightON(QPushButton * button);
    void lightOFF();
    bool neednewnum = 1;
    bool isBlack = 1;
    double  x = 0;
    double y = 0;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
