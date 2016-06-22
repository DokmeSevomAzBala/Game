#ifndef GAMESCREEN
#define GAMESCREEN
#include <QPoint>
struct GameScreen
{
    GameScreen();
    QPoint grid[9][5];
    bool IfGridIsFull[9][5];
};
#endif // GAMESCREEN

