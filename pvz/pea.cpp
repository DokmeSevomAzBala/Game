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

   QPixmap pixmap(":/new/images/images/Giant_Pea.png");
   P=pixmap;
   setPixmap(P);

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
<<<<<<< HEAD
=======

>>>>>>> 1a0058f86f68060bf216e51c4e8fcccf33f2929c

//void pea::delay( int millisecondsToWait )
//{
//    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
//    while( QTime::currentTime() < dieTime )
//    {
//        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
//    }
//}

/*
 * @descr destructor of the cass
 * @param nothing
 * @return nothing
 */
pea::~pea(){}

