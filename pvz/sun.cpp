#include "sun.h"
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include "mainwindow.h"
//extern MainWindow *w;
int sun::sunPoints = 50;
bool sun::clicked;

sun::sun() :  sunType(1)
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
    this->setPos(sunFlowerPos);
    pix = new QPixmap(":/new/images/images/Sun.png");
    setPixmap(*pix);
    destroySunTimer = new QTime;
    destroySunTimer->start();
}

void sun::move_sun()
{
    if (this->y() < yEndPos)        // Once speed has completely decelerated to 0, stop decelerating.
    {
        this->setPos(xPos,this->y()+1);
    }
}

void sun::DeleteSun()
{    
    delete pix;
    scene()->removeItem(this);
}

void sun::mousePressEvent (QGraphicsSceneMouseEvent *event){
        QGraphicsPixmapItem::mousePressEvent(event);
        pressed = 1;
        SetSunPoint(25);
        DeleteSun();
        clicked = 1;
        //delete this;
        qDebug() << "E";

}


void sun::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->drawPixmap(boundingRect(), this->pixmap(), boundingRect());
}

QRectF sun::boundingRect() const
{
    return QRectF(0,0,80,80);   // Set boundingRect() to image size.
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

sun::~sun(){
    qDebug() << "F";
}

