#include "walnut.h"

walnut::walnut()
{
    life_time = 25;
    cost = 30;
//    Xpos=100;
//    Ypos=120;
    seeding_time = 50;

    QPixmap m(":/new/images/images/Walnut.png");
    PlantPic = m;
    setPixmap(PlantPic);

}

//void walnut::setLife(int newLife)
//{
//    life_time = newLife;
//}
//void walnut::onPlant()
//{

//}
//void walnut::paint(QPainter *painter,const QStyleOptionGraphicsItem *, QWidget *)
//{
 //   painter->drawPixmap(boundingRect(),this->pixmap(), boundingRect());
//}
