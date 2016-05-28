#include "simpleclient.h"
#include "UITcpClient.h"
#include "QFileDialog.h"
#include "qmessagebox.h"

namespace clientConst {
  static const QString clientConnected = "Connected";
  static const QString clientDisconnected = "Disconnected";
  static const QStringList portValues = {"5000", "6000", "10000"};
}

// constructor
SimpleClient::SimpleClient(QWidget *parent): QMainWindow(parent) {
  ui.setupUi(this);

  // add default gui values
  ui.portComboBox->addItems(clientConst::portValues);
  ui.fileNameLabel->setText(QString());
  ui.progressBar->setValue(0);
  resetClientUIElements();

  // connect signals
	QObject::connect(ui.uploadPushButton, SIGNAL(clicked()), 
    this, SLOT(upload()));

	QObject::connect(ui.openFilePushButton, 
						SIGNAL(clicked()), 
						this, 
						SLOT(openFile()));

  QObject::connect(ui.connectPushButton, SIGNAL(clicked()), 
    this, SLOT(connect()));

  QObject::connect(ui.disconnectPushButton, SIGNAL(clicked()), 
    this, SLOT(disconnect()));

  QObject::connect(&socketClient, SIGNAL(clientWasConnectedFwd()), 
    this, SLOT(clientConnected()));

  QObject::connect(&socketClient, SIGNAL(clientWasDisconnectedFwd()), 
    this, SLOT(clientDisconnected()));

  QObject::connect(&socketClient, SIGNAL(fileProgressFinished(size_t)), 
    this, SLOT(progressBarUpdate(size_t)));
}

// attempts to upload file
void SimpleClient::upload(void) {
  ui.progressBar->setValue(0);

  if(!socketClient.isClientConnected()) {
    QMessageBox::information(this, 
        "Client Connection Error", "Please connect to server");
    return;
  }

  QString fileName = ui.fileNameLabel->text();

  if(fileName.isEmpty()) {
     QMessageBox::information(this, 
        "File Upload Error", "You need to open a file to upload");
     return;
  }

  // let's remove slots temporarily
  QObject::disconnect(ui.uploadPushButton, SIGNAL(clicked()), 
    this, SLOT(upload()));

	QObject::disconnect(ui.openFilePushButton, 
						SIGNAL(clicked()), 
						this, 
						SLOT(openFile()));

  QObject::disconnect(ui.connectPushButton, SIGNAL(clicked()), 
            this, SLOT(connect()));

  // attempts to send file to server
  // this call will implicitly process ui events
  socketClient.sendFile(fileName, fileNameWithExtFullPath);

  // disconnect client
  // server is designed to only accept a single file
  // per client before disconnection
  disconnect();

  // reconnect disconnected slots
  QObject::connect(ui.uploadPushButton, SIGNAL(clicked()), 
            this, SLOT(upload()));

	QObject::connect(ui.openFilePushButton, 
						SIGNAL(clicked()), 
						this, 
						SLOT(openFile()));

  QObject::connect(ui.connectPushButton, SIGNAL(clicked()), 
            this, SLOT(connect()));
}

// opens file to be uploaded
void SimpleClient::openFile(void) {
  // need to reset the label on possible failure
  ui.fileNameLabel->setText(QString());
  fileNameWithExtFullPath.clear();
  ui.progressBar->setValue(0);

  QString fileNameFullPath = QFileDialog::getOpenFileName(this, 
                                            this->tr("Open File To Upload"), 
                                            "",
                                            "");

  if(fileNameFullPath.isEmpty()) {
    return;
  }
  
  string fullPathStdString = fileNameFullPath.toStdString();

  size_t pos = fullPathStdString.find_last_of('/');

  // this should never occur
  if(pos == string::npos) {
    QMessageBox::information(this, 
        "File Name Error", "Could not determine file name from path");
    return;
  }

  string fileNameWithExt = fullPathStdString.substr(pos+1);

  // valid name so store path
  fileNameWithExtFullPath = fileNameFullPath;
  ui.fileNameLabel->setText(QString::fromStdString(fileNameWithExt));
}

// connects client to server
void SimpleClient::connect(void) {
  if(ui.serverIpLineEdit->text().isEmpty()) {
    QMessageBox::information(this, 
        "Server Ip", "Please enter a server ip");
    return;
  }

  // connects to server / does not block
  // internal error handling occurs
  // will be notified through slot on connection clientConnected()
  socketClient.connectClient(QHostAddress(ui.serverIpLineEdit->text()), 
                              ui.portComboBox->currentText().toInt());
}

// resets elements to state before client connects
void SimpleClient::resetClientUIElements(void) {
  ui.connectedLabel->setText(clientConst::clientDisconnected);
}

// disconnects client from server
void SimpleClient::disconnect(void) {
  socketClient.disconnectClient();
}

// notification that client connected
void SimpleClient::clientConnected(void) {
  ui.connectedLabel->setText(clientConst::clientConnected);
}

// notification that client disconnected
void SimpleClient::clientDisconnected(void) {
  resetClientUIElements();
}

// update progress bar on client
void SimpleClient::progressBarUpdate(size_t perc) {
  ui.progressBar->setValue(perc);
}