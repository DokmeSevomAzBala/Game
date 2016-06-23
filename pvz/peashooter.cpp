#include "peashooter.h"


peashooter::peashooter()
{
    cost = 100;
    seeding_time = 10;
    life_time = 20;

    QPixmap m(":/new/images/images/PeaShooter.png");
  PlantPic=m;
  setPixmap(PlantPic);

}

