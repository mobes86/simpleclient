#ifndef _UITCPCLIENT_
#define _UITCPCLIENT_
#include "QTcpSocket.h"
#include "QHostAddress.h"
#include <string>
#include <memory>
#include "QDialog.h"

using namespace std;

class UITcpClient: public QDialog {
  Q_OBJECT

  public: 
    UITcpClient(QWidget *parent = 0);
    virtual ~UITcpClient(void) = default;
    void sendFile(const QString& fileNameWithExt, 
      const QString& fullFileNamePath);

    void disconnectClient(void);
    bool isClientConnected(void);
    void connectClient(const QHostAddress& address, 
       unsigned short port);

  signals:
    void clientWasConnectedFwd(void);
    void clientWasDisconnectedFwd(void);
    void fileProgressFinished(size_t perc);

  public slots:
    void socketException(QAbstractSocket::SocketError socketError);
    void clientWasConnected(void);
    void clientWasDisconnected(void);
    
  private:
    QTcpSocket tcpSocket;
};

#endif