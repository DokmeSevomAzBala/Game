#include "walnut.h"

walnut::walnut()
{
//    int cost;           //how much we should pay to plant it?
//    int seeding_time;   //how much time should pass that we can plant another one again
//    float life_time;    //from the time that zombie encounter this plant, how mnay seconds should pass to die?
//    int Xpos;
//    int Ypos;
//    QPixmap PlantPic;
//    void Place(QPoint);
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
