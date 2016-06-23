#ifndef SUNFLOWER_H
#define SUNFLOWER_H

#include "plant.h"
#include "sun.h"
#include <QTimer>
#include <QObject>

class sunflower : public plant
{
    Q_OBJECT
    QTimer *MakeSunTimer;
    QTimer *DeleteSunTimer;

public:
    sunflower();
public slots:
    void MakeSunForSunFlower();
};

#endif // SUNFLOWER_H
