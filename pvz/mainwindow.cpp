#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "score.h"
#include <QImage>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-image: url(:/new/images/images/pvz_background);");
    this->setFixedSize(1032,726);
    scene = new QGraphicsScene(this);
    //ui->view->setScene(scene);

    sunfl = new sunflower();
    //ui->view->setBackgroundBrush(QImage(":/new/images/images/pvz_background"));
    //ui->view->scene();
    //sunfl->setPos(320,320);
    scene->addItem(sunfl);
    //ui->view->scene()->addItem(sunfl);
    //QGraphicsView view1(&scene);
    //view1.show();
    //create the rectangle
    QGraphicsRectItem * rect = new QGraphicsRectItem();
    rect->setRect(0,0,50,50);

    //add the item into the scene
    scene->addItem(rect);
    //scene->setSceneRect(600,480,600,480);
    ui->label->setPixmap(sunfl->PlantPic.scaled(ui->label->size()));
   ui->label->setAttribute(Qt::WA_TranslucentBackground);
    graphicsView = new QGraphicsView(scene);
   t1 = new QTimer();
   connect(t1,SIGNAL(timeout()),this,SLOT(MakeSun()));
   t1->start(1000);

   score sc;

}

void MainWindow::MakeSun(){
    sun *s2;
    s2 = new sun();
    qreal sunX = rand() % 1000;
    ui->SunInWindowLabel->setPixmap(s2->SunPic.scaled(ui->SunInWindowLabel->size()));
    ui->SunInWindowLabel->setGeometry(sunX,0,80,80);
    ui->SunInWindowLabel->setAttribute(Qt::WA_TranslucentBackground);
    SunVec.push_back(s2);
}

MainWindow::~MainWindow()
{
    delete ui;
}


