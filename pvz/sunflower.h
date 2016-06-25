#ifndef SUNFLOWER_H
#define SUNFLOWER_H

#include "plant.h"
#include "sun.h"
#include "timerThread.h"
#include <QTimer>
#include <QObject>

class sunflower : public plant
{
    Q_OBJECT
    timerThread *MakeSunTimer;
    timerThread *DeleteSunTimer;

public:
    sunflower();
public slots:
    void MakeSunForSunFlower();
};

#endif // SUNFLOWER_H
