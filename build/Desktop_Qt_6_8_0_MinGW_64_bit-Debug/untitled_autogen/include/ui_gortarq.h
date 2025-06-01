/********************************************************************************
** Form generated from reading UI file 'gortarq.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GORTARQ_H
#define UI_GORTARQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gortarq
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Gortarq)
    {
        if (Gortarq->objectName().isEmpty())
            Gortarq->setObjectName("Gortarq");
        Gortarq->resize(1033, 340);
        Gortarq->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 105, 0);"));
        centralwidget = new QWidget(Gortarq);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(700, 30, 211, 221));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(152, 152, 152);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 30, 211, 221));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(152, 152, 152);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(800, 30, 61, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";\n"
"background-color: rgb(152, 152, 152);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(190, 30, 61, 41));
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";\n"
"background-color: rgb(152, 152, 152);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 70, 161, 161));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:75px;\n"
"background-color: rgb(255, 0, 0);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(730, 70, 161, 161));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius:75px;\n"
"background-color: rgb(255, 0, 0);"));
        Gortarq->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Gortarq);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1033, 25));
        Gortarq->setMenuBar(menubar);
        statusbar = new QStatusBar(Gortarq);
        statusbar->setObjectName("statusbar");
        Gortarq->setStatusBar(statusbar);

        retranslateUi(Gortarq);

        QMetaObject::connectSlotsByName(Gortarq);
    } // setupUi

    void retranslateUi(QMainWindow *Gortarq)
    {
        Gortarq->setWindowTitle(QCoreApplication::translate("Gortarq", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Gortarq", "A", nullptr));
        label_4->setText(QCoreApplication::translate("Gortarq", "B", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Gortarq: public Ui_Gortarq {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GORTARQ_H
