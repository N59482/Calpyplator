#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QStyle>
#include <QtMath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setAlignment((Qt::AlignRight | Qt::AlignVCenter));
    ui->label2->setAlignment((Qt::AlignRight | Qt::AlignVCenter));
    connect(ui->p0,SIGNAL(clicked()),this,SLOT(createnumber()));
    connect(ui->p1,SIGNAL(clicked()),this,SLOT(createnumber()));
    connect(ui->p2,SIGNAL(clicked()),this,SLOT(createnumber()));
    connect(ui->p3,SIGNAL(clicked()),this,SLOT(createnumber()));
    connect(ui->p4,SIGNAL(clicked()),this,SLOT(createnumber()));
    connect(ui->p5,SIGNAL(clicked()),this,SLOT(createnumber()));
    connect(ui->p6,SIGNAL(clicked()),this,SLOT(createnumber()));
    connect(ui->p7,SIGNAL(clicked()),this,SLOT(createnumber()));
    connect(ui->p8,SIGNAL(clicked()),this,SLOT(createnumber()));
    connect(ui->p9,SIGNAL(clicked()),this,SLOT(createnumber()));
    connect(ui->ppoint,SIGNAL(clicked()),this,SLOT(on_ppoint_clicked()));
    connect(ui->pplus,SIGNAL(clicked()),this,SLOT(plus()));
    connect(ui->pminus,SIGNAL(clicked()),this,SLOT(minus()));
    connect(ui->pmultiplication,SIGNAL(clicked()),this,SLOT(multiplication()));
    connect(ui->pdev,SIGNAL(clicked()),this,SLOT(dev()));
};

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createnumber()// заполнение mainlabel , x или у;
{
    QPushButton *NumButton = (QPushButton *)sender(); // создаем указатель на вводимую кнопку.

     if(neednewnum || ui->label->text() == '0')//проверяем заменить текст в лейбле или дополнить
     {
        ui->label->setText(NumButton->text());
        neednewnum = 0;
     }
     else {
         if (ui->label->text().length() < 16)
         ui->label->setText(ui->label->text() + NumButton->text());
     }
    if (oper == NONE)
    {
        x = ui->label->text().toDouble();
    }
    else
    {
        y = ui->label->text().toDouble();
    }
};

void MainWindow::lightON(QPushButton * button)// закончить
{
    if (isBlack)
        {
            button->setStyleSheet("QPushButton {border: 2px solid #f6fa05; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0, stop: 0 #3c3d3c, stop: 1 #8c918c); color: rgb(11, 166, 186);font: 63 18pt \"Bahnschrift SemiBold\"; }  QPushButton:hover {  border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0, stop: 0 #21201f, stop: 1 #30fcbf); } QPushButton:pressed { border: 2px solid #050505; border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);  color: rgb(0,0,0);}  QPushButton:flat { border: none;  } QPushButton:default {  border-color: navy; }");
        }
        else
        {

        }
   }

void MainWindow::lightOFF()// закончить
{
    if (isBlack)
        {
            ui->pmultiplication->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0, stop: 0 #3c3d3c, stop: 1 #8c918c); color: rgb(11, 166, 186);font: 63 18pt \"Bahnschrift SemiBold\"; }  QPushButton:hover {  border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0, stop: 0 #21201f, stop: 1 #30fcbf); } QPushButton:pressed { border: 2px solid #050505; border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);  color: rgb(0,0,0);}  QPushButton:flat { border: none;  } QPushButton:default {  border-color: navy; }");
            ui->pdev->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0, stop: 0 #3c3d3c, stop: 1 #8c918c); color: rgb(11, 166, 186);font: 63 18pt \"Bahnschrift SemiBold\"; }  QPushButton:hover {  border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0, stop: 0 #21201f, stop: 1 #30fcbf); } QPushButton:pressed { border: 2px solid #050505; border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);  color: rgb(0,0,0);}  QPushButton:flat { border: none;  } QPushButton:default {  border-color: navy; }");
            ui->pplus->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0, stop: 0 #3c3d3c, stop: 1 #8c918c); color: rgb(11, 166, 186);font: 63 18pt \"Bahnschrift SemiBold\"; }  QPushButton:hover {  border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0, stop: 0 #21201f, stop: 1 #30fcbf); } QPushButton:pressed { border: 2px solid #050505; border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);  color: rgb(0,0,0);}  QPushButton:flat { border: none;  } QPushButton:default {  border-color: navy; }");
            ui->pminus->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0, stop: 0 #3c3d3c, stop: 1 #8c918c); color: rgb(11, 166, 186);font: 63 18pt \"Bahnschrift SemiBold\"; }  QPushButton:hover {  border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0, stop: 0 #21201f, stop: 1 #30fcbf); } QPushButton:pressed { border: 2px solid #050505; border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);  color: rgb(0,0,0);}  QPushButton:flat { border: none;  } QPushButton:default {  border-color: navy; }");
        }
        else
        {

        }
};

void MainWindow::minus()
{
    if (oper != NONE)
    {
        x = equality();
        ui->label->setNum(x);
        y = 0;
    }
    oper = MINUS;
    neednewnum = 1;
    lightOFF();
    lightON(ui->pminus);
}

void MainWindow::plus()
{
    if (oper != NONE)
    {
        x = equality();
        ui->label->setNum(x);
        y = 0;
    }
    oper = PLUS;
    neednewnum = 1;
    lightOFF();
    lightON(ui->pplus);
}

void MainWindow::multiplication()
{
    if (oper != NONE)
    {
        x = equality();
        ui->label->setNum(x);
        y = 0;
    }
    oper = MULTIPLICATION;
    neednewnum = 1;
    lightOFF();
    lightON(ui->pmultiplication);
}

void MainWindow::dev()
{
    if (oper != NONE)
    {
        x = equality();
        ui->label->setNum(x);
        y = 0;
    }
    oper = DEV;
    neednewnum = 1;
    lightOFF();
    lightON(ui->pdev);
}

void MainWindow::on_ppoint_clicked()//слот добавления точки в главный лейбл
{
    if (!ui->label->text().contains('.'))// недопускает добавления нескольких точек в число
    {
        if (neednewnum)//обработка случая нажатия точки без предворительно введённого  числа
        {
            ui->label->setText("0.");
            neednewnum = false;
        }else
        ui->label->setText(ui->label->text() + '.');// то самое добавление точки
    }
};

double MainWindow::equality()// функция вычислений арифметических операций (возвращает результат типа Double, 0 - в случае отсутствия операции и 404 в случае нестандартной ситуации)
{
   // y = ui->label->text().toDouble();
    switch(oper)
    {
        case PLUS:
        {
            ui->label2->setText(QString::number(x) + " + ");
            return (x + y );// void и ui->label->setText(QString::number(x + ui->label->text().toDouble())); обдумать это решение!
            break;
        }
        case MINUS:
        {
            ui->label2->setText(QString::number(x) + " - ");
            return (x - y);
            break;
        }
        case MULTIPLICATION:
        {
            ui->label2->setText(QString::number(x) + " * ");
            return (x * y);
            break;
        }
        case DEV:
        {
            ui->label2->setText(QString::number(x) + " / ");
            if(y!=0) {return (x / y);}
            else {return 0;}
            break;
        }
        case NONE:
        {
            return 0;
            break;
        }
    };
            return 404;
};

void MainWindow::on_pC_clicked()// слот удаления одного элемента из галвного лейбла
{
    if (ui->label->text().size() != 1 && !(ui->label->text().contains('-') && ui->label->text().size() == 2) )// в случае если лейбл не пуст
    {
    QString str = (ui->label->text());
    str.chop (1);
    ui->label->setText(str);
    }
    else ui->label->setNum(0);
};

void MainWindow::on_pAC_clicked()// слот полного очищения лейбла икса и всего
{
    x = 0;
    ui->label->setNum(0);
    ui->label2->setNum(0);
    neednewnum = 1;
};

void MainWindow::on_pequal_clicked()//слот обработки нажатия кнопки равно
{
    if (oper == NONE)
    {
          x = ui->label->text().toDouble();
          ui->label2->setText(QString::number(x) + '=' + QString::number(x));
    }else
    {
        x = equality();
        ui->label2->setText(ui->label2->text() + QString::number(y) + '=' + QString::number(x));
    }
    lightOFF();
    ui->label->setText(QString::number(x));
    y = 0;
    neednewnum = 1;
    oper = NONE;
};

void MainWindow::on_pproc_clicked()
{
    if(y == 0)
    {
        x /= 100;
        ui->label->setNum(x);
    }
    else
    {
        y = (x * ui->label->text().toDouble())/ 100;
        ui->label->setNum(y);
    }
};
void MainWindow::on_pKoren_clicked()
{
    if (ui->label->text().toDouble() >= 0)
    {
    ui->label2->setText("√" + QString::number(ui->label->text().toDouble()) + "=" + ui->label->text());
    ui->label->setText(QString::number(sqrt(ui->label->text().toDouble()))); // фиксим баг неточности
    }
    else {
        ui->label2->setText("Number < 0!");
        ui->label->setText("ERROR");
    }
    neednewnum = 1;
};
void MainWindow::on_pKvadrat_clicked()
{
   // ui->label->setText(QString::number((ui->label->text().toDouble() * ui->label->text().toDouble()),'g',15)); старая весия
    ui->label2->setText(QString::number(ui->label->text().toDouble()) + " ^2 = " + QString::number((ui->label->text().toDouble() * ui->label->text().toDouble())) );
    ui->label->setText(QString::number((ui->label->text().toDouble() * ui->label->text().toDouble()))); // фиксим баг неточости
    neednewnum = 1;
};
void MainWindow::on_pLog_clicked()//протестировать
{
    if (ui->label->text().toDouble()>=0)
    {
    ui->label2->setText("Log" + QString::number(ui->label->text().toDouble()) + '=' + (QString::number(qLn(ui->label->text().toDouble()))));
    ui->label->setText(QString::number(qLn(ui->label->text().toDouble())));
    }
    else
    {
        ui->label2->setText("Number < 0!");
        ui->label->setText("ERROR");
    }
    neednewnum = 1;
};
void MainWindow::on_pPlusminus_clicked()
{
    x = (ui->label->text().toDouble() * (-1));
    if (oper == NONE)
    ui->label->setText(QString::number(x));
    else ui->label->setText("(" + QString::number(x) + ")");
}

void MainWindow::on_pStyle_clicked()// использовать QPalette а не вот это вот всё
{
    if (isBlack)
        {
            ui->pStyle->setText("day");
            ui->pStyle->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #868a8a, stop: 1 #e1f1f2);color: rgb(57, 50, 15);font: 63 12pt \"Bahnschrift SemiBold\"; } QPushButton:hover { border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7); color: rgb(0,0,0);} QPushButton:flat { border: none; } QPushButton:default {border-color: navy;}");
            ui->p0->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #868a8a, stop: 1 #e1f1f2);color: rgb(57, 50, 15);font: 63 18pt \"Bahnschrift SemiBold\"; } QPushButton:hover { border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7); color: rgb(0,0,0);} QPushButton:flat { border: none; } QPushButton:default {border-color: navy;}");
            ui->p1->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #868a8a, stop: 1 #e1f1f2);color: rgb(57, 50, 15);font: 63 18pt \"Bahnschrift SemiBold\"; } QPushButton:hover { border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7); color: rgb(0,0,0);} QPushButton:flat { border: none; } QPushButton:default {border-color: navy;}");
            ui->p2->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #868a8a, stop: 1 #e1f1f2);color: rgb(57, 50, 15);font: 63 18pt \"Bahnschrift SemiBold\"; } QPushButton:hover { border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7); color: rgb(0,0,0);} QPushButton:flat { border: none; } QPushButton:default {border-color: navy;}");
            ui->p3->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #868a8a, stop: 1 #e1f1f2);color: rgb(57, 50, 15);font: 63 18pt \"Bahnschrift SemiBold\"; } QPushButton:hover { border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7); color: rgb(0,0,0);} QPushButton:flat { border: none; } QPushButton:default {border-color: navy;}");
            ui->p4->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #868a8a, stop: 1 #e1f1f2);color: rgb(57, 50, 15);font: 63 18pt \"Bahnschrift SemiBold\"; } QPushButton:hover { border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7); color: rgb(0,0,0);} QPushButton:flat { border: none; } QPushButton:default {border-color: navy;}");
            ui->p5->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #868a8a, stop: 1 #e1f1f2);color: rgb(57, 50, 15);font: 63 18pt \"Bahnschrift SemiBold\"; } QPushButton:hover { border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7); color: rgb(0,0,0);} QPushButton:flat { border: none; } QPushButton:default {border-color: navy;}");
            ui->p6->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #868a8a, stop: 1 #e1f1f2);color: rgb(57, 50, 15);font: 63 18pt \"Bahnschrift SemiBold\"; } QPushButton:hover { border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7); color: rgb(0,0,0);} QPushButton:flat { border: none; } QPushButton:default {border-color: navy;}");
            ui->p7->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #868a8a, stop: 1 #e1f1f2);color: rgb(57, 50, 15);font: 63 18pt \"Bahnschrift SemiBold\"; } QPushButton:hover { border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7); color: rgb(0,0,0);} QPushButton:flat { border: none; } QPushButton:default {border-color: navy;}");
            ui->p8->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #868a8a, stop: 1 #e1f1f2);color: rgb(57, 50, 15);font: 63 18pt \"Bahnschrift SemiBold\"; } QPushButton:hover { border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7); color: rgb(0,0,0);} QPushButton:flat { border: none; } QPushButton:default {border-color: navy;}");
            ui->p9->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #868a8a, stop: 1 #e1f1f2);color: rgb(57, 50, 15);font: 63 18pt \"Bahnschrift SemiBold\"; } QPushButton:hover { border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7); color: rgb(0,0,0);} QPushButton:flat { border: none; } QPushButton:default {border-color: navy;}");
            ui->p0->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #868a8a, stop: 1 #e1f1f2);color: rgb(57, 50, 15);font: 63 18pt \"Bahnschrift SemiBold\"; } QPushButton:hover { border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7); color: rgb(0,0,0);} QPushButton:flat { border: none; } QPushButton:default {border-color: navy;}");
            ui->ppoint->setStyleSheet("QPushButton {border: 2px solid #050505; border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #868a8a, stop: 1 #e1f1f2);color: rgb(57, 50, 15);font: 63 18pt \"Bahnschrift SemiBold\"; } QPushButton:hover { border: 2px solid #050505; border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7); color: rgb(0,0,0);} QPushButton:flat { border: none; } QPushButton:default {border-color: navy;}");
            ui->pAC->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #7d7d7d, stop: 1 #cfcee0);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pC->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #7d7d7d, stop: 1 #cfcee0);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pKoren->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #7d7d7d, stop: 1 #cfcee0);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pPlusminus->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #7d7d7d, stop: 1 #cfcee0);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pKvadrat->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #7d7d7d, stop: 1 #cfcee0);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pLog->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #7d7d7d, stop: 1 #cfcee0);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pproc->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #7d7d7d, stop: 1 #cfcee0);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pmultiplication->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #7d7d7d, stop: 1 #cfcee0);color: #0b66ba;font: 63 18pt \"Bahnschrift SemiBold\";} QPushButton:hover{border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0); }QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pdev->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #7d7d7d, stop: 1 #cfcee0);color: #0b66ba;font: 63 18pt \"Bahnschrift SemiBold\";} QPushButton:hover{border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0); }QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pplus->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #7d7d7d, stop: 1 #cfcee0);color: #0b66ba;font: 63 18pt \"Bahnschrift SemiBold\";} QPushButton:hover{border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0); }QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pminus->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #7d7d7d, stop: 1 #cfcee0);color: #0b66ba;font: 63 18pt \"Bahnschrift SemiBold\";} QPushButton:hover{border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0); }QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->centralwidget->setStyleSheet("background-color: white");
            isBlack = false;
        }
        else
        {
            ui->pStyle->setText("night");
            ui->pStyle->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #050505, stop: 1 #575049);color: rgb(222, 222, 222);font: 63 13pt \"Bahnschrift SemiBold\";\n } \nQPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);\n}\nQPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0);}QPushButton:flat{border: none;}QPushButton:default {border-color: navy;}");
            ui->p0->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #050505, stop: 1 #575049);color: rgb(222, 222, 222);font: 63 18pt \"Bahnschrift SemiBold\";\n } \nQPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);\n}\nQPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0);}QPushButton:flat{border: none;}QPushButton:default {border-color: navy;}");
            ui->p1->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #050505, stop: 1 #575049);color: rgb(222, 222, 222);font: 63 18pt \"Bahnschrift SemiBold\";\n } \nQPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);\n}\nQPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0);}QPushButton:flat{border: none;}QPushButton:default {border-color: navy;}");
            ui->p2->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #050505, stop: 1 #575049);color: rgb(222, 222, 222);font: 63 18pt \"Bahnschrift SemiBold\";\n } \nQPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);\n}\nQPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0);}QPushButton:flat{border: none;}QPushButton:default {border-color: navy;}");
            ui->p3->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #050505, stop: 1 #575049);color: rgb(222, 222, 222);font: 63 18pt \"Bahnschrift SemiBold\";\n } \nQPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);\n}\nQPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0);}QPushButton:flat{border: none;}QPushButton:default {border-color: navy;}");
            ui->p4->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #050505, stop: 1 #575049);color: rgb(222, 222, 222);font: 63 18pt \"Bahnschrift SemiBold\";\n } \nQPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);\n}\nQPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0);}QPushButton:flat{border: none;}QPushButton:default {border-color: navy;}");
            ui->p5->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #050505, stop: 1 #575049);color: rgb(222, 222, 222);font: 63 18pt \"Bahnschrift SemiBold\";\n } \nQPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);\n}\nQPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0);}QPushButton:flat{border: none;}QPushButton:default {border-color: navy;}");
            ui->p6->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #050505, stop: 1 #575049);color: rgb(222, 222, 222);font: 63 18pt \"Bahnschrift SemiBold\";\n } \nQPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);\n}\nQPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0);}QPushButton:flat{border: none;}QPushButton:default {border-color: navy;}");
            ui->p7->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #050505, stop: 1 #575049);color: rgb(222, 222, 222);font: 63 18pt \"Bahnschrift SemiBold\";\n } \nQPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);\n}\nQPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0);}QPushButton:flat{border: none;}QPushButton:default {border-color: navy;}");
            ui->p8->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #050505, stop: 1 #575049);color: rgb(222, 222, 222);font: 63 18pt \"Bahnschrift SemiBold\";\n } \nQPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);\n}\nQPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0);}QPushButton:flat{border: none;}QPushButton:default {border-color: navy;}");
            ui->p9->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #050505, stop: 1 #575049);color: rgb(222, 222, 222);font: 63 18pt \"Bahnschrift SemiBold\";\n } \nQPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);\n}\nQPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0);}QPushButton:flat{border: none;}QPushButton:default {border-color: navy;}");
            ui->ppoint->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #050505, stop: 1 #575049);color: rgb(222, 222, 222);font: 63 18pt \"Bahnschrift SemiBold\";\n } \nQPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);\n}\nQPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0);}QPushButton:flat{border: none;}QPushButton:default {border-color: navy;}");
            ui->pAC->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #3c3d3c, stop: 1 #8c918c);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pC->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #3c3d3c, stop: 1 #8c918c);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pKoren->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #3c3d3c, stop: 1 #8c918c);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pPlusminus->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #3c3d3c, stop: 1 #8c918c);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pKvadrat->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #3c3d3c, stop: 1 #8c918c);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pLog->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #3c3d3c, stop: 1 #8c918c);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pproc->setStyleSheet("QPushButton { border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #3c3d3c, stop: 1 #8c918c);color:white;font: 63 10pt \"Bahnschrift SemiBold\"; } QPushButton:hover {border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed { border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0, 0,0);}QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pmultiplication->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #3c3d3c, stop: 1 #8c918c);color: rgb(11, 166, 186);font: 63 18pt \"Bahnschrift SemiBold\";} QPushButton:hover{border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0); }QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pdev->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #3c3d3c, stop: 1 #8c918c);color: rgb(11, 166, 186);font: 63 18pt \"Bahnschrift SemiBold\";} QPushButton:hover{border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0); }QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pplus->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #3c3d3c, stop: 1 #8c918c);color: rgb(11, 166, 186);font: 63 18pt \"Bahnschrift SemiBold\";} QPushButton:hover{border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0); }QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");
            ui->pminus->setStyleSheet("QPushButton {border: 2px solid #050505;border-radius: 5px;background-color:qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,stop: 0 #3c3d3c, stop: 1 #8c918c);color: rgb(11, 166, 186);font: 63 18pt \"Bahnschrift SemiBold\";} QPushButton:hover{border: 2px solid #050505;border-radius: 6px;background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,stop: 0 #21201f, stop: 1 #30fcbf);}QPushButton:pressed {border: 2px solid #050505;border-radius: 9px;background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,stop: 0 #383532, stop: 1 #32d9a7);color: rgb(0,0,0); }QPushButton:flat {border: none; }QPushButton:default {border-color: navy;}");

            ui->centralwidget->setStyleSheet("background-color:  #3c3d3c;");

            isBlack = true;
        }

}
