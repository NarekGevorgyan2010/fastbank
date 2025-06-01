#include "mainwindow.h"
#include <QThread>
#include "ui_mainwindow.h"
#include <fstream>
#include <iostream>
int i = 0;
int j = -1;
int A = 0;
int B = -1;
QString chekA[9] = {"A-00","A-01", "A-02", "A-03", "A-04", "hhh", "A-06", "A-07", "A-08", "A-09"};
std::string chekA1[9] = {"A-01", "A-02", "A-03", "A-04", "hhh", "A-06", "A-07", "A-08", "A-09"};
QString chekB[9] = {"B-01", "B-02", "B-03", "B-04", "B-05", "B-06", "B-07", "B-08", "B-09"};
std::string chekB1[9] = {"B-01", "B-02", "B-03", "B-04", "B-05", "B-06", "B-07", "B-08", "B-09"};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gumari->hide();
    ui->qartayin->hide();
    ui->varkeri->hide();
    QPropertyAnimation *anim1 = new QPropertyAnimation(ui->iravabanakan, "geometry");
    anim1->setDuration(2000);
    anim1->setEndValue(QRect(170, 300, 100, 40));
    anim1->start();
    QPropertyAnimation *anim2 = new QPropertyAnimation(ui->fizikakan, "geometry");
    anim2->setDuration(2000);
    anim2->setEndValue(QRect(170, 400, 100, 40));
    anim2->start();
    QPropertyAnimation *anim3 = new QPropertyAnimation(ui->logo, "geometry");
    anim3->setDuration(2000);
    anim3->setEndValue(QRect(120, 100, 200, 80));
    anim3->start();
    MainPage *mainpage = new MainPage();
    mainpage->show();
    Gortarq *gortarq = new Gortarq();
    gortarq->show();
    std::ofstream file("databaza.txt", std::ios::trunc);
    ui->textBrowser->hide();
    ui->home->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_iravabanakan_clicked()
{
    ui->textBrowser->hide();
    ui->iravabanakan->hide();
    ui->fizikakan->hide();
    ui->gumari->show();
    ui->qartayin->show();
    ui->varkeri->show();
    ui->home->hide();
}
void MainWindow::on_fizikakan_clicked()
{
    ui->textBrowser->hide();
    ui->iravabanakan->hide();
    ui->fizikakan->hide();
    ui->gumari->show();
    ui->qartayin->show();
    ui->varkeri->show();
    ui->home->hide();
}


void MainWindow::on_qartayin_clicked()
{
        std::ofstream file("databaza.txt", std::ios::app);

        ui->gumari->hide();
        ui->varkeri->hide();
        ui->qartayin->hide();
        ui->textBrowser->show();
        ui->home->show();
        if (A < 5 ) {
            ui->textBrowser->setText("qo ktroni hamarn e-" + chekA[i]);
            file << chekA1[i] << std::endl;
            file.close();
            i++;
            qDebug()<<chekA[i]<<"\n";
            A++;

            QPropertyAnimation *ktron = new QPropertyAnimation(ui->textBrowser, "geometry");
            ktron->setDuration(2000);
            ktron->setEndValue(QRect(90, 300, 300, 180));
            ktron->start();
        }

        if (A>4 && A <11 ) {
            ui->textBrowser->setText("qo ktroni hamarn e-" + chekB[j]);
            file << chekB1[j] << std::endl;
            file.close();
            j++;
            A++;
            QPropertyAnimation *ktron = new QPropertyAnimation(ui->textBrowser, "geometry");
            ktron->setDuration(2000);
            ktron->setEndValue(QRect(90, 300, 300, 180));
            ktron->start();
        }


}
void MainWindow::on_gumari_clicked()
{
        std::ofstream file("databaza.txt", std::ios::app);

        ui->gumari->hide();
        ui->varkeri->hide();
        ui->qartayin->hide();
        ui->textBrowser->show();
        if (i <= 4) {
            ui->textBrowser->setText("qo ktroni hamarn e-" + chekA[i]);
            file << chekA1[i] << std::endl;
            file.close();
            i++;
        }
        if (i >= 4) {
            ui->textBrowser->setText("qo ktroni hamarn e-" + chekB[j]);
            file << chekB1[j] << std::endl;
            file.close();
            j++;
        }
        ui->home->show();
        QPropertyAnimation *ktron = new QPropertyAnimation(ui->textBrowser, "geometry");
        ktron->setDuration(2000);
        ktron->setEndValue(QRect(90, 300, 300, 180));
        ktron->start();
}
void MainWindow::on_varkeri_clicked()
{
    std::ofstream file("databaza.txt", std::ios::app);

    ui->gumari->hide();
    ui->varkeri->hide();
    ui->qartayin->hide();
    ui->textBrowser->show();
    ui->home->show();
    if (i <= 4) {
        ui->textBrowser->setText("qo ktroni hamarn e-" + chekA[i]);
        file << chekA1[i] << std::endl;
        file.close();
        i++;
    }
    if (i >= 4) {
        ui->textBrowser->setText("qo ktroni hamarn e-" + chekB[j]);
        file << chekB1[j] << std::endl;
        file.close();
        j++;
    }

    QPropertyAnimation *ktron = new QPropertyAnimation(ui->textBrowser, "geometry");
    ktron->setDuration(2000);
    ktron->setEndValue(QRect(90, 300, 300, 180));
    ktron->start();
}



void MainWindow::on_home_clicked()
{
        ui->home->hide();
        ui->fizikakan->show();
        ui->iravabanakan->show();
        ui->textBrowser->hide();
        QPropertyAnimation *ktron = new QPropertyAnimation(ui->textBrowser, "geometry");
        ktron->setEndValue(QRect(90, 690, 256, 192));
        ktron->start();
}




