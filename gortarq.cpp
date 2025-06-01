#include "gortarq.h"
#include "ui_gortarq.h"

Gortarq::Gortarq(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Gortarq)
{
    ui->setupUi(this);
}

Gortarq::~Gortarq()
{
    delete ui;
}
