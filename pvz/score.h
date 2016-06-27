#ifndef SCORE_H
#define SCORE_H
#include <QGraphicsTextItem>
/*
 *this class set the score
 */
class score :public QGraphicsTextItem
{   int scoreCount;
public:
    int ret_score();
    score(QGraphicsItem *parent = 0);
    void add();
    void subtract(int);
};

#endif // SCORE_H
