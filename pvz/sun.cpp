#include "sun.h"
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include "mainwindow.h"
//extern MainWindow *w;
int sun::sunPoints = 50;
bool sun::clicked;

sun::sun() :  sunType(1)
/*
 * @descr constructor of the class
 * @param param nothing
 * @return nothing
 */
//sun::sun(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    clicked = 0;
    xPos = qrand()% 820 + 100;
    yEndPos = qrand() % 200 + 400;
    this->setPos(xPos,0);        // Set initial position to be random along the top of graphicsView.
    pix = new QPixmap(":/new/images/images/Sun.png");
    setPixmap(*pix);
    destroySunTimer = new QTime;
}

sun::sun(QPoint sunFlowerPos) : sunType(0)
{
    clicked = 0;
    this->setPos(sunFlowerPos);
    pix = new QPixmap(":/new/images/images/Sun.png");
    setPixmap(*pix);
    destroySunTimer = new QTime;
    destroySunTimer->start();
}
/*
 * @descr move the suns
 * @param nothing
 * @return nothing
 */
void sun::move_sun()
{
    if (this->y() < yEndPos)        // Once speed has completely decelerated to 0, stop decelerating.
    {
        this->setPos(xPos,this->y()+1);
    }
}
/*
 * @descr delete the suns
 * @param nothing
 * @return nothing
 */
void sun::DeleteSun()
{    
    delete pix;
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
        SetSunPoint(50);
        DeleteSun();
        clicked = 1;
        //delete this;
        qDebug() << "E";

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

void sun::advance(int phase)
{
    if(!phase) return;

    // If this is a falling sun, move sun.
    if (sunType == 1)
        move_sun();

    if (this->y() >= yEndPos)
    {
        destroySunTimer->start();
    }

    // If this is a sunflower's sun, start delete timer right away.
    if (destroySunTimer->elapsed() >= 1000)
        DeleteSun();
}
/*
 * @descr destructor of class
 * @param nothing
 * @return nothing
 */

sun::~sun(){
    qDebug() << "F";
}

