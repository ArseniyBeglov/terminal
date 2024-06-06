#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    populatePorts();
    connect(ui->radioButton, SIGNAL(pressed()), this, SLOT(formatASCII()));
    connect(ui->radioButton_2, SIGNAL(pressed()), this, SLOT(formatBIN()));
    connect(ui->radioButton_3, SIGNAL(pressed()), this, SLOT(formatHEX()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::populatePorts()
{
    ui->portname->clear(); // Очищаем комбобокс

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        ui->portname->addItem(info.portName());
    }
}

void MainWindow::on_pushButton_connect_clicked()
{
    serial.setPortName(ui->portname->currentText());
    qDebug() << ui->portname->currentText();
    serial.setBaudRate(ui->baudrate->currentText().toUInt());
    qDebug() << serial.baudRate();

    if (ui->stopbits->currentText() == "One Stop Bit")
        serial.setStopBits(QSerialPort::OneStop);
    else if (ui->stopbits->currentText() == "Two Stop Bits")
        serial.setStopBits(QSerialPort::OneAndHalfStop);
    else
        serial.setStopBits(QSerialPort::TwoStop);
    qDebug() << serial.stopBits();
    if (ui->parity->currentText() == "None")
        serial.setParity(QSerialPort::NoParity);
    else if (ui->parity->currentText() == "Even")
        serial.setParity(QSerialPort::EvenParity);
    else
        serial.setParity(QSerialPort::OddParity);
    qDebug() << serial.parity();
    if (ui->databits->currentText() == "Five")
        serial.setDataBits(QSerialPort::Data5);
    else if (ui->databits->currentText() == "Six")
        serial.setDataBits(QSerialPort::Data6);
    else if (ui->databits->currentText() == "Seven")
        serial.setDataBits(QSerialPort::Data7);
    else
        serial.setDataBits(QSerialPort::Data8);
    qDebug() << serial.dataBits();
    serial.open(QSerialPort::ReadWrite);
}

void MainWindow::on_pushButton_disconnect_clicked()
{
    if (serial.isOpen())
        serial.close();
}

void MainWindow::on_send_ascii_clicked()
{
    int ascii = ui->spinBox->value();
    char chr = char(ascii);
    std::string text(1,chr);
    const char* oneByte = text.c_str();
    serial.write(oneByte);
    input.append(oneByte);
    if (!serial.waitForBytesWritten()){
        qDebug() << "Error with sending_ascii";
    }
    ui->textEdit_input->setText(input);
}

void MainWindow::on_send_clicked()
{
    std::string text = ui->lineEdit_input->text().toStdString();
    const char* oneByte = text.c_str();
    serial.write(oneByte);
    input.append(oneByte);
    if (!serial.waitForBytesWritten()){
        qDebug() << oneByte;
    }
    ui->textEdit_input->setText(input);
}

void MainWindow::on_clear_input_clicked()
{
    ui->textEdit_input->clear();
    input.clear();
}

void MainWindow::on_clear_output_clicked()
{
    ui->textEdit_output->clear();
    output.clear();
}

bool MainWindow::checkReceiving(){
    char buffer[50];
    int numRead;
    qDebug() << "Receiving #1";
    if (serial.bytesAvailable() > 0) {
        numRead = serial.read(buffer, 50);

        output.append(buffer);

        ui->textEdit_output->append(output);

        emit bytesReceived();
        qDebug() << "Receiving TRUE";
        return true;
    }
    else {
        qDebug() << "Receiving FALSE";
        return false;
    }
}

void MainWindow::formatASCII(){
    ui->textEdit_input->setText(input);
    ui->textEdit_output->setText(output);
}

void MainWindow::formatBIN(){
    ui->textEdit_input->setText("NOW BIN");
    ui->textEdit_output->setText("NOW BIN");
    //ascii->bin
}

void MainWindow::formatHEX(){
    ui->textEdit_input->setText("NOW HEX");
    ui->textEdit_output->setText("NOW HEX");
    //ascii->hex
}
