#include "plant.h"
#include "pea.h"
#include <QDebug>
#include <QTimer>
#ifndef PEASHOOTER_H
#define PEASHOOTER_H

class peashooter: public plant
{
    Q_OBJECT
 friend class pea;
public:
 void make_pea();
 bool IfZombieAndPeashooterAreInSameRaw();

peashooter();
public slots:

};

#endif // PEASHOOTER_H
