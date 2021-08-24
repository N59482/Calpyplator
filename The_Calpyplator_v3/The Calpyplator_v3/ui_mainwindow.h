/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *p2;
    QPushButton *ppoint;
    QPushButton *pKoren;
    QPushButton *p6;
    QPushButton *pAC;
    QPushButton *p9;
    QPushButton *p8;
    QPushButton *pdev;
    QPushButton *pKvadrat;
    QPushButton *p1;
    QLabel *label;
    QPushButton *p4;
    QPushButton *pproc;
    QPushButton *pminus;
    QPushButton *p3;
    QPushButton *pPlusminus;
    QPushButton *p7;
    QPushButton *pequal;
    QPushButton *p0;
    QPushButton *pLog;
    QPushButton *p5;
    QPushButton *pmultiplication;
    QPushButton *pplus;
    QPushButton *pC;
    QLabel *label2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(360, 455);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(360, 455));
        MainWindow->setMaximumSize(QSize(360, 455));
        MainWindow->setWindowTitle(QString::fromUtf8("The Calpyplator"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/img/The_C .png"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(360, 455));
        centralwidget->setMaximumSize(QSize(360, 455));
        centralwidget->setStyleSheet(QString::fromUtf8("/*background-color: rgb(34, 94, 102);\n"
"background-color: rgb(34, 94, 102);*/\n"
" background-color:#3c3d3c"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 364, 456));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        p2 = new QPushButton(layoutWidget);
        p2->setObjectName(QString::fromUtf8("p2"));
        p2->setMinimumSize(QSize(70, 70));
        p2->setMaximumSize(QSize(70, 70));
        p2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #050505, stop: 1 #575049);\n"
"    color: rgb(222, 222, 222);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(p2, 4, 1, 1, 1);

        ppoint = new QPushButton(layoutWidget);
        ppoint->setObjectName(QString::fromUtf8("ppoint"));
        ppoint->setMinimumSize(QSize(70, 70));
        ppoint->setMaximumSize(QSize(70, 70));
        ppoint->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #050505, stop: 1 #575049);\n"
"    color: rgb(222, 222, 222);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(ppoint, 7, 0, 1, 1);

        pKoren = new QPushButton(layoutWidget);
        pKoren->setObjectName(QString::fromUtf8("pKoren"));
        pKoren->setMinimumSize(QSize(70, 70));
        pKoren->setMaximumSize(QSize(70, 70));
        pKoren->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #3c3d3c, stop: 1 #8c918c);\n"
"    color: white;\n"
"     font: 63 10pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(pKoren, 2, 2, 1, 1);

        p6 = new QPushButton(layoutWidget);
        p6->setObjectName(QString::fromUtf8("p6"));
        p6->setMinimumSize(QSize(70, 70));
        p6->setMaximumSize(QSize(70, 70));
        p6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #050505, stop: 1 #575049);\n"
"    color: rgb(222, 222, 222);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(p6, 5, 2, 1, 1);

        pAC = new QPushButton(layoutWidget);
        pAC->setObjectName(QString::fromUtf8("pAC"));
        pAC->setMinimumSize(QSize(70, 70));
        pAC->setMaximumSize(QSize(70, 70));
        pAC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #3c3d3c, stop: 1 #8c918c);\n"
"    color: white;\n"
"     font: 63 10pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(pAC, 4, 4, 1, 1);

        p9 = new QPushButton(layoutWidget);
        p9->setObjectName(QString::fromUtf8("p9"));
        p9->setMinimumSize(QSize(70, 70));
        p9->setMaximumSize(QSize(70, 70));
        p9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #050505, stop: 1 #575049);\n"
"    color: rgb(222, 222, 222);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(p9, 6, 2, 1, 1);

        p8 = new QPushButton(layoutWidget);
        p8->setObjectName(QString::fromUtf8("p8"));
        p8->setMinimumSize(QSize(70, 70));
        p8->setMaximumSize(QSize(70, 70));
        p8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #050505, stop: 1 #575049);\n"
"    color: rgb(222, 222, 222);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);    \n"
"      color: rgb(0,0,0);\n"
"\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(p8, 6, 1, 1, 1);

        pdev = new QPushButton(layoutWidget);
        pdev->setObjectName(QString::fromUtf8("pdev"));
        pdev->setMinimumSize(QSize(70, 70));
        pdev->setMaximumSize(QSize(70, 70));
        pdev->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #3c3d3c, stop: 1 #8c918c);\n"
"    color: rgb(11, 166, 186);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(pdev, 6, 4, 1, 1);

        pKvadrat = new QPushButton(layoutWidget);
        pKvadrat->setObjectName(QString::fromUtf8("pKvadrat"));
        pKvadrat->setMinimumSize(QSize(70, 70));
        pKvadrat->setMaximumSize(QSize(70, 70));
        pKvadrat->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #3c3d3c, stop: 1 #8c918c);\n"
"    color: white;\n"
"     font: 63 10pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0, 0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(pKvadrat, 2, 1, 1, 1);

        p1 = new QPushButton(layoutWidget);
        p1->setObjectName(QString::fromUtf8("p1"));
        p1->setMinimumSize(QSize(70, 68));
        p1->setMaximumSize(QSize(70, 70));
        p1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #050505, stop: 1 #575049);\n"
"    color: rgb(222, 222, 222);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(p1, 4, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(355, 70));
        label->setMaximumSize(QSize(70, 70));
        label->setStyleSheet(QString::fromUtf8("font: 63 26pt \"Bahnschrift SemiBold\";\n"
""));

        gridLayout_2->addWidget(label, 0, 0, 1, 5);

        p4 = new QPushButton(layoutWidget);
        p4->setObjectName(QString::fromUtf8("p4"));
        p4->setMinimumSize(QSize(70, 70));
        p4->setMaximumSize(QSize(70, 70));
        p4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,   \n"
"                                    stop: 0 #050505, stop: 1 #575049);\n"
"    color: rgb(222, 222, 222);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
"\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(p4, 5, 0, 1, 1);

        pproc = new QPushButton(layoutWidget);
        pproc->setObjectName(QString::fromUtf8("pproc"));
        pproc->setMinimumSize(QSize(70, 70));
        pproc->setMaximumSize(QSize(70, 70));
        pproc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #3c3d3c, stop: 1 #8c918c);\n"
"    color: white;\n"
"     font: 63 10pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(pproc, 4, 3, 1, 1);

        pminus = new QPushButton(layoutWidget);
        pminus->setObjectName(QString::fromUtf8("pminus"));
        pminus->setMinimumSize(QSize(70, 70));
        pminus->setMaximumSize(QSize(70, 70));
        pminus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #3c3d3c, stop: 1 #8c918c);\n"
"    color: rgb(11, 166, 186);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(pminus, 6, 3, 1, 1);

        p3 = new QPushButton(layoutWidget);
        p3->setObjectName(QString::fromUtf8("p3"));
        p3->setMinimumSize(QSize(70, 70));
        p3->setMaximumSize(QSize(70, 70));
        p3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #050505, stop: 1 #575049);\n"
"    color: rgb(222, 222, 222);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(p3, 4, 2, 1, 1);

        pPlusminus = new QPushButton(layoutWidget);
        pPlusminus->setObjectName(QString::fromUtf8("pPlusminus"));
        pPlusminus->setMinimumSize(QSize(70, 70));
        pPlusminus->setMaximumSize(QSize(70, 70));
        pPlusminus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #3c3d3c, stop: 1 #8c918c);\n"
"    color: white;\n"
"     font: 63 10pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0, 0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(pPlusminus, 2, 3, 1, 1);

        p7 = new QPushButton(layoutWidget);
        p7->setObjectName(QString::fromUtf8("p7"));
        p7->setMinimumSize(QSize(70, 70));
        p7->setMaximumSize(QSize(70, 70));
        p7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #050505, stop: 1 #575049);\n"
"    color: rgb(222, 222, 222);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(p7, 6, 0, 1, 1);

        pequal = new QPushButton(layoutWidget);
        pequal->setObjectName(QString::fromUtf8("pequal"));
        pequal->setMinimumSize(QSize(70, 70));
        pequal->setMaximumSize(QSize(140, 70));
        pequal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     /*background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);*/\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #0cadc2);\n"
"    color: rgb(222, 222, 222);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"    /* background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #423b34, stop: 1 #14fcb7);*/\n"
"    background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #423b34, stop: 1 #21c8de);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     /* background-color: qlineargradient"
                        "(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #4fb898);*/\n"
"    background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #1fdaf2);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(pequal, 7, 3, 1, 2);

        p0 = new QPushButton(layoutWidget);
        p0->setObjectName(QString::fromUtf8("p0"));
        p0->setMinimumSize(QSize(140, 70));
        p0->setMaximumSize(QSize(140, 70));
        p0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #050505, stop: 1 #575049);\n"
"    color: rgb(222, 222, 222);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(p0, 7, 1, 1, 2);

        pLog = new QPushButton(layoutWidget);
        pLog->setObjectName(QString::fromUtf8("pLog"));
        pLog->setMinimumSize(QSize(70, 70));
        pLog->setMaximumSize(QSize(70, 70));
        pLog->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #3c3d3c, stop: 1 #8c918c);\n"
"    color: white;\n"
"     font: 63 10pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0, 0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(pLog, 2, 0, 1, 1);

        p5 = new QPushButton(layoutWidget);
        p5->setObjectName(QString::fromUtf8("p5"));
        p5->setMinimumSize(QSize(70, 70));
        p5->setMaximumSize(QSize(70, 70));
        p5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #050505, stop: 1 #575049);\n"
"    color: rgb(222, 222, 222);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(p5, 5, 1, 1, 1);

        pmultiplication = new QPushButton(layoutWidget);
        pmultiplication->setObjectName(QString::fromUtf8("pmultiplication"));
        pmultiplication->setMinimumSize(QSize(70, 70));
        pmultiplication->setMaximumSize(QSize(70, 70));
        pmultiplication->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #3c3d3c, stop: 1 #8c918c);\n"
"    color: rgb(11, 166, 186);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(pmultiplication, 5, 4, 1, 1);

        pplus = new QPushButton(layoutWidget);
        pplus->setObjectName(QString::fromUtf8("pplus"));
        pplus->setMinimumSize(QSize(70, 70));
        pplus->setMaximumSize(QSize(70, 70));
        pplus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #3c3d3c, stop: 1 #8c918c);\n"
"    color: rgb(11, 166, 186);\n"
"     font: 63 18pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0,0,0);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(pplus, 5, 3, 1, 1);

        pC = new QPushButton(layoutWidget);
        pC->setObjectName(QString::fromUtf8("pC"));
        pC->setMinimumSize(QSize(70, 70));
        pC->setMaximumSize(QSize(70, 70));
        pC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 5px;\n"
"     background-color: qlineargradient(x1: 0.35, y1: 0.7, x2: 0.5, y2: 0,\n"
"                                       stop: 0 #3c3d3c, stop: 1 #8c918c);\n"
"    color: white;\n"
"     font: 63 10pt \"Bahnschrift SemiBold\";\n"
" } \n"
"QPushButton:hover {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0.6, y1: 1.1 x2: 0.9, y2: 0,\n"
"                                       stop: 0 #21201f, stop: 1 #30fcbf);\n"
"}\n"
"QPushButton:pressed {\n"
"     border: 2px solid #050505;\n"
"     border-radius: 9px;\n"
"     background-color: qlineargradient(x1: 0.45, y1: 0.8, x2: 0.6, y2: 0,\n"
"                                       stop: 0 #383532, stop: 1 #32d9a7);\n"
"    color: rgb(0, 0,0);\n"
"\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:flat {\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy;\n"
" }"));

        gridLayout_2->addWidget(pC, 2, 4, 1, 1);

        label2 = new QLabel(layoutWidget);
        label2->setObjectName(QString::fromUtf8("label2"));

        gridLayout_2->addWidget(label2, 1, 0, 1, 5);

        gridLayout_2->setRowStretch(0, 70);
        gridLayout_2->setColumnStretch(0, 70);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        p2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        ppoint->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pKoren->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        p6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pAC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        p9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        p8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pdev->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pKvadrat->setText(QCoreApplication::translate("MainWindow", "^2", nullptr));
        p1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        p4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pproc->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pminus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        p3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pPlusminus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        p7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pequal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        p0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pLog->setText(QCoreApplication::translate("MainWindow", "Log", nullptr));
        p5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pmultiplication->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pplus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
