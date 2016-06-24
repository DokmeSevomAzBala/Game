#include "gamescreen.h"
#include <QGraphicsLineItem>
#include <QDebug>
GameScreen::GameScreen(QWidget *parent) :
    QGraphicsView(parent)
{
    int x[] = {250,335,405,495,580,660,750,820,900};
    int y[] = {65,190,310,430,540};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            grid[i][j] = QPoint(x[i],y[j]);
            IfGridIsFull[i][j] = 0;
        }
    }
}
void GameScreen::GridPoint(QMouseEvent *e)
{
    qreal x = e->x();
    qreal y = e->y();
    for (int i = 0 ; i < 9 ; i++){
        for (int j = 0 ; j < 5 ; j++){
            if (i < 8 && j < 4 ){
               if(x > this->grid[i][j].x() && x < (this->grid[i+1][j].x()) &&
                  y > this->grid[i][j].y() && y < (this->grid[i][j+1].y())){
                   X = grid [i][j].x();
                   Y = grid [i][j].y();
                }
            }
            else if (i == 8 && j < 4){
               if(x > grid[i][j].x() && x < (grid[i][j].x() + 100) &&
                  y > grid[i][j].y() && y < (grid[i][j+1].y()) ){
                   X = grid [i][j].x();
                   Y = grid [i][j].y();
               }
            }
            else if (j == 4 && i < 8){
                if(x > this->grid[i][j].x() && x < (this->grid[i+1][j].x()) &&
                   y > this->grid[i][j].y() && y < (this->grid[i][j].y() + 100)){
                    X = grid [i][j].x();
                    Y = grid [i][j].y();

                }
            }
            else if (i == 8 && j == 4){
                if(x > grid[i][j].x() && x < (grid[i][j].x() + 100) &&
                   y > grid[i][j].y() && y < (grid[i][j].y() + 100)){
                    X = grid [i][j].x();
                    Y = grid [i][j].y();
                }
            }
        }
    }
}

void GameScreen::mousePressEvent(QMouseEvent *e)
{
    QGraphicsView::mousePressEvent(e);
    GridPoint(e);
    click();
}
int GameScreen::retI(){
    if (X == 250) return 1;
    else if (X == 335) return 2;
    else if (X == 405) return 3;
    else if (X == 495) return 4;
    else if (X == 580) return 5;
    else if (X == 660) return 6;
    else if (X == 750) return 7;
    else if (X == 820) return 8;
    else if (X == 900) return 9;
}

int GameScreen::retJ(){
    if (Y == 65) return 1;
    else if (Y == 190) return 2;
    else if (Y == 310) return 3;
    else if (Y == 430) return 4;
    else if (Y == 540) return 5;

}
