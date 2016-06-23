#include "score.h"
#include <QFont>

score::score(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    scoreCount = 0;
    setPlainText(QString::number(scoreCount));
    setFont(QFont("times", 40));
}
int score::ret_score(){return scoreCount;}

void score::add(){
    scoreCount+=50;
    setPlainText(QString::number(scoreCount));
    setFont(QFont("times", 30));
}
void score::subtract(int n){
    scoreCount -= n;
    setPlainText(QString::number(scoreCount));
    setFont(QFont("times", 30));
}
