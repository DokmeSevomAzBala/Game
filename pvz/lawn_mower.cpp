#include <QTimer>
#include <QGraphicsScene>
#include "lawn_mower.h"

lawn_mower::lawn_mower()
{
    life_time = 25;
    cost = 30;
    seeding_time = 50;
    QPixmap m(":/new/images/images/lawn_mower_2");
    PlantPic = m;
    setPixmap(PlantPic);
    QTimer* time = new QTimer();
    connect(time,SIGNAL(timeout()),this,SLOT(move_lawn()));
    time->start(50);


}
void lawn_mower::move_lawn()
{
    setPos(x()+10,y());

}

