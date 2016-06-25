#include "server.h"

server::server(QWidget *parent):QWidget (parent)
{
    myserver = new QTcpServer(this);
    if (!myserver->listen(QHostAddress::LocalHost, 12345)) {
    //ui->log->setPlainText("Failure while starting server: " + myserver->errorString());
    return;
    }
    connect(myserver, SIGNAL(new_connection()),this, SLOT(new_connection()));
}
void server::new_connection()
{

    while (myserver->hasPendingConnections()) {
    QTcpSocket *con = myserver->nextPendingConnection();
    myclients << con;
    //ui->disconnectClients->setEnabled(true);
    connect(con, SIGNAL(disconnected()), this,
    SLOT(removeConnection()));
    connect(con, SIGNAL(readyRead()), this, SLOT(newMessage()));
    //ui->log->insertPlainText(
    QString("* New connection: %1, port %2\n")
    .arg(con->peerAddress().toString())
    .arg(QString::number(con->peerPort()));
    }

}
void server::new_message()
 {
     if (QTcpSocket *con = qobject_cast<QTcpSocket*>(sender())) {
            myreceivedData[con].append(con->readAll());
            if (!myreceivedData[con].contains(QChar(23)))
                return;

            QStringList messages = myreceivedData[con].split(QChar(23));
            myreceivedData[con] = messages.takeLast();
            foreach (QString message, messages) {
                //ui->log->insertPlainText("Sending message: " + message + "\n");
                message.append(QChar(23));
                foreach (QTcpSocket *socket, myclients) {
                    if (socket == con)
                        continue;
                    if (socket->state() == QAbstractSocket::ConnectedState)
                        socket->write(message.toLocal8Bit());
                }
            }
        }
 }
void server::remove_connection()
 {
     if (QTcpSocket *con = qobject_cast<QTcpSocket*>(sender())) {
             myclients.removeOne(con);
             qDebug()<<"Disconnected";
             con->deleteLater();
         }
 }
