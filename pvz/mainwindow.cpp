#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-image: url(:/new/images/images/Background1.jpg);");
    this->setFixedSize(1014,597);
}

MainWindow::~MainWindow()
{
    delete ui;
}
