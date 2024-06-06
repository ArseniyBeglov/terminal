/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *portname;
    QLabel *label_2;
    QComboBox *baudrate;
    QLabel *label_3;
    QComboBox *stopbits;
    QLabel *label_4;
    QComboBox *parity;
    QLabel *label_9;
    QComboBox *databits;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_disconnect;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_input;
    QPushButton *send;
    QSpinBox *spinBox;
    QPushButton *send_ascii;
    QTextEdit *textEdit_output;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *clear_output;
    QTextEdit *textEdit_input;
    QPushButton *clear_input;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(696, 369);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 221, 171));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 51, 21));
        portname = new QComboBox(groupBox);
        portname->addItem(QString());
        portname->setObjectName("portname");
        portname->setGeometry(QRect(80, 20, 131, 22));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 50, 51, 21));
        baudrate = new QComboBox(groupBox);
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->setObjectName("baudrate");
        baudrate->setGeometry(QRect(80, 50, 131, 22));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 80, 51, 21));
        stopbits = new QComboBox(groupBox);
        stopbits->addItem(QString());
        stopbits->addItem(QString());
        stopbits->addItem(QString());
        stopbits->setObjectName("stopbits");
        stopbits->setGeometry(QRect(80, 80, 131, 22));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 110, 51, 21));
        parity = new QComboBox(groupBox);
        parity->addItem(QString());
        parity->addItem(QString());
        parity->addItem(QString());
        parity->setObjectName("parity");
        parity->setGeometry(QRect(80, 110, 131, 22));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 140, 51, 21));
        databits = new QComboBox(groupBox);
        databits->addItem(QString());
        databits->addItem(QString());
        databits->addItem(QString());
        databits->addItem(QString());
        databits->setObjectName("databits");
        databits->setGeometry(QRect(80, 140, 131, 22));
        pushButton_connect = new QPushButton(centralwidget);
        pushButton_connect->setObjectName("pushButton_connect");
        pushButton_connect->setGeometry(QRect(20, 230, 91, 23));
        pushButton_disconnect = new QPushButton(centralwidget);
        pushButton_disconnect->setObjectName("pushButton_disconnect");
        pushButton_disconnect->setGeometry(QRect(130, 230, 91, 23));
        pushButton_disconnect->setMinimumSize(QSize(91, 0));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 260, 221, 51));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(10, 20, 82, 17));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(70, 20, 82, 17));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(120, 20, 82, 17));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(240, 10, 441, 301));
        lineEdit_input = new QLineEdit(groupBox_3);
        lineEdit_input->setObjectName("lineEdit_input");
        lineEdit_input->setGeometry(QRect(10, 40, 311, 20));
        send = new QPushButton(groupBox_3);
        send->setObjectName("send");
        send->setGeometry(QRect(330, 40, 75, 23));
        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(280, 70, 42, 22));
        spinBox->setMaximum(255);
        send_ascii = new QPushButton(groupBox_3);
        send_ascii->setObjectName("send_ascii");
        send_ascii->setGeometry(QRect(330, 70, 75, 23));
        textEdit_output = new QTextEdit(groupBox_3);
        textEdit_output->setObjectName("textEdit_output");
        textEdit_output->setGeometry(QRect(10, 160, 311, 131));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 20, 47, 13));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 140, 47, 13));
        clear_output = new QPushButton(groupBox_3);
        clear_output->setObjectName("clear_output");
        clear_output->setGeometry(QRect(330, 270, 75, 23));
        textEdit_input = new QTextEdit(groupBox_3);
        textEdit_input->setObjectName("textEdit_input");
        textEdit_input->setGeometry(QRect(10, 70, 261, 71));
        clear_input = new QPushButton(groupBox_3);
        clear_input->setObjectName("clear_input");
        clear_input->setGeometry(QRect(330, 120, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 696, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "COM Port:", nullptr));
        portname->setItemText(0, QCoreApplication::translate("MainWindow", "COM1", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Baud:", nullptr));
        baudrate->setItemText(0, QCoreApplication::translate("MainWindow", "2400", nullptr));
        baudrate->setItemText(1, QCoreApplication::translate("MainWindow", "4800", nullptr));
        baudrate->setItemText(2, QCoreApplication::translate("MainWindow", "9600", nullptr));
        baudrate->setItemText(3, QCoreApplication::translate("MainWindow", "19200", nullptr));
        baudrate->setItemText(4, QCoreApplication::translate("MainWindow", "38400", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Stop bits:", nullptr));
        stopbits->setItemText(0, QCoreApplication::translate("MainWindow", "One Stop Bit", nullptr));
        stopbits->setItemText(1, QCoreApplication::translate("MainWindow", "One And Half Stop Bit", nullptr));
        stopbits->setItemText(2, QCoreApplication::translate("MainWindow", "Two Stop Bit", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "Parity:", nullptr));
        parity->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        parity->setItemText(1, QCoreApplication::translate("MainWindow", "Even", nullptr));
        parity->setItemText(2, QCoreApplication::translate("MainWindow", "Odd", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "Data bits:", nullptr));
        databits->setItemText(0, QCoreApplication::translate("MainWindow", "Five", nullptr));
        databits->setItemText(1, QCoreApplication::translate("MainWindow", "Six", nullptr));
        databits->setItemText(2, QCoreApplication::translate("MainWindow", "Seven", nullptr));
        databits->setItemText(3, QCoreApplication::translate("MainWindow", "Eight", nullptr));

        pushButton_connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Format", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "ASCII", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "BIN", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "HEX", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Communication", nullptr));
        send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        send_ascii->setText(QCoreApplication::translate("MainWindow", "Send ASCII", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        clear_output->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        clear_input->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
