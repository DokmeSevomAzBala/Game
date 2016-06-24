#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sun.h"
#include "level.h"
#include <QPixmap>
#include <QBrush>
#include <QPalette>
#include <QDebug>
#include <QGraphicsPixmapItem>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    ui->view->setStyleSheet("background:transparent");
    this->setFixedSize(1030,700);
    Level::loadLevels();

    // Validate level file (if it exists or readable).
    if (!Level::validLevelFile())
    {
        QMessageBox::question(this, "Invalid file", "Invalid level file. Cannot run game.", QMessageBox::Ok);
        close();
    }

    scene = new QGraphicsScene(this);
    ui->view->setScene(scene);
    scene->setSceneRect(0,0,1000,700);
    QPixmap bkgnd(":/new/images/images/Background1");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    scene->setSceneRect(0,0,1031,726);
    gs = new GameScreen();
    t1 = new QTimer();
    connect(t1,SIGNAL(timeout()),this,SLOT(MakeSunOnScene()));
    t1->start(1000);
    t2 = new QTimer();
    connect(t2,SIGNAL(timeout()),this,SLOT(MoveAllSuns()));
    t2->start(10);

//    connect(t1,SIGNAL(timeout()),sunfl,SLOT(MakeSunForSunFlower()));
/*    zom1 = new zombie();
    zom1->setPos(500,100);
    scene->addItem(zom1);
    zombie *zom2 = new zombie();
    zom2->setPos(700,400);
    scene->addItem(zom2);*/
    zomcrt = new QTimer();
    zomcrt->start(5000);
    connect(zomcrt,SIGNAL(timeout()),this,SLOT(creatzom()));
    wl = new walnut();
    scene->addItem(wl);
    wl->setPos(500,500);

    QGraphicsPixmapItem *item = new QGraphicsPixmapItem;
    item->setPixmap(QPixmap(":/new/images/images/score_background_note"));
    scene->addItem(item);
    QPixmap a(":/new/images/images/peashooter_card3");
    QPixmap b(":/new/images/images/walnut_card3");
    QPixmap c(":/new/images/images/sunflower_card3");
    ui->walnutB->setIcon(b);
    ui->peashooterB->setIcon(a);
    ui->sunflowerB->setIcon(c);
    MyScore = new score();
    MyScore->setPos(70,25);
    scene->addItem(MyScore);
    QTimer *ck;
    ck=new QTimer();
    connect(ck,SIGNAL(timeout()),SLOT(check()));
    ck->start(20);
    connect(ui->peashooterB,SIGNAL(clicked()),this,SLOT(planting_peashooter()));
    //connect(ui->peashooterB,SIGNAL(clicked()),this,SLOT(mousePressEvent(QMouseEvent*)));
    //connect(ui->walnutB,SIGNAL(clicked()),this,SLOT(planting_walnut()));
    connect(ui->sunflowerB,SIGNAL(clicked()),this,SLOT(planting_sunflower()));

}
void MainWindow::planting_peashooter()
{
     pshr = new peashooter();
     scene->addItem(pshr);
     pshr->setPos(x_mouse,y_mouse);
     pshr->Xpos=x_mouse;
     pshr->Ypos=y_mouse;
     this->MyScore->subtract(100);
      pshr->make_pea();////////////////////////////////////////in nbayad inja bashe
}
void MainWindow::planting_walnut()
{
 wl = new walnut();
 scene->addItem(wl);
 wl->setPos(x_mouse,y_mouse);
 qDebug()<<x_mouse;
 qDebug()<<y_mouse;
}
//void MainWindow::planting_sunflower()
//{
//    sunfl = new sunflower();
//    scene->addItem(sunfl);
//    sunfl->setPos(x_mouse,y_mouse);
void MainWindow::planting_sunflower()
{
    sunfl = new sunflower();
    scene->addItem(sunfl);
    sunfl->setPos(x_mouse,y_mouse);
    this->MyScore->subtract(50);


}
void MainWindow::check()
{
    if(this->MyScore->ret_score()>=50)
   {
        ui->walnutB->setEnabled(true);
        ui->sunflowerB->setEnabled(true);

    }
    else{
        ui->walnutB->setEnabled(false);
        ui->sunflowerB->setEnabled(false);
    }
    if(this->MyScore->ret_score()>=100)
        ui->peashooterB->setEnabled(true);
   else ui->peashooterB->setEnabled(false);
}

void MainWindow::MakeSunOnScene(){
    sun *Sun;
    Sun = new sun();
    qreal sunX = rand() % 1000;
    Sun->setPos(sunX,0);
    SunVec.push_back(Sun);
    scene->addItem(Sun);
}


void MainWindow::MoveAllSuns()
{
        for (int i= 0; i< SunVec.size() ; i++){
            SunVec.at(i)->move_sun();
        }

}

void MainWindow::creatzom()
{
    zombie* zom1=new zombie();
    zomvec.push_back(zom1);

}

MainWindow::~MainWindow()
{
    delete ui;
}

 void MainWindow::mousePressEvent(QMouseEvent *ev){
     if (ev->x() < 1000 && ev->y() < 640 && ev->x() > 250 && ev->y() > 65){
        x_mouse= ev->x();
        y_mouse=ev->y();
        screen(x_mouse,y_mouse);
     }

     }
 void MainWindow::screen(qreal x , qreal y){
     for (int i = 0 ; i < 9 ; i++){
         for (int j = 0 ; j < 5 ; j++){
             gs->IfGridIsFull[i][j] = 1;
             if (i < 8 && j<4 ){
                if(x > gs->grid[i][j].x() && x < (gs->grid[i+1][j].x()) &&
                   y > gs->grid[i][j].y() && y < (gs->grid[i][j+1].y())){
                    x_mouse = gs->grid[i][j].x();
                    y_mouse = gs->grid[i][j].y();
                 }
             }
             else if (i == 8 && j < 4){
                if(x > gs->grid[i][j].x() && x < (gs->grid[i][j].x() + 100) &&
                   y > gs->grid[i][j].y() && y < (gs->grid[i][j+1].y()) ){
                    qDebug() << i << j << gs->grid[i][j];
                }
             }
             else if (j == 4 && i < 8){
                 if(x > gs->grid[i][j].x() && x < (gs->grid[i+1][j].x()) &&
                    y > gs->grid[i][j].y() && y < (gs->grid[i][j].y() + 100)){
                     x_mouse = gs->grid[i][j].x();
                     y_mouse = gs->grid[i][j].y();

                 }
             }
             if (i == 8 && j == 4){
                 if(x > gs->grid[i][j].x() && x < (gs->grid[i][j].x() + 100) &&
                    y > gs->grid[i][j].y() && y < (gs->grid[i][j].y() + 100)){
                     x_mouse = gs->grid[i][j].x();
                     y_mouse = gs->grid[i][j].y();
                 }
             }
         }
     }
 }

//void MainWindow::on_peashooterB_clicked()
//{
//    pshr = new peashooter();
//    scene->addItem(pshr);
//    pshr->setPos(x_mouse,y_mouse);
//}
