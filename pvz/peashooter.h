#include "plant.h"
#include "pea.h"
#include <QDebug>
#include <QTimer>
#include "timerThread.h"
#ifndef PEASHOOTER_H
#define PEASHOOTER_H

class peashooter: public plant
{
    Q_OBJECT
 //friend class pea;
public:
 //void IfZombieAndPeashooterAreInSameRaw();

 peashooter();
public slots:
 void make_pea();

};

#endif // PEASHOOTER_H
