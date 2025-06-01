#ifndef BAJINNER_H
#define BAJINNER_H

#include <QMainWindow>

namespace Ui {
class Bajinner;
}

class Bajinner : public QMainWindow
{
    Q_OBJECT

public:
    explicit Bajinner(QWidget *parent = nullptr);
    ~Bajinner();

private:
    Ui::Bajinner *ui;
};

#endif // BAJINNER_H
