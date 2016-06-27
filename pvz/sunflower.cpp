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
    MakeSunTimer = new QTimer;
    MakeSunTimer->start(7000);
    connect (MakeSunTimer,SIGNAL(timeout()),this,SLOT(MakeSunForSunFlower()));
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

