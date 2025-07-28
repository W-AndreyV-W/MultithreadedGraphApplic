#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){

    ui->setupUi(this);
    poolThread = new PoolThread(this, timeThread);

    connect(poolThread, &PoolThread::sig_workerThread, this, &MainWindow::workerThread);
}

MainWindow::~MainWindow(){

    delete ui;
    delete poolThread;
}

void MainWindow::workerThread(unsigned int numberThread, int iter){

    switch (numberThread) {

        case 1:
            ui->progressBar_1->setValue(iter);
            break;
        case 2:
            ui->progressBar_2->setValue(iter);
            break;
        case 3:
            ui->progressBar_3->setValue(iter);
            break;
        case 4:
            ui->progressBar_4->setValue(iter);
            break;
        case 5:
            ui->progressBar_5->setValue(iter);
            break;
        case 6:
            ui->progressBar_6->setValue(iter);
            break;
        case 7:
            ui->progressBar_7->setValue(iter);
            break;
        case 8:
            ui->progressBar_8->setValue(iter);
            break;
        case 9:
            ui->progressBar_9->setValue(iter);
            break;
        case 10:
            ui->progressBar_10->setValue(iter);
            break;
        default:
            break;
    }
}

void MainWindow::on_pushButton_clicked() {

     MainWindow::close();
}

void MainWindow::on_horizontalSlider_valueChanged(int value) {

    poolThread->setTime(value * 1000);
}

void MainWindow::on_pushButton_2_clicked() {

    poolThread->pool();
}
