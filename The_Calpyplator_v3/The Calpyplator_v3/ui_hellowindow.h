/********************************************************************************
** Form generated from reading UI file 'hellowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWINDOW_H
#define UI_HELLOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_HelloWindow
{
public:
    QLabel *label;

    void setupUi(QDialog *HelloWindow)
    {
        if (HelloWindow->objectName().isEmpty())
            HelloWindow->setObjectName(QString::fromUtf8("HelloWindow"));
        HelloWindow->resize(719, 469);
        HelloWindow->setMinimumSize(QSize(719, 469));
        HelloWindow->setMaximumSize(QSize(719, 469));
        HelloWindow->setWindowOpacity(1.000000000000000);
        HelloWindow->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(HelloWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 719, 459));
        label->setMinimumSize(QSize(719, 459));
        label->setMaximumSize(QSize(719, 459));
        label->setCursor(QCursor(Qt::WaitCursor));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/img/The_Calpyplator_2.png")));

        retranslateUi(HelloWindow);

        QMetaObject::connectSlotsByName(HelloWindow);
    } // setupUi

    void retranslateUi(QDialog *HelloWindow)
    {
        HelloWindow->setWindowTitle(QCoreApplication::translate("HelloWindow", "Dialog", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HelloWindow: public Ui_HelloWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWINDOW_H
