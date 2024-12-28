/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *btnGenerateKeys;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *txtPrivateKey;
    QLineEdit *txtPrimeQ;
    QLineEdit *txtPublicKey;
    QLineEdit *txtPhiN;
    QLineEdit *txtN;
    QLineEdit *txtPrimeP;
    QGroupBox *groupBox_2;
    QTextEdit *txtPlainText;
    QPushButton *btnEncrypt;
    QTextEdit *txtEncryptedMessage;
    QLabel *label_7;
    QLabel *label_8;
    QSplitter *splitter;
    QLabel *label_11;
    QLineEdit *txtPublickey_1;
    QPushButton *btnSaveFile;
    QPushButton *btnReadFile;
    QGroupBox *groupBox_3;
    QTextEdit *txtEncryptedInput;
    QPushButton *btnDecrypt;
    QTextEdit *txtDecryptedMessage;
    QLabel *label_9;
    QLabel *label_10;
    QSplitter *splitter_2;
    QLabel *label_12;
    QLineEdit *txtPrivateKey_1;
    QPushButton *btnReadFile_2;
    QPushButton *btnSaveFile_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 30, 243, 274));
        btnGenerateKeys = new QPushButton(groupBox);
        btnGenerateKeys->setObjectName("btnGenerateKeys");
        btnGenerateKeys->setGeometry(QRect(10, 30, 80, 24));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 70, 49, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 49, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 130, 49, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 160, 49, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 190, 91, 21));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 220, 71, 16));
        txtPrivateKey = new QLineEdit(groupBox);
        txtPrivateKey->setObjectName("txtPrivateKey");
        txtPrivateKey->setGeometry(QRect(120, 220, 91, 24));
        txtPrivateKey->setReadOnly(true);
        txtPrimeQ = new QLineEdit(groupBox);
        txtPrimeQ->setObjectName("txtPrimeQ");
        txtPrimeQ->setGeometry(QRect(121, 91, 91, 24));
        txtPrimeQ->setReadOnly(true);
        txtPublicKey = new QLineEdit(groupBox);
        txtPublicKey->setObjectName("txtPublicKey");
        txtPublicKey->setGeometry(QRect(120, 190, 91, 24));
        txtPublicKey->setReadOnly(true);
        txtPhiN = new QLineEdit(groupBox);
        txtPhiN->setObjectName("txtPhiN");
        txtPhiN->setGeometry(QRect(121, 151, 91, 24));
        txtPhiN->setReadOnly(true);
        txtN = new QLineEdit(groupBox);
        txtN->setObjectName("txtN");
        txtN->setGeometry(QRect(121, 121, 91, 24));
        txtN->setReadOnly(true);
        txtPrimeP = new QLineEdit(groupBox);
        txtPrimeP->setObjectName("txtPrimeP");
        txtPrimeP->setGeometry(QRect(121, 61, 91, 24));
        txtPrimeP->setReadOnly(true);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(310, 20, 401, 221));
        txtPlainText = new QTextEdit(groupBox_2);
        txtPlainText->setObjectName("txtPlainText");
        txtPlainText->setGeometry(QRect(110, 40, 181, 41));
        btnEncrypt = new QPushButton(groupBox_2);
        btnEncrypt->setObjectName("btnEncrypt");
        btnEncrypt->setGeometry(QRect(110, 120, 80, 24));
        txtEncryptedMessage = new QTextEdit(groupBox_2);
        txtEncryptedMessage->setObjectName("txtEncryptedMessage");
        txtEncryptedMessage->setGeometry(QRect(110, 160, 181, 41));
        txtEncryptedMessage->setReadOnly(true);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 50, 49, 16));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 170, 49, 16));
        splitter = new QSplitter(groupBox_2);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(110, 90, 179, 24));
        splitter->setOrientation(Qt::Orientation::Horizontal);
        label_11 = new QLabel(splitter);
        label_11->setObjectName("label_11");
        splitter->addWidget(label_11);
        txtPublickey_1 = new QLineEdit(splitter);
        txtPublickey_1->setObjectName("txtPublickey_1");
        txtPublickey_1->setReadOnly(true);
        splitter->addWidget(txtPublickey_1);
        btnSaveFile = new QPushButton(groupBox_2);
        btnSaveFile->setObjectName("btnSaveFile");
        btnSaveFile->setGeometry(QRect(310, 170, 80, 24));
        btnReadFile = new QPushButton(groupBox_2);
        btnReadFile->setObjectName("btnReadFile");
        btnReadFile->setGeometry(QRect(310, 50, 80, 24));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(310, 250, 401, 271));
        txtEncryptedInput = new QTextEdit(groupBox_3);
        txtEncryptedInput->setObjectName("txtEncryptedInput");
        txtEncryptedInput->setGeometry(QRect(110, 40, 181, 41));
        btnDecrypt = new QPushButton(groupBox_3);
        btnDecrypt->setObjectName("btnDecrypt");
        btnDecrypt->setGeometry(QRect(110, 140, 80, 24));
        txtDecryptedMessage = new QTextEdit(groupBox_3);
        txtDecryptedMessage->setObjectName("txtDecryptedMessage");
        txtDecryptedMessage->setGeometry(QRect(110, 170, 181, 41));
        txtDecryptedMessage->setReadOnly(true);
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 50, 49, 16));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(30, 180, 49, 16));
        splitter_2 = new QSplitter(groupBox_3);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(110, 100, 154, 24));
        splitter_2->setOrientation(Qt::Orientation::Horizontal);
        label_12 = new QLabel(splitter_2);
        label_12->setObjectName("label_12");
        splitter_2->addWidget(label_12);
        txtPrivateKey_1 = new QLineEdit(splitter_2);
        txtPrivateKey_1->setObjectName("txtPrivateKey_1");
        txtPrivateKey_1->setReadOnly(true);
        splitter_2->addWidget(txtPrivateKey_1);
        btnReadFile_2 = new QPushButton(groupBox_3);
        btnReadFile_2->setObjectName("btnReadFile_2");
        btnReadFile_2->setGeometry(QRect(310, 50, 80, 24));
        btnSaveFile_2 = new QPushButton(groupBox_3);
        btnSaveFile_2->setObjectName("btnSaveFile_2");
        btnSaveFile_2->setGeometry(QRect(310, 180, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Sinh Kh\303\263a RSA", nullptr));
        btnGenerateKeys->setText(QCoreApplication::translate("MainWindow", "Sinh kh\303\263a", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "P:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Q:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "N: ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Phi(n):", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Kh\303\263a C\303\264ng khai:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Kh\303\263a Ri\303\252ng:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "M\303\243 H\303\263a", nullptr));
        btnEncrypt->setText(QCoreApplication::translate("MainWindow", "M\303\243 H\303\263a", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "B\341\272\243n r\303\265", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "B\341\272\243n m\303\243", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Kh\303\263a C\303\264ng Khai:", nullptr));
        btnSaveFile->setText(QCoreApplication::translate("MainWindow", "Xu\341\272\245t file", nullptr));
        btnReadFile->setText(QCoreApplication::translate("MainWindow", "\304\220\341\273\215c file", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Gi\341\272\243i m\303\243", nullptr));
        btnDecrypt->setText(QCoreApplication::translate("MainWindow", "Gi\341\272\243i m\303\243", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "B\341\272\243n m\303\243", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "B\341\272\243n r\303\265", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Kh\303\263a Ri\303\252ng:", nullptr));
        btnReadFile_2->setText(QCoreApplication::translate("MainWindow", "\304\220\341\273\215c file", nullptr));
        btnSaveFile_2->setText(QCoreApplication::translate("MainWindow", "Xu\341\272\245t file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
