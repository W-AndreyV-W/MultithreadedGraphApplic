/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QProgressBar *progressBar_6;
    QProgressBar *progressBar_7;
    QProgressBar *progressBar_8;
    QProgressBar *progressBar_9;
    QProgressBar *progressBar_10;
    QSlider *horizontalSlider;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_6;
    QProgressBar *progressBar_1;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_3;
    QProgressBar *progressBar_4;
    QProgressBar *progressBar_5;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(242, 281);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 222, 237));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setAutoFillBackground(true);
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 202, 217));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        progressBar_6 = new QProgressBar(gridLayoutWidget);
        progressBar_6->setObjectName(QStringLiteral("progressBar_6"));
        progressBar_6->setValue(0);

        verticalLayout_5->addWidget(progressBar_6);

        progressBar_7 = new QProgressBar(gridLayoutWidget);
        progressBar_7->setObjectName(QStringLiteral("progressBar_7"));
        progressBar_7->setValue(0);

        verticalLayout_5->addWidget(progressBar_7);

        progressBar_8 = new QProgressBar(gridLayoutWidget);
        progressBar_8->setObjectName(QStringLiteral("progressBar_8"));
        progressBar_8->setValue(0);

        verticalLayout_5->addWidget(progressBar_8);

        progressBar_9 = new QProgressBar(gridLayoutWidget);
        progressBar_9->setObjectName(QStringLiteral("progressBar_9"));
        progressBar_9->setValue(0);

        verticalLayout_5->addWidget(progressBar_9);

        progressBar_10 = new QProgressBar(gridLayoutWidget);
        progressBar_10->setObjectName(QStringLiteral("progressBar_10"));
        progressBar_10->setValue(0);

        verticalLayout_5->addWidget(progressBar_10);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        horizontalSlider = new QSlider(gridLayoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(40);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        progressBar_1 = new QProgressBar(gridLayoutWidget);
        progressBar_1->setObjectName(QStringLiteral("progressBar_1"));
        progressBar_1->setValue(0);

        verticalLayout_6->addWidget(progressBar_1);

        progressBar_2 = new QProgressBar(gridLayoutWidget);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setValue(0);

        verticalLayout_6->addWidget(progressBar_2);

        progressBar_3 = new QProgressBar(gridLayoutWidget);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        progressBar_3->setValue(0);

        verticalLayout_6->addWidget(progressBar_3);

        progressBar_4 = new QProgressBar(gridLayoutWidget);
        progressBar_4->setObjectName(QStringLiteral("progressBar_4"));
        progressBar_4->setValue(0);

        verticalLayout_6->addWidget(progressBar_4);

        progressBar_5 = new QProgressBar(gridLayoutWidget);
        progressBar_5->setObjectName(QStringLiteral("progressBar_5"));
        progressBar_5->setValue(0);

        verticalLayout_6->addWidget(progressBar_5);


        gridLayout->addLayout(verticalLayout_6, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 242, 20));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\237\320\276\321\202\320\276\320\272\320\270", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
