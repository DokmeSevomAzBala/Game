#include <QTimer>
#include <QGraphicsScene>
#include "lawn_mower.h"

lawn_mower::lawn_mower(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap( QPixmap (":/new/images/images/Lawn_Mower"));

/*
 * @descr constructor of the class
 * @param nothing
 * @return nothing
 */

}
/*
 * @descr destructor of the cass
 * @param param nothing
 * @return nothing
 */
lawn_mower::~lawn_mower()
{

}
/*
 * @descr move the lawn mower by sending slot
 * @param nothing
 * @return nothing
 */
void lawn_mower::move_lawn()
{
    timerThread* time = new timerThread();
    time->run(50);
    connect(time,SIGNAL(mysignal()),this,SLOT(movinglawn()));
    time->start();

}
/*
 * @descr move the lawn mower
 * @param nothing
 * @return nothing
 */
void lawn_mower::movinglawn()
{
    setPos(x()+10,y());
    if(this->x()>=1000){
        this->~lawn_mower();
    }
}


