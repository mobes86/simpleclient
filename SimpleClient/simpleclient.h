#ifndef SIMPLECLIENT_H
#define SIMPLECLIENT_H

#include <QtWidgets/QMainWindow>
#include "ui_simpleclient.h"
#include "UITcpClient.h"

class SimpleClient : public QMainWindow {
  Q_OBJECT

  public:
    SimpleClient(QWidget *parent = 0);
    ~SimpleClient() = default;
    bool isConnected(void);

  public slots:
    void upload(void);
    void openFile(void);
    void connect(void);
    void disconnect(void);

    void clientConnected(void);
    void clientDisconnected(void);
    void progressBarUpdate(size_t perc);

  private:
    Ui::SimpleClientClass ui;
    UITcpClient socketClient;
    QString fileNameWithExtFullPath;

   void resetClientUIElements(void);
};

#endif // SIMPLECLIENT_H
