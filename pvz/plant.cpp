#include "plant.h"
plant::plant(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{

}
plant::~plant(){}
void plant::die(){

    this->~plant();
}
