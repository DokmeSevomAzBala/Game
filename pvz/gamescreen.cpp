#include "gamescreen.h"
#include <QGraphicsLineItem>
#include <QDebug>
qreal GameScreen::X;
qreal GameScreen::Y;
bool  GameScreen::IfGridIsFull[9][5];
bool  GameScreen::IfPeashooterISIn[9][5];
bool  GameScreen::IfZombieIsIn[5];
/*
 * @descr constructor of class
 * @param QWidget
 * @return nothing
 */
GameScreen::GameScreen(QWidget *parent) :
    QGraphicsView(parent)
{
    int x[] = {250,335,405,495,570,660,750,820,950};
    int y[] = {65,190,310,430,540};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            grid[i][j] = QPoint(x[i],y[j]);
            IfGridIsFull[i][j] = 0;
            IfPeashooterISIn[i][j] = 0;
            IfZombieIsIn[j] = 0;
        }
    }
    create();
}
/*
 * @descr
 * @param QMouseEvent
 * @return nothing
 */
void GameScreen::GridPoint(QMouseEvent *e)
{
    qreal x = e->x();
    qreal y = e->y();
    if(x>250 && x<1010 && y>65 && y<676)
    for (int i = 0 ; i < 9 ; i++){
        for (int j = 0 ; j < 5 ; j++){
            if (i < 8 && j < 4 ){
               if(x > (this->grid[i][j].x()) && x < (this->grid[i+1][j].x()) &&
                  y > (this->grid[i][j].y()) && y < (this->grid[i][j+1].y())){
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
                if(x > (this->grid[i][j].x()) && x < (this->grid[i+1][j].x()) &&
                   y > (this->grid[i][j].y()) && y < (this->grid[i][j].y() + 100)){
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
/*
 * @descr effect of pressing mousse
 * @param QMouseEvent
 * @return nothing
 */
void GameScreen::mousePressEvent(QMouseEvent *e)
{
    QGraphicsView::mousePressEvent(e);
    GridPoint(e);
    click();
}

/*
 * @descr
 * @param nothing
 * @return int
 */
int GameScreen::retI(){
    if (X == 250) return 0;
    else if (X == 335) return 1;
    else if (X == 405) return 2;
    else if (X == 495) return 3;
    else if (X == 570) return 4;
    else if (X == 660) return 5;
    else if (X == 750) return 6;
    else if (X == 820) return 7;
    else if (X == 950) return 8;
}
/*
 * @descr
 * @param nothing
 * @return int
 */
int GameScreen::retJ(){
    if (Y == 65) return 0;
    else if (Y == 190) return 1;
    else if (Y == 310) return 2;
    else if (Y == 430) return 3;
    else if (Y == 540) return 4;

}
