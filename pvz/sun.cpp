#include "sun.h"
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include "mainwindow.h"
extern MainWindow *w;
/*
 * @descr constructor of the class
 * @param param nothing
 * @return nothing
 */
sun::sun(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/new/images/images/Sun.png"));
    pressed = 0;
}
/*
 * @descr move the suns
 * @param nothing
 * @return nothing
 */
void sun::move_sun()
{
    if (y()<500)
    this->setPos(this->x(),this->y()+1);
    else if (y()>=500){
        this->setPos(this->x(),this->y());
        if (pressed == 0){
            QTimer::singleShot(20000, this, SLOT(DeleteSun()));
        }
    }
}
/*
 * @descr delete the suns
 * @param nothing
 * @return nothing
 */
void sun::DeleteSun()
{    
    scene()->removeItem(this);
}
/*
 * @descr if click at the sun the score will increase
 * @param QGraphicsSceneMouseEvent
 * @return nothing
 */
void sun::mousePressEvent (QGraphicsSceneMouseEvent *event){
        QGraphicsPixmapItem::mousePressEvent(event);
        pressed = 1;
        w->MyScore->add();
        DeleteSun();
}
/*
 *@descr
 */
void sun::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->drawPixmap(boundingRect(), this->pixmap(), boundingRect());
}
/*
 * @descr Set boundingRect() to image size.
 * @param nothing
 * @return QRect
 */
QRectF sun::boundingRect() const
{
    return QRectF(0,0,80,80);
}

void sun::advance(int)
{

}
/*
 * @descr destructor of class
 * @param nothing
 * @return nothing
 */

sun::~sun(){
}

