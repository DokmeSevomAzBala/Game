#include "sunflower.h"
#include "mainwindow.h"


//extern MainWindow *w;
/*
 * @descr constructor of class
 * @param nothing
 * @return nothing
 */
sunflower::sunflower(){

    cost = 50;
    seeding_time = 10;
    life_time = 15;
    setPixmap(QPixmap(":/new/images/images/SunFlower"));
<<<<<<< HEAD
    MakeSunTimer = new QTimer;
    MakeSunTimer->start(7000);
    connect (MakeSunTimer,SIGNAL(timeout()),this,SLOT(MakeSunForSunFlower()));
=======

    MakeSunTimer = new timerThread();
    MakeSunTimer->run(7000);
    connect (MakeSunTimer,SIGNAL(mysignal()),this,SLOT(MakeSunForSunFlower()));
    MakeSunTimer->start();


>>>>>>> 1a0058f86f68060bf216e51c4e8fcccf33f2929c
}
/*
 * @descr make sun for sunflower
 * @param nothing
 * @return nothing
 */
void sunflower::MakeSunForSunFlower()
{
    sun *s1 = new sun();
    s1->setPos(this->x()+30,this->y()+40);
    scene()->addItem(s1);
    QTimer::singleShot(10000, s1, SLOT(DeleteSun()));
}

