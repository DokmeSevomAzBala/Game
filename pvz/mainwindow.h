#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "sunflower.h"
#include "zombie.h"
#include "pea.h"
#include "peashooter.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QVector>
#include <QGraphicsView>
#include <QWidget>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QGraphicsView *View;
    QGraphicsView *graphicsView;
    sunflower *sunfl;
    QTimer *t1;
    QTimer *t2;
    QVector <sun*> SunVec;
    zombie *zom1;
    peashooter *pshr;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QGraphicsScene *scene;

private:
    Ui::MainWindow *ui;
public slots:
    void MakeSunOnScene();
    void MakeSunForSunFlower();
    void MoveAllSuns();
private slots:
    void on_SunflowerButton_clicked();
};

#endif // MAINWINDOW_H
