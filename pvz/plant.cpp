#include "plant.h"
plant::plant(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{

}
plant::~plant(){
    //delete this;
    qDebug()<<"die die die die die die3:))";
}
void plant::die(){
    life_time-=0.003;
    if (life_time<=10)
        this->~plant();


}
