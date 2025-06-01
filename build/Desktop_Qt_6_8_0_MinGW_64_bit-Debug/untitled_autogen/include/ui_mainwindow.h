/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *iravabanakan;
    QPushButton *fizikakan;
    QLabel *logo;
    QPushButton *gumari;
    QPushButton *qartayin;
    QPushButton *varkeri;
    QPushButton *home;
    QTextEdit *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(444, 762);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        iravabanakan = new QPushButton(centralwidget);
        iravabanakan->setObjectName("iravabanakan");
        iravabanakan->setGeometry(QRect(0, 270, 83, 29));
        iravabanakan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(181, 24, 142);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:  rgb(181, 24, 142);\n"
"}"));
        iravabanakan->setAutoDefault(true);
        fizikakan = new QPushButton(centralwidget);
        fizikakan->setObjectName("fizikakan");
        fizikakan->setGeometry(QRect(0, 380, 83, 29));
        fizikakan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(181, 24, 142);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:  rgb(181, 24, 142);\n"
"}"));
        fizikakan->setAutoDefault(true);
        fizikakan->setFlat(false);
        logo = new QLabel(centralwidget);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(100, -60, 201, 71));
        logo->setStyleSheet(QString::fromUtf8("border-image: url(:/Pictures/fast bank.png);"));
        gumari = new QPushButton(centralwidget);
        gumari->setObjectName("gumari");
        gumari->setGeometry(QRect(170, 260, 111, 41));
        gumari->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(181, 24, 142);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:  rgb(181, 24, 142);\n"
"}"));
        gumari->setAutoDefault(true);
        qartayin = new QPushButton(centralwidget);
        qartayin->setObjectName("qartayin");
        qartayin->setGeometry(QRect(170, 400, 111, 41));
        qartayin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(181, 24, 142);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:  rgb(181, 24, 142);\n"
"}"));
        qartayin->setAutoDefault(true);
        varkeri = new QPushButton(centralwidget);
        varkeri->setObjectName("varkeri");
        varkeri->setGeometry(QRect(170, 330, 111, 41));
        varkeri->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(181, 24, 142);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:  rgb(181, 24, 142);\n"
"}"));
        varkeri->setAutoDefault(true);
        home = new QPushButton(centralwidget);
        home->setObjectName("home");
        home->setGeometry(QRect(170, 210, 111, 41));
        home->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(181, 24, 142);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:  rgb(181, 24, 142);\n"
"}"));
        home->setAutoDefault(true);
        textBrowser = new QTextEdit(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(110, 710, 231, 141));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 76, 172);\n"
"color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 444, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        iravabanakan->setDefault(true);
        fizikakan->setDefault(true);
        gumari->setDefault(true);
        qartayin->setDefault(true);
        varkeri->setDefault(true);
        home->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        iravabanakan->setText(QCoreApplication::translate("MainWindow", "iravabanakan", nullptr));
        fizikakan->setText(QCoreApplication::translate("MainWindow", "fizikakan", nullptr));
        logo->setText(QString());
        gumari->setText(QCoreApplication::translate("MainWindow", "gumari", nullptr));
        qartayin->setText(QCoreApplication::translate("MainWindow", "qartayin", nullptr));
        varkeri->setText(QCoreApplication::translate("MainWindow", "varkeri", nullptr));
        home->setText(QCoreApplication::translate("MainWindow", "home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
