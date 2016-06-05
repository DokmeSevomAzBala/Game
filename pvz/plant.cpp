    #include "plant.h"

plant::plant(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{

}
plant::~plant(){}


QRectF plant::boundingRect() const
{
    return QRectF(0,0,80,80);   // Set boundingRect() to image size.
}


void plant::paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
{
    QRectF rec = boundingRect();
}
void plant::advance(int)
{

}
