#include "peashooter.h"
#include "zombie.h"
//#include "mainwindow.h"
#include <QGraphicsScene>
//extern MainWindow *w;
bool peashooter::IfPeashooter[5];
bool peashooter::MakePea[5];

/*
 * @descr constructor of the cass
 * @param nothing
 * @return nothing
 */
peashooter::peashooter()
{
    cost = 100;
    seeding_time = 10;
    life_time = 20;
    peaTimer = new QTime;
    peaTimer->start();
     PlantPic= new QPixmap(":/new/images/images/PeaShooter.png");
     setPixmap(*PlantPic);

}
/*
 * @descr makes pea
 * @param nothing
 * @return nothing
 */
void peashooter::make_pea()
{
//    qDebug() <<"LL";
//    p1 = new pea();
//    scene()->addItem(p1);
// p1->setPos(this->x()+70,this->y());
// QTimer * ti = new QTimer();
// ti->start(10);
//connect (ti, SIGNAL(timeout()),p1,SLOT(move_p()));
}


void peashooter::advance(int phase)
{
    if (!phase) return;
    for (int i =0 ; i<5 ; i++){
    if (peaTimer->elapsed() >= 800 && MakePea[i] == 1)
    {
        p1 = new pea();  // Create new bullet.
        scene()->addItem(p1);   // Add bullet to scene.
        p1->setPos(this->x()+70,this->y());
        peaTimer->restart();   // Restart shooting interval.
        return;                     // Only shoot first zombie.
    }
    }
}
