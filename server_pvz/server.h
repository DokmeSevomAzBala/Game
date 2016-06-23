#ifndef SERVER_H
#define SERVER_H

#include <QWidget>
#include<QTcpServer>
#include<QTcpSocket>
#include<QGraphicsScene>
#include<QGraphicsView>

class server : public QWidget
{
    Q_OBJECT
public:
    explicit server(QWidget *parent = 0);


private slots:
    void new_connection();
    void new_message();
    void remove_connection();

private:
    QTcpServer *myserver;
    QList<QTcpSocket*> myclients;
    QHash<QTcpSocket*, QString> myreceivedData;

};

#endif // SERVER_H

