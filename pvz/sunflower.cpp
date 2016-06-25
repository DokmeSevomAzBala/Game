#include "sunflower.h"
#include "mainwindow.h"


//extern MainWindow *w;
sunflower::sunflower(){

    cost = 50;
    seeding_time = 10;
    life_time = 15;
    setPixmap(QPixmap(":/new/images/images/SunFlower"));
    QThread *tt=new QThread();
    MakeSunTimer = new QTimer;
    MakeSunTimer->setInterval(7000);
    MakeSunTimer->moveToThread(tt);
    connect(tt, SIGNAL(started()), MakeSunTimer, SLOT(start()));
    connect (MakeSunTimer,SIGNAL(timeout()),this,SLOT(MakeSunForSunFlower()));


}

void sunflower::MakeSunForSunFlower()
{
    sun *s1 = new sun();
    s1->setPos(this->x()+30,this->y()+40);
    scene()->addItem(s1);
    QTimer::singleShot(10000, s1, SLOT(DeleteSun()));

}

