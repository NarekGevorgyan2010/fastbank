#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QPropertyAnimation"
#include <QMainWindow>
#include "mainpage.h"
#include "gortarq.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QPropertyAnimation anim1;
     QPropertyAnimation anim2;
     QPropertyAnimation anim3;
        QPropertyAnimation ktron;
 private slots:
     void on_home_clicked();

     void on_varkeri_clicked();

     void on_gumari_clicked();

     void on_qartayin_clicked();

     void on_fizikakan_clicked();

     void on_iravabanakan_clicked();

 private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
