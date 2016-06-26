#include "plant.h"
#include "pea.h"
#include <QDebug>
#include <QTimer>
#include "timerThread.h"
#ifndef PEASHOOTER_H
#define PEASHOOTER_H
/*
 * this class will shoot the bullet of the peashooters
 */
class peashooter: public plant
{
    Q_OBJECT
    void advance(int phase);

public:
    pea* p1;
    //void IfZombieAndPeashooterAreInSameRaw();
    static bool IfPeashooter[5];
    static bool MakePea[5];
    peashooter();
    QTime* peaTimer;
public slots:
 void make_pea();

};

#endif // PEASHOOTER_H
