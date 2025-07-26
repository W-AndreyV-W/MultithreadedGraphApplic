#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "poolthread.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void workerThread(unsigned int numberThread, int iter);
    void on_pushButton_clicked();
    void on_horizontalSlider_valueChanged(int value);
    void on_pushButton_2_clicked();

private:

    Ui::MainWindow *ui;
    PoolThread* poolThread;

    unsigned int timeThread = 10000;
};

#endif // MAINWINDOW_H
