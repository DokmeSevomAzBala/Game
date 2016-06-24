#include "plant.h"
void plant::Place(QPoint point)
{
    setPos(point);
}

plant::plant(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{

}
plant::~plant(){
    qDebug()<<"die die die die die die3:))";
}
void plant::die(){
    life_time-=0.03;
    if (life_time<=10)
        this->~plant();


}
