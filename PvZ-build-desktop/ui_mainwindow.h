/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Jun 11 21:22:19 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *view;
    QPushButton *walnutB;
    QPushButton *peashooterB;
    QPushButton *sunflowerB;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 700);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        view = new QGraphicsView(centralWidget);
        view->setObjectName(QString::fromUtf8("view"));
        view->setGeometry(QRect(0, 60, 1031, 726));
        walnutB = new QPushButton(centralWidget);
        walnutB->setObjectName(QString::fromUtf8("walnutB"));
        walnutB->setGeometry(QRect(20, 10, 120, 50));
        peashooterB = new QPushButton(centralWidget);
        peashooterB->setObjectName(QString::fromUtf8("peashooterB"));
        peashooterB->setGeometry(QRect(160, 10, 120, 50));
        sunflowerB = new QPushButton(centralWidget);
        sunflowerB->setObjectName(QString::fromUtf8("sunflowerB"));
        sunflowerB->setGeometry(QRect(300, 10, 120, 50));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        walnutB->setText(QApplication::translate("MainWindow", "walnut,cost:50", 0, QApplication::UnicodeUTF8));
        peashooterB->setText(QApplication::translate("MainWindow", "peashooter,cost:150", 0, QApplication::UnicodeUTF8));
        sunflowerB->setText(QApplication::translate("MainWindow", "sunflower,cost:50", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
