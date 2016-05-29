#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <QPixmap>

class zombie
{
    int Xpos;
    int Ypos;
    int power;  //how many bullet will kill zombie
    QPixmap ZombiePic;

public:
    zombie();
    public slots:
    void walk();
};

#endif // ZOMBIE_H
