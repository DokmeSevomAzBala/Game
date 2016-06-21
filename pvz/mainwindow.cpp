#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sun.h"
#include <QPixmap>
#include <QBrush>
#include <QPalette>
#include <QDebug>
#include <QGraphicsPixmapItem>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->view->setStyleSheet("background:transparent");
    this->setFixedSize(1030,700);
    scene = new QGraphicsScene(this);
    ui->view->setScene(scene);
    scene->setSceneRect(0,0,1000,700);
    QPixmap bkgnd(":/new/images/images/Background1");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    scene->setSceneRect(0,0,1031,726);
    sunfl = new sunflower();
    scene->addItem(sunfl);
    sunfl->setPos(500,500);
   t1 = new QTimer();
   connect(t1,SIGNAL(timeout()),this,SLOT(MakeSunOnScene()));
   t1->start(1000);
   t2 = new QTimer();
   connect(t2,SIGNAL(timeout()),this,SLOT(MoveAllSuns()));
   t2->start(10);
   connect(t1,SIGNAL(timeout()),this,SLOT(MakeSunForSunFlower()));
   zom1 = new zombie();
   zom1->setPos(250,100);
   scene->addItem(zom1);
   //if zobmbie too line has
  this->make_pea();
  QGraphicsPixmapItem *item = new QGraphicsPixmapItem;
  item->setPixmap(QPixmap(":/new/images/images/score_background_note"));
  scene->addItem(item);
  QPixmap a(":/new/images/images/peashooter_card3");
  QPixmap b(":/new/images/images/walnut_card3");
  QPixmap c(":/new/images/images/sunflower_card3");
  ui->walnutB->setIcon(b);
  ui->peashooterB->setIcon(a);
  ui->sunflowerB->setIcon(c);
  QTimer *ck;
  ck=new QTimer();
  connect(ck,SIGNAL(timeout()),SLOT(check()));
  ck->start(20);
connect(ui->peashooterB,SIGNAL(clicked()),this,SLOT(planting_peashooter()));
//connect(ui->walnutB,SIGNAL(clicked()),this,SLOT(planting_walnut()));
//connect(ui->sunflowerB,SIGNAL(clicked()),this,SLOT(planting_sunflower()));
    MyScore = new score();
    scene->addItem(MyScore);
    MyScore->setPos(70,25);
}
void MainWindow::planting_peashooter()
{
 pshr = new peashooter();
 scene->addItem(pshr);
 pshr->setPos(x_mouse,y_mouse);
 qDebug()<<x_mouse;
 qDebug()<<y_mouse;
}
//void MainWindow::planting_sunflower()
//{
//    sunfl = new sunflower();
//    scene->addItem(sunfl);
//    sunfl->setPos(x_mouse,y_mouse);

//}
void MainWindow::check()
{
    if(this->player1.ret_score()>=50)
   {
        ui->walnutB->setEnabled(true);
        ui->sunflowerB->setEnabled(true);

    }
    else{
        ui->walnutB->setEnabled(false);
        ui->sunflowerB->setEnabled(false);}
//    if(this->player1.ret_score()>=150){ ui->peashooterB->setEnabled(true);}
//   else{ ui->peashooterB->setEnabled(false);}
}
void MainWindow::make_pea()
{

  pea* p1;
  p1=new pea();
  scene->addPixmap(p1->ret_pix());
 //p1->set_x_y(pshr->Xpos+2*(p1->width()),pshr->Ypos-4);

  //p1->set_x_y(pshr->Xpos+2*(p1->width()),pshr->Ypos-4);

  //p1->move_p();////////////////thread
//  moveP=new QTimer();
//  connect(moveP,SIGNAL(timeout()),this,SLOT(move_p( )));
//  emit p1->move_p();
//  moveP->start(10);



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


void MainWindow::on_SunflowerButton_clicked()
{

}
 void MainWindow::mousePressEvent(QMouseEvent *ev)
 {
  x_mouse= ev->x();
  y_mouse=ev->y();
  qDebug()<<x_mouse;
  qDebug()<<y_mouse;

 }
