#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "gamescreen.h"
#include "sunflower.h"
#include "zombie.h"
#include "pea.h"
#include "walnut.h"
#include "peashooter.h"
#include "score.h"
#include <QPushButton>
#include <QMainWindow>
#include <QIcon>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QVector>
#include <QGraphicsView>
#include <QWidget>
#include <QMouseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Ui::MainWindow *ui;
    qreal x_mouse;
    qreal y_mouse;
    QGraphicsView *View;
    QGraphicsView *graphicsView;
    sunflower *sunfl;
    QTimer *t1;
    QTimer *t2;
    QVector <sun*> SunVec;
    zombie *zom1;
    walnut* wl;
    peashooter* pshr;
    GameScreen *gs;
public:
    score *MyScore;
    void screen(qreal,qreal);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QGraphicsScene *scene;

public slots:
    void mousePressEvent(QMouseEvent* ) ;
    void MakeSunOnScene();
    //void MakeSunForSunFlower();
    void MoveAllSuns();
private slots:
    void planting_sunflower();
    void planting_walnut();
    void planting_peashooter();
 //void planting_sunflower();
   // void planting_walnut();
  //  void planting_peashooter();
// void planting_sunflower();
//   void planting_walnut();
//  void planting_peashooter();
    void check();
//    void on_SunflowerButton_clicked();
    //void on_peashooterB_clicked();
signals:
    void click();
};

#endif // MAINWINDOW_H
