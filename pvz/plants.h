#ifndef PLANTS_H
#define PLANTS_H

#include <QPixmap>
class plants
{
    int cost;
    int seeding_time;
    float life_time;
    int Xpos;
    int Ypos;
    QPixmap PlantPic;
public:

    plants(int , int , float);
    void add_to_yard();
    ~plants();


};


#endif // PLANTS_H
