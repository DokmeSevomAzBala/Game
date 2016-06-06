#include "zombie.h"

zombie::zombie(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/new/images/images/zombies_1"));

}

void zombie::walk()
{

}

QRectF zombie::boundingRect() const
{
    return QRectF(0,0,80,80);   // Set boundingRect() to image size.
}


void zombie::paint(QPainter *painter1, const QStyleOptionGraphicsItem *, QWidget *)
{
    //QRectF rec1 = boundingRect();
    painter1->drawPixmap(boundingRect(), this->pixmap(), boundingRect());
}
void zombie::advance(int)
{

}


