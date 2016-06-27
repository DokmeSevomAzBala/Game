#include <QTimer>
#include <QGraphicsScene>
#include "lawn_mower.h"


/*
 * @descr constructor of the class
 * @param nothing
 * @return nothing
 */
lawn_mower::lawn_mower()
{
    QPixmap m(":/new/images/images/Lawn_Mower");
    setPixmap(m);
     PlantPic = m;
    setPixmap(PlantPic);
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
    QTimer* time = new QTimer();
    time->start(50);
    connect(time,SIGNAL(timeout()),this,SLOT(movinglawn()));

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

