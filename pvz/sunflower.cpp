#include "sunflower.h"
#include "mainwindow.h"


//extern MainWindow *w;
sunflower::sunflower(){

    cost = 50;
    seeding_time = 10;
    life_time = 15;
    setPixmap(QPixmap(":/new/images/images/SunFlower"));

    MakeSunTimer = new timerThread();
    MakeSunTimer->run(7000);
    connect (MakeSunTimer,SIGNAL(mysignal()),this,SLOT(MakeSunForSunFlower()));
    MakeSunTimer->start();


}

void sunflower::MakeSunForSunFlower()
{
    sun *s1 = new sun();
    s1->setPos(this->x()+30,this->y()+40);
    scene()->addItem(s1);
    QTimer::singleShot(10000, s1, SLOT(DeleteSun()));

}

