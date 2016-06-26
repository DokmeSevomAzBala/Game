#include "pea.h"
#include <QGraphicsView>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include "mainwindow.h"
#include <QThread>
//extern MainWindow *w;
/*
 * @descr constructor of the cass
 * @param param nothing
 * @return nothing
 */
pea::pea()
{

   P = new QPixmap (":/new/images/images/Giant_Pea.png");
   setPixmap(*P);

}
/*
 * @descr move the pea
 * @param nothing
 * @return nothing
 */

void pea::move_p()
{

    this->setPos(this->x()+5,this->y());
    if(this->x()>1000)
    this->~pea();


}


/*
 * @descr destructor of the cass
 * @param nothing
 * @return nothing
 */
pea::~pea(){}
void pea::advance(int phase){
    if (!phase) return;
    move_p();
}

void pea::DeletePea()
{
    delete P;
    scene()->removeItem(this);
}
