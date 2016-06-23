#include "sun.h"
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include "mainwindow.h"
extern MainWindow *w;
int sun::SunScore;
sun::sun(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/new/images/images/Sun.png"));
    Falling = 1;
}

void sun::move_sun()
{
    if (y()<500)
    this->setPos(this->x(),this->y()+1);
    else if (y()>=500){
        Falling = 0;
        this->setPos(this->x(),this->y());
    }
}

void sun::DeleteSun()
{
    w->scene->removeItem(this);

}

void sun::mousePressEvent (QGraphicsSceneMouseEvent *event){
        QGraphicsPixmapItem::mousePressEvent(event);
        w->MyScore->add();
        DeleteSun();
}


void sun::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->drawPixmap(boundingRect(), this->pixmap(), boundingRect());
}

QRectF sun::boundingRect() const
{
    return QRectF(0,0,80,80);   // Set boundingRect() to image size.
}

void sun::advance(int)
{

}

sun::~sun(){
    qDebug() <<"j";


}

