#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sun.h"
#include <QPixmap>
#include <QBrush>
#include <QPalette>
#include <QDebug>
#include <QGraphicsPixmapItem>
#include <QMessageBox>
//bool  GameScreen::IfGridIsFull[9][5];
GameScreen* MainWindow::gs;
bool MainWindow::IfZombieIsInW[5];
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gs = new GameScreen(ui->view);
    gs->setFixedSize(ui->view->size());

    // Make scene and make dimensions same as graphicsView.
    scene = new QGraphicsScene(gs);
    ui->view->setStyleSheet("background:transparent");
    gs->setStyleSheet("background:transparent");
    gs->setScene(scene);
    gs->show();
    this->setFixedSize(1031,726);
    Level::loadLevels();

    // Validate level file (if it exists or readable).
    if (!Level::validLevelFile())
    {
        QMessageBox::question(this, "Invalid file", "Invalid level file. Cannot run game.", QMessageBox::Ok);
        close();
    }

    scene = new QGraphicsScene(this);
    gs->setScene(scene);
    scene->setSceneRect(0,0,1031,726);
    QPixmap bkgnd(":/new/images/images/Background1");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    scene->setSceneRect(0,0,1031,726);
    for (int i = 0 ; i < 5 ; i++){
        LMs[i]= new lawn_mower();
        scene->addItem(LMs[i]);
        LMs[i]->setPos(gs->grid[0][i].x()-80,gs->grid[0][i].y()+20);
        IfZombieIsInW[i] = 0;
    }
    t1 = new QTimer();
    // QThread* thread1 = new QThread();
    // t1->setInterval(3000);
    // t1->moveToThread(thread1);
   // connect(thread1, SIGNAL(started()), t1, SLOT(start()));
    t1->start(3000);
    connect(t1,SIGNAL(timeout()),this,SLOT(MakeSunOnScene()));
    //thread1->start();

    t2 = new QTimer();
   //  QThread* thread2 = new QThread();
    // t2->setInterval(10);
    // t2->moveToThread(thread2);
    // connect(thread2, SIGNAL(started()), t2, SLOT(start()));
    connect(t2,SIGNAL(timeout()),this,SLOT(MoveAllSuns()));
    t2->start(10);
    //thread2->start();

    //    connect(t1,SIGNAL(timeout()),sunfl,SLOT(MakeSunForSunFlower()));
    creatzom(Level::level);
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
    //creatzom(1);
    ck=new QTimer();
    ck->start(20);
    //creatzom(1);
   // QThread* thread3 = new QThread();
  //  ck->setInterval(20);
   // ck->moveToThread(thread3);
   // connect(thread2, SIGNAL(started()), t2, SLOT(start()));
    connect(ck,SIGNAL(timeout()),SLOT(check()));
   // thread3->start();
    connect(gs,SIGNAL(click()),this,SLOT(planting()));
   // connect(gs,SIGNAL(create()),this,SLOT(creatzom()));

//    thread1->wait();
//    thread2->wait();
//    thread3->wait();
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

void MainWindow::planting()
{
    if (gs->IfGridIsFull[gs->retI()][gs->retJ()] == 0){
        gs->IfGridIsFull[gs->retI()][gs->retJ()] = 1;
        if (ThePlantingPlant == "peashooterB"){
            pshr = new peashooter();
            scene->addItem(pshr);
            pshr->setPos(gs->retX(),gs->retY());
            pshr->make_pea();
            gs->IfPeashooterISIn[gs->retI()][gs->retJ()] = 1;
            this->MyScore->subtract(100);
            IfZombieAndPeashooterAreInSameRaw(pshr);
             //pshr->make_pea();////////in nbayad inja bashe
        }
        else if (ThePlantingPlant == "sunflowerB"){
            sunfl = new sunflower();
            scene->addItem(sunfl);
            sunfl->setPos(gs->retX(),gs->retY());
            this->MyScore->subtract(50);
        }
        else if(ThePlantingPlant == "walnutB"){
            wl = new walnut();
            scene->addItem(wl);
            wl->setPos(gs->retX(),gs->retY());
            this->MyScore->subtract(50);
     }
        ThePlantingPlant = "";
    }
    else if (gs->IfGridIsFull[gs->retI()][gs->retJ()] == 1){
        ThePlantingPlant = "";
    }
}

void MainWindow::MakeSunOnScene(){
    sun *Sun;
    Sun = new sun();
    qreal sunX = rand() % 900 + 200;
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
void MainWindow::IfZombieAndPeashooterAreInSameRaw(peashooter * shooter)
{
    for (int i = 0 ; i < 9 ; i++){
        for (int j = 0; j < 5 ; j++){
            if (gs->IfPeashooterISIn[i][j] == 1 && IfZombieIsInW[j] == 1){
                    qDebug() <<"fdsafdsfdagffssdfg";
                    QTimer *t = new QTimer();
                    t->start(1000);
                    connect (t, SIGNAL(timeout()),shooter,SLOT(make_pea()));
            }
        }
    }
}

void MainWindow::creatzom(int l)
{
    QStringList poses=Level::poses(l);
    QVector <zombie*> zomz=zombie::lvlStart(poses);
    for(QVector<zombie*>::iterator it=zomz.begin();it!=zomz.end();it++){
        scene->addItem(*it);
        //gs->setX(250);
        //gs->setY(310);
        for (int i1 = 0 ; i1 < 5 ; i1++){
            //qDebug()<<"FFF" << zomz.at(i1)->retJz() << zomz.at(i1)->get_y();
            IfZombieIsInW[zomz.at(i1)->retJz()] = 1;
        }
        //qDebug() << gs->retJ();

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_walnutB_clicked()
{
    ThePlantingPlant = "walnutB";
}

void MainWindow::on_peashooterB_clicked()
{
    ThePlantingPlant = "peashooterB";
}

void MainWindow::on_sunflowerB_clicked()
{
    ThePlantingPlant = "sunflowerB";
}
