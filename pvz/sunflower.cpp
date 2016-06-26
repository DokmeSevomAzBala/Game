#include "sunflower.h"
#include "mainwindow.h"


//extern MainWindow *w;
/*
 * @descr constructor of class
 * @param nothing
 * @return nothing
 */
sunflower::sunflower(){
    createSunTimer = new QTime;
    createSunTimer->start();
    cost = 50;
    seeding_time = 10;
    life_time = 15;
    PlantPic = new QPixmap (":/new/images/images/Sunflower");
    //PlantPic = m;
    setPixmap(*PlantPic);
    QThread *tt=new QThread();

//    MakeSunTimer = new QTimer;
//    MakeSunTimer->start(7000);
//    connect (MakeSunTimer,SIGNAL(timeout()),this,SLOT(MakeSunForSunFlower()));
//=======

//    MakeSunTimer = new timerThread();
//    MakeSunTimer->run(7000);
//    connect (MakeSunTimer,SIGNAL(mysignal()),this,SLOT(MakeSunForSunFlower()));
//    MakeSunTimer->start();


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


void sunflower::advance(int phase)
{
    if (!phase) return;

    if (createSunTimer->elapsed() >= 7000)
    {

        createSunTimer->restart();
        sun1 = new sun(QPoint(this->x()+40,this->y()+40));
        scene()->addItem(sun1);
    }

}

