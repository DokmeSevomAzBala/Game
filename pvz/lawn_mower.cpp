#include <QTimer>
#include <QGraphicsScene>
#include "lawn_mower.h"

lawn_mower::lawn_mower()
{

//    life_time = 25;
//    cost = 30;
//    seeding_time = 50;
  //  QPixmap m(":/new/images/images/lawn_mower_2");
   //
    QPixmap m(":/new/images/images/Lawn_Mower");
    setPixmap(m);
     PlantPic = m;
    setPixmap(PlantPic);






}

lawn_mower::~lawn_mower()
{

}
void lawn_mower::move_lawn()
{
    timerThread* time = new timerThread();
    time->run(50);
    connect(time,SIGNAL(timeout()),this,SLOT(movinglawn()));
    time->start();

}

void lawn_mower::movinglawn()
{
    setPos(x()+10,y());
    if(this->x()>=1000){
        this->~lawn_mower();
    }
}

