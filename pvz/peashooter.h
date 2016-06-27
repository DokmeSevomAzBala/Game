#include "plant.h"
#include "pea.h"
#include <QDebug>
#include <QTimer>
#ifndef PEASHOOTER_H
#define PEASHOOTER_H
/*
 * this class will shoot the bullet of the peashooters
 */
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
