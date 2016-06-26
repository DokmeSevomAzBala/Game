#include "score.h"
#include <QFont>
/*
 * @descr constructor of the class
 * @param QGraphicsItem
 * @return nothing
 */
score::score(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    scoreCount = 0;
    setPlainText(QString::number(scoreCount));//show the number of score on the screen
    setFont(QFont("times", 40));//size of font
}
/*
 * @descr get the score
 * @param param nothing
 * @return number of score
 */
int score::ret_score(){return scoreCount;}
/*
 * @descr add the score
 * @param nothing
 * @return nothing
 */
void score::add(){
    scoreCount+=50;
    setPlainText(QString::number(scoreCount));
    setFont(QFont("times", 30));
}
/*
 * @descr subtract the score
 * @param int
 * @return nothing
 */

void score::subtract(int n){
    scoreCount -= n;
    setPlainText(QString::number(scoreCount));
    setFont(QFont("times", 30));
}
