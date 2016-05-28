/********************************************************************************
** Form generated from reading UI file 'simpleclient.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLECLIENT_H
#define UI_SIMPLECLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimpleClientClass
{
public:
    QAction *actionOpenFile;
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *fileNameLabel;
    QProgressBar *progressBar;
    QPushButton *openFilePushButton;
    QPushButton *uploadPushButton;
    QGroupBox *groupBox;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *connectedLabel;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *portComboBox;
    QPushButton *connectPushButton;
    QPushButton *disconnectPushButton;
    QLineEdit *serverIpLineEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SimpleClientClass)
    {
        if (SimpleClientClass->objectName().isEmpty())
            SimpleClientClass->setObjectName(QStringLiteral("SimpleClientClass"));
        SimpleClientClass->resize(338, 293);
        actionOpenFile = new QAction(SimpleClientClass);
        actionOpenFile->setObjectName(QStringLiteral("actionOpenFile"));
        centralWidget = new QWidget(SimpleClientClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 120, 311, 133));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        fileNameLabel = new QLabel(groupBox_2);
        fileNameLabel->setObjectName(QStringLiteral("fileNameLabel"));

        gridLayout->addWidget(fileNameLabel, 0, 1, 1, 1);

        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);
        progressBar->setTextVisible(true);

        gridLayout->addWidget(progressBar, 1, 0, 1, 2);

        openFilePushButton = new QPushButton(groupBox_2);
        openFilePushButton->setObjectName(QStringLiteral("openFilePushButton"));

        gridLayout->addWidget(openFilePushButton, 2, 0, 1, 2);

        uploadPushButton = new QPushButton(groupBox_2);
        uploadPushButton->setObjectName(QStringLiteral("uploadPushButton"));

        gridLayout->addWidget(uploadPushButton, 3, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 315, 103));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 25, 295, 70));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 2);

        connectedLabel = new QLabel(widget);
        connectedLabel->setObjectName(QStringLiteral("connectedLabel"));

        gridLayout_2->addWidget(connectedLabel, 0, 2, 1, 4);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 4, 1, 1);

        portComboBox = new QComboBox(widget);
        portComboBox->setObjectName(QStringLiteral("portComboBox"));

        gridLayout_2->addWidget(portComboBox, 1, 5, 1, 1);

        connectPushButton = new QPushButton(widget);
        connectPushButton->setObjectName(QStringLiteral("connectPushButton"));

        gridLayout_2->addWidget(connectPushButton, 2, 0, 1, 3);

        disconnectPushButton = new QPushButton(widget);
        disconnectPushButton->setObjectName(QStringLiteral("disconnectPushButton"));

        gridLayout_2->addWidget(disconnectPushButton, 2, 3, 1, 3);

        serverIpLineEdit = new QLineEdit(widget);
        serverIpLineEdit->setObjectName(QStringLiteral("serverIpLineEdit"));

        gridLayout_2->addWidget(serverIpLineEdit, 1, 1, 1, 3);

        SimpleClientClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(SimpleClientClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SimpleClientClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SimpleClientClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SimpleClientClass->setStatusBar(statusBar);

        retranslateUi(SimpleClientClass);

        QMetaObject::connectSlotsByName(SimpleClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *SimpleClientClass)
    {
        SimpleClientClass->setWindowTitle(QApplication::translate("SimpleClientClass", "SimpleClient", 0));
        actionOpenFile->setText(QApplication::translate("SimpleClientClass", "Open File", 0));
        groupBox_2->setTitle(QApplication::translate("SimpleClientClass", "File", 0));
        label->setText(QApplication::translate("SimpleClientClass", "File Name:", 0));
        fileNameLabel->setText(QApplication::translate("SimpleClientClass", "blah", 0));
        openFilePushButton->setText(QApplication::translate("SimpleClientClass", "Open File", 0));
        uploadPushButton->setText(QApplication::translate("SimpleClientClass", "Upload", 0));
        groupBox->setTitle(QApplication::translate("SimpleClientClass", "Server", 0));
        label_4->setText(QApplication::translate("SimpleClientClass", "Connection Status:", 0));
        connectedLabel->setText(QApplication::translate("SimpleClientClass", "blah", 0));
        label_2->setText(QApplication::translate("SimpleClientClass", "Server IP:", 0));
        label_3->setText(QApplication::translate("SimpleClientClass", "Port:", 0));
        connectPushButton->setText(QApplication::translate("SimpleClientClass", "Connect", 0));
        disconnectPushButton->setText(QApplication::translate("SimpleClientClass", "Disconnect", 0));
    } // retranslateUi

};

namespace Ui {
    class SimpleClientClass: public Ui_SimpleClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLECLIENT_H
