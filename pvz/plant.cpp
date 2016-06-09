#include "plant.h"
plant::plant(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{

}
plant::~plant(){
    //delete this;
    qDebug()<<"die die die die die die3:))";
}
void plant::die(){

    this->~plant();
}
