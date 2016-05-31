#include "plant.h"

plant::plant(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
}
plant::~plant(){}

void plant::paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
{

}

QRectF plant::boundingRect() const
{
    return QRectF(0,0,50,50);   // Set boundingRect() to image size.
}

void plant::advance(int)
{

}
