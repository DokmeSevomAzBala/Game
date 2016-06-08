#include "score.h"

score::score()
{
    scoreCount=0;

}
int score::ret_score(){return scoreCount;}

void score::add(){
    scoreCount+=50;
}
void score::subtract(){scoreCount-=50;}
