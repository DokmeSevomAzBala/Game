#include "sun.h"
#include <QDebug>
int sun::SunScore;
sun::sun()
{
    SunPic.load(":/new/images/images/Sun.png");


}

void sun::mouseReleaseEvent ( QMouseEvent * event){

    if(event->button() == Qt::RightButton){
        SunScore += 50;
    }
}


void sun::paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
{

}

QRectF sun::boundingRect() const
{
    return QRectF(0,0,50,50);   // Set boundingRect() to image size.
}

void sun::advance(int)
{

}

