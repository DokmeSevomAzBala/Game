/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 700);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        view = new QGraphicsView(centralWidget);
        view->setObjectName(QStringLiteral("view"));
        view->setGeometry(QRect(0, 60, 1031, 726));
        walnutB = new QPushButton(centralWidget);
        walnutB->setObjectName(QStringLiteral("walnutB"));
        walnutB->setGeometry(QRect(20, 10, 120, 50));
        peashooterB = new QPushButton(centralWidget);
        peashooterB->setObjectName(QStringLiteral("peashooterB"));
        peashooterB->setGeometry(QRect(160, 10, 120, 50));
        sunflowerB = new QPushButton(centralWidget);
        sunflowerB->setObjectName(QStringLiteral("sunflowerB"));
        sunflowerB->setGeometry(QRect(300, 10, 120, 50));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        walnutB->setText(QApplication::translate("MainWindow", "walnut,cost:50", 0));
        peashooterB->setText(QApplication::translate("MainWindow", "peashooter,cost:150", 0));
        sunflowerB->setText(QApplication::translate("MainWindow", "sunflower,cost:50", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
