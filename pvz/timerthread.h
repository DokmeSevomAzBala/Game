#ifndef TIMERTHREAD_H
#define TIMERTHREAD_H
#include <iostream>
#include <QThread>
#include <QTimer>
#include <QObject>
#include <QDebug>
using namespace std;

class timerThread : public QThread
{
    Q_OBJECT
    QTimer* thr;
public:
    timerThread(QObject *parent=0);
    void run(int);
    public slots:
    void myslot();

signals:
    void mysignal();

};

#endif // TIMERTHREAD_H
