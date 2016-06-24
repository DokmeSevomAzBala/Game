#include "lawn_mower.h"

lawn_mower::lawn_mower()
{
    life_time = 25;
    cost = 30;
    seeding_time = 50;
    QPixmap m(":/new/images/images/lawn_mower_2");
    PlantPic = m;
    setPixmap(PlantPic);


}
