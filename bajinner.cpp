#include "bajinner.h"
#include "ui_bajinner.h"

Bajinner::Bajinner(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Bajinner)
{
    ui->setupUi(this);
}

Bajinner::~Bajinner()
{
    delete ui;
}
