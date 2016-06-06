#ifndef PEA_H
#define PEA_H
#include <QPixmap>
#include <iostream>
#include <QTimer>
#include <QObject>
using namespace std;

class pea: public QObject
{
    Q_OBJECT
    friend class peashooter;
private:
 QPixmap P;
 int accident;
 int p_x;
 int p_y;

public:
    pea();
    float width();
    ~pea();

public slots:
   void move_p();
};

#endif // PEA_H
