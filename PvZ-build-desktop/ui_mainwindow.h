/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Jun 24 18:48:26 2016
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
        view->setGeometry(QRect(0, 0, 1031, 726));
        walnutB = new QPushButton(centralWidget);
        walnutB->setObjectName(QString::fromUtf8("walnutB"));
        walnutB->setGeometry(QRect(25, 120, 106, 142));
        walnutB->setIconSize(QSize(106, 142));
        peashooterB = new QPushButton(centralWidget);
        peashooterB->setObjectName(QString::fromUtf8("peashooterB"));
        peashooterB->setGeometry(QRect(25, 280, 106, 142));
        peashooterB->setIconSize(QSize(106, 142));
        sunflowerB = new QPushButton(centralWidget);
        sunflowerB->setObjectName(QString::fromUtf8("sunflowerB"));
        sunflowerB->setGeometry(QRect(25, 440, 106, 142));
        sunflowerB->setIconSize(QSize(106, 142));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 22));
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
        walnutB->setText(QString());
        peashooterB->setText(QString());
        sunflowerB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
