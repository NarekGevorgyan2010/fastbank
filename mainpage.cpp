
#include "mainpage.h"
#include "ui_mainpage.h"
#include <fstream>
#include <QString>
#include <QTimer>
MainPage::MainPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainPage)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainPage::readFile);
    timer->start(5000);
}

MainPage::~MainPage()
{
    delete ui;
}
void MainPage::readFile()
{

    static int lastLineCount = 0;
    std::ifstream file("databaza.txt");
    std::string line;
    int currentLine = 0;

    while (std::getline(file, line)) {
        if (currentLine >= lastLineCount) {
            ui->plainTextEdit->appendPlainText("համեցեք գործարքների: " + QString::fromStdString(line));
        }
        currentLine++;
    }
    lastLineCount = currentLine;
    file.close();
}
