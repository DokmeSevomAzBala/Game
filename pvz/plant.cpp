#include "plant.h"
GameScreen* plant::gsp;
int plant::retIgsp(){
    if (gsp->retX() == 250) return 0;
    else if (gsp->retX() == 335) return 1;
    else if (gsp->retX() == 405) return 2;
    else if (gsp->retX() == 495) return 3;
    else if (gsp->retX() == 580) return 4;
    else if (gsp->retX() == 660) return 5;
    else if (gsp->retX() == 750) return 6;
    else if (gsp->retX() == 820) return 7;
    else if (gsp->retX() == 900) return 8;
}

int plant::retJgsp(){
    if (gsp->retY() == 65) return 0;
    else if (gsp->retY() == 190) return 1;
    else if (gsp->retY() == 310) return 2;
    else if (gsp->retY() == 430) return 3;
    else if (gsp->retY() == 540) return 4;

}

void plant::Place(QPoint point)
{
    setPos(point);
}

plant::plant(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    gsp = new GameScreen();
}
plant::~plant(){
    qDebug()<<"die die die die die die3:))";
}
void plant::die(){
    life_time-=0.03;
    if (life_time<=10)
        this->~plant();
        gsp->IfGridIsFull[retIgsp()][retJgsp()] = 0;
}
