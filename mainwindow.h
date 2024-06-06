#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Q_PROPERTY(bool checkReceiving READ checkReceiving NOTIFY bytesReceived)

public:
    MainWindow(QWidget *parent = nullptr);

    bool checkReceiving();

    ~MainWindow();

signals:
    void bytesReceived();
    bool asciiChosen();
    bool binChosen();
    bool hexChosen();

public slots:
    void formatASCII();
    void formatBIN();
    void formatHEX();

private slots:
    void on_pushButton_connect_clicked();

    void on_pushButton_disconnect_clicked();

    void on_send_ascii_clicked();

    void on_send_clicked();

    void on_clear_input_clicked();

    void on_clear_output_clicked();

    void populatePorts();

private:
    Ui::MainWindow *ui;
    QSerialPort serial;
    QString input;
    QString output;
};
#endif // MAINWINDOW_H
