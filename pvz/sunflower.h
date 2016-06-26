#ifndef SUNFLOWER_H
#define SUNFLOWER_H

#include "plant.h"
#include "sun.h"
#include <QTimer>
#include <QObject>
#include <QTime>
class sunflower : public plant
{
    Q_OBJECT
    QTimer *MakeSunTimer;
    QTimer *DeleteSunTimer;
    QTime* createSunTimer;

    void advance(int phase);
    sun * sun1;
public:
    sunflower();
public slots:
    void MakeSunForSunFlower();
};

#endif // SUNFLOWER_H
