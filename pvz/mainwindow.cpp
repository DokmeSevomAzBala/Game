#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "score.h"
#include "sun.h"
#include <QImage>
#include <QDebug>
#include <QGraphicsRectItem>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->view->setStyleSheet("background-image: url(:/new/images/images/Background1);");
    this->setFixedSize(1030,700);
    scene = new QGraphicsScene(this);
    ui->view->setScene(scene);
    sunfl = new sunflower();
    scene->addItem(sunfl);
    scene->setSceneRect(100,100,1000,700);
    sunfl->setPos(500,500);
    scene->setSceneRect(0,0,1031,726);
   t1 = new QTimer();
   connect(t1,SIGNAL(timeout()),this,SLOT(MakeSunOnScene()));
   t1->start(1000);
   t2 = new QTimer();
   connect(t2,SIGNAL(timeout()),this,SLOT(MoveAllSuns()));
   t2->start(10);
   connect(t1,SIGNAL(timeout()),this,SLOT(MakeSunForSunFlower()));
   zom1 = new zombie();
   zom1->setPos(150,100);
   scene->addItem(zom1);
   pshr = new peashooter();
   scene->addItem(pshr);
   pshr->setPos(200,100);


}

void MainWindow::MakeSunOnScene(){
    sun *Sun;
    Sun = new sun();
    qreal sunX = rand() % 1000;
    Sun->setPos(sunX,10);
    SunVec.push_back(Sun);
    scene->addItem(Sun);
}

void MainWindow::MakeSunForSunFlower()
{
    sunfl->s1->setPos(sunfl->x()+30,sunfl->y()+40);
    scene->addItem(sunfl->s1);
}

void MainWindow::MoveAllSuns()
{
        for (int i= 0; i< SunVec.size() ; i++){
            SunVec.at(i)->move_sun();
        }

}

MainWindow::~MainWindow()
{
    delete ui;
}


