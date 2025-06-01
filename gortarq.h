#ifndef GORTARQ_H
#define GORTARQ_H

#include <QMainWindow>

namespace Ui {
class Gortarq;
}

class Gortarq : public QMainWindow
{
    Q_OBJECT

public:
    explicit Gortarq(QWidget *parent = nullptr);
    ~Gortarq();

private:
    Ui::Gortarq *ui;
};

#endif // GORTARQ_H
