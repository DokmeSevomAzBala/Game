#ifndef SCORE_H
#define SCORE_H
#include <QGraphicsTextItem>

class score :public QGraphicsTextItem
{
public:
    int scoreCount;
    int ret_score();
    score(QGraphicsItem *parent = 0);
    void add();
    void subtract(int);
};

#endif // SCORE_H
