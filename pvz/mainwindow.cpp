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
    ui->view->setStyleSheet("background-image: url(:/new/images/images/pvz_background);");
    this->setFixedSize(1031,726);

    scene = new QGraphicsScene(this);
    View = new QGraphicsView(scene);
    ui->view->setScene(scene);
    sunfl = new sunflower();
    scene->addItem(sunfl);
    sunflower *sf = new sunflower;
    sf->setPos(100,100);
    scene->addItem(sf);
    class sunflower *sf1 = new class sunflower();
    sf1->setPos(50,50);
    qDebug() << sf1->boundingRect().center();
    qDebug() << scene->sceneRect().center();
    scene->addItem(sf1);
    scene->setSceneRect(100,100,1000,700);
    //scene->setBackgroundBrush(Qt::white);// ///////////////////////////////////////////////////
    //sunfl->setPos(100,100);
    graphicsView = new QGraphicsView(scene);
    QGraphicsRectItem * rect = new QGraphicsRectItem();
    rect->setRect(500,500,50,50);
   // scene->addItem(rect);
    //ui->label->setPixmap(sunfl->PlantPic.scaled(ui->label->size()));
   //ui->label->setAttribute(Qt::WA_TranslucentBackground);
    sunfl->setPos(500,500);
    scene->setSceneRect(0,0,1031,726);
   t1 = new QTimer();
   connect(t1,SIGNAL(timeout()),this,SLOT(MakeSun()));
   t1->start(1000);
   t2 = new QTimer();
   connect(t2,SIGNAL(timeout()),this,SLOT(MoveAllSuns()));
   t2->start(10);


   score sc;

   zom1=new zombie();
   zom1->setPos(150,100);
   //zom1->setFlag(QGraphicsItem::ItemIsFocusable);
   //zom1->setFocus();
   scene->addItem(zom1);
   pshr = new peashooter();
   scene->addItem(pshr);
   pshr->setPos(200,100);


}

void MainWindow::MakeSun(){
    sun *Sun;
    Sun = new sun();
    qreal sunX = rand() % 1000;
    scene->addItem(Sun);
    Sun->setPos(sunX,10);
    SunVec.push_back(Sun);
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


