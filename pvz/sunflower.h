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
public:
    sun *s1;
    sunflower();
public slots:
    void makeSun();
};

#endif // SUNFLOWER_H
