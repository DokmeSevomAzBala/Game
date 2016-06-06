#include "sunflower.h"
sunflower::sunflower()
{
    cost = 50;
    seeding_time = 10;
    life_time = 15;
    setPixmap(QPixmap(":/new/images/images/SunFlower"));
    MakeSunTimer = new QTimer;
    MakeSunTimer->start(1000);
    connect (MakeSunTimer,SIGNAL(timeout()),this,SLOT(makeSun()));
    this->s1 = new sun();

}
void sunflower::makeSun(){

}

void sunflower::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->drawPixmap(boundingRect(), this->pixmap(), boundingRect());
}


