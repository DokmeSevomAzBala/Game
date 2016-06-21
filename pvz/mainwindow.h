#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "drag.h"
#include "sunflower.h"
#include "zombie.h"
#include "pea.h"
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
    score player1;
    qreal x_mouse;
    qreal y_mouse;
    QGraphicsView *View;
    QGraphicsView *graphicsView;
    sunflower *sunfl;
    QTimer *t1;
    QTimer *t2;
    QVector <sun*> SunVec;
    zombie *zom1;
    peashooter* pshr;
public:
    score *MyScore;

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void mousePressEvent(QMouseEvent* ) ;
    QGraphicsScene *scene;

public slots:
    void make_pea();
    void MakeSunOnScene();
    void MakeSunForSunFlower();
    void MoveAllSuns();
private slots:
 //void planting_sunflower();
//   void planting_walnut();
  void planting_peashooter();
    void check();
    void on_SunflowerButton_clicked();

};

#endif // MAINWINDOW_H
