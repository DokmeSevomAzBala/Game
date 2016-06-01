#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "score.h"
#include <QImage>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->view->setStyleSheet("background-image: url(:/new/images/images/pvz_background);");
    this->setFixedSize(1032,726);
    scene = new QGraphicsScene(this);
    View = new QGraphicsView(scene);
    ui->view->setScene(scene);
    sunfl = new sunflower();
    scene->addItem(sunfl);
    sunfl->setPos(500,500);
    sunfl->setFlag(QGraphicsItem::ItemIsFocusable);
    sunfl->setFocus();
    scene->setSceneRect(0,0,1032,720);

   t1 = new QTimer();
   connect(t1,SIGNAL(timeout()),this,SLOT(MakeSun()));
   t1->start(1000);

   score sc;

}

void MainWindow::MakeSun(){
//    sun *s2;
//    s2 = new sun();
//    qreal sunX = rand() % 1000;
//    ui->SunInWindowLabel->setPixmap(s2->SunPic.scaled(ui->SunInWindowLabel->size()));
//    ui->SunInWindowLabel->setGeometry(sunX,0,80,80);
//    ui->SunInWindowLabel->setAttribute(Qt::WA_TranslucentBackground);
//    SunVec.push_back(s2);
}

MainWindow::~MainWindow()
{
    delete ui;
}


