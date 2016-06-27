#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>
#include <QTcpSocket>
#include <QString>
#include <QTcpServer>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QMouseEvent>

class client:public QWidget
{
    Q_OBJECT
public:
    explicit client(QWidget *parent=0);
    QGraphicsScene *scene;
    QGraphicsView *view;

    void display_menu();
    //void mouseMoveEvent(QMouseEvent *event);

signals:
    void start();

private slots:
    void read_message();
    void disconnect();

private:
      QTcpSocket *mysocket;
      QString myuser;
      QString myreceivedData;
      void updateGui(QAbstractSocket::SocketState state);


};

#endif // CLIENT_H
