#include "UITcpClient.h"
#include "qmessagebox.h"
#include "qfile.h"
#include "qapplication.h"

// file size to chunk data at
// this prevents using too much memory
static const quint64 maxFileChunk = 1000000;

// constructor
UITcpClient::UITcpClient(QWidget *parent): QDialog(parent) {
  // ensure error handling is setup 
  QObject::connect(&tcpSocket, 
    SIGNAL(error(QAbstractSocket::SocketError)), 
    this, 
    SLOT(socketException(QAbstractSocket::SocketError)));

  QObject::connect(&tcpSocket, 
    SIGNAL(connected()), 
    this, 
    SLOT(clientWasConnected()));

  QObject::connect(&tcpSocket, 
    SIGNAL(disconnected()), 
    this, 
    SLOT(clientWasDisconnected()));
}

// sets client information up
void UITcpClient::connectClient(const QHostAddress& address, unsigned short port) {
  tcpSocket.connectToHost(address, port);
}

// slot for socket failure
void UITcpClient::socketException(QAbstractSocket::SocketError socketError) {
  switch(socketError) {
    // server ended connection
    case(QAbstractSocket::RemoteHostClosedError): {
      break;
    }
    case(QAbstractSocket::HostNotFoundError): {
      QMessageBox::information(nullptr, 
        "Server Not Found", "Please check server IP");
      break;
    }
    case(QAbstractSocket::ConnectionRefusedError): {
      QMessageBox::information(nullptr, 
        "Server Refused Connection", "Please check server port");
      break;
    }
    default: {
      QMessageBox::information(nullptr, 
        "Server Error", 
        tr("The following error occured: ") + tcpSocket.errorString());
      break;
    }
  }
}

// writes file to socket
void UITcpClient::sendFile(const QString& fileNameWithExt, 
                            const QString& fullFileNamePath) {
  // packet payload layout
  // 234235 (filename size in bytes)
  // foo.txt (filename with extension)
  // 2342342134 (payload chunk 1 size)
  // all dogs goto heaven (payload 1)
  // ...
  // finished file to upload

  QFile file(fullFileNamePath);

  if(!file.open(QIODevice::ReadOnly)) {
     QMessageBox::information(nullptr, 
        "File Open Error", "The file could not be opened for reading");
     return;
  }

  qint64 fileSize = file.size();
  qint64 totalFileBytesWritten = 0;

  // magic starting packet
  // this can be done a better way
  QByteArray magicBlock;
  QDataStream magicOut(&magicBlock, QIODevice::WriteOnly);
  magicOut.setVersion(QDataStream::Qt_5_0);

  // initializes block size
  magicOut << static_cast<quint64>(fileNameWithExt.size());
  
  // write payload
  magicOut << fileNameWithExt;

  tcpSocket.write(magicBlock);
  tcpSocket.waitForBytesWritten();

  // chunk and write main payload
  QDataStream fileStreamOut(&file);

  while(isClientConnected() && !fileStreamOut.atEnd()) {
    unique_ptr<char[]> buffer(new char[maxFileChunk]);

    int readBytes = fileStreamOut.readRawData(buffer.get(), maxFileChunk);

    QByteArray block;

    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_0);

    // initializes block size
    out << static_cast<quint64>(readBytes);
  
    // writes the payload
    out.writeRawData(buffer.get(), readBytes);
    
    tcpSocket.write(block);
    tcpSocket.waitForBytesWritten();
    totalFileBytesWritten += readBytes;

    // update ui
    emit fileProgressFinished(
      size_t(double(totalFileBytesWritten) / double(fileSize) * 100.));

    // allow the gui to update
    // need to be careful here to prevent any stack corruption issues
    // due to operating on a wound stack
    QApplication::processEvents();
  }
}

// disconnect client
void UITcpClient::disconnectClient(void) {
  tcpSocket.disconnectFromHost();
}

// returns connected state
bool UITcpClient::isClientConnected(void) {
  return tcpSocket.state() == QAbstractSocket::ConnectedState;
}

// notification for client connection
void UITcpClient::clientWasConnected(void) {
  emit clientWasConnectedFwd();
}

// notification for client disconnection
void UITcpClient::clientWasDisconnected(void) {
  emit clientWasDisconnectedFwd();
}