#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "sunflower.h"
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
    QGraphicsScene *scene;
    QGraphicsView *View;
    sunflower *sunfl;
    QTimer *t1;
    QVector <sun*> SunVec;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
public slots:
    void MakeSun();
};

#endif // MAINWINDOW_H
