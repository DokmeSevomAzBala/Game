#include "peashooter.h"
#include "zombie.h"
#include "mainwindow.h"
extern MainWindow *w;

peashooter::peashooter()
{

    cost = 100;
    seeding_time = 10;
    life_time = 20;

    QPixmap m(":/new/images/images/PeaShooter.png");
  PlantPic=m;
  setPixmap(PlantPic);

}
void peashooter::make_pea()
{
 pea* p1;
 p1=new pea();
 w->scene->addItem(p1);
 p1->setPos(this->Xpos+70,this->Ypos);
 p1->move_p(Xpos+70,Ypos);

}

//void peashooter::IfZombieAndPeashooterAreInSameRaw()
//{

//    for (int i = 0 ; i < 9 ; i++){
//        for (int j = 0; j < 5 ; j++){
//            if (gsp->IfPeashooterISIn[i][j] == 1 ){
//                qDebug()<<gsp->retJ();
//                    qDebug()<<gsp->IfZombieIsIn[0][gsp->retJ()];
//            }
//            for (int k = 0 ; k < 5 ; k++){
//                if(gsp->IfZombieIsIn[0][k] == 1){
//                    qDebug() <<"fdsafdsfdagffssdfg";
//                    this->make_pea();
//                }

//            }
//        }
//    }
//}

////////////////////////////
