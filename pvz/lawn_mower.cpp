#include <QTimer>
#include <QGraphicsScene>
#include "lawn_mower.h"

lawn_mower::lawn_mower(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap( QPixmap (":/new/images/images/Lawn_Mower"));

}

lawn_mower::~lawn_mower()
{

}
void lawn_mower::move_lawn()
{
    QTimer* time = new QTimer();
    time->start(50);
    connect(time,SIGNAL(timeout()),this,SLOT(movinglawn()));

}

void lawn_mower::movinglawn()
{
    setPos(x()+10,y());
    if(this->x()>=1000){
        this->~lawn_mower();
    }
}


