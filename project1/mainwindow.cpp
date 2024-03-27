#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    timer(new QTimer(this)),
    timerRemaining(0),
    timerRunning(false)

{

    ui->setupUi(this);
    ui->fluoro->setIcon(QIcon("C:/Users/INFORMÁTICA/OneDrive/Área de Trabalho/project/project1/icons/eye_close.png"));
    ui->fluoro->setCheckable(true);
    ui->timerbutton->setCheckable(true);
    ui->xraybutton->setIcon(QIcon("C:/Users/INFORMÁTICA/OneDrive/Área de Trabalho/project/project1/icons/radiation_icon.png"));
    ui->xraybutton->setCheckable(true);
    ui->cinebutton->setIcon(QIcon("C:/Users/INFORMÁTICA/OneDrive/Área de Trabalho/project/project1/icons/movie_icon.png"));
    ui->cinebutton->setCheckable(true);
    ui->overheatingbutton->setCheckable(true);
    ui->angiobutton->setIcon(QIcon("C:/Users/INFORMÁTICA/OneDrive/Área de Trabalho/project/project1/icons/file_icon.png"));
    ui->angiobutton->setCheckable(true);

    //>>>>>conexões<<<<<<<<<

    connect(timer, &QTimer::timeout, this, &MainWindow::updateTimer); // Conectando o sinal timeout ao slot updateTimer

    //>>>>>fim das conexões<<<<<

    //>>>>>estilizando variáveis<<<<

    ui->timerbutton->setStyleSheet("QPushButton {color: white; background-color: #52639f; }");
    ui->timerlabel->setStyleSheet("QLabel {color: white; background-color: transparent; }");
    ui->coluna2->setStyleSheet("QColumnView {background-color: rgb(85, 85, 127);border-radius: 10px;border: 2px rgb(85, 85, 127);}");
    ui->coluna1->setStyleSheet("QColumnView {background-color: rgb(85, 85, 127);border-radius: 10px;border: 2px rgb(85, 85, 127);}");
    ui->coluna3->setStyleSheet("QColumnView {background-color: rgb(85, 85, 127);border-radius: 10px;border: 2px rgb(85, 85, 127);}");
    ui->coluna4->setStyleSheet("QColumnView {background-color: rgb(85, 85, 127);border-radius: 10px;border: 2px rgb(85, 85, 127);}");
    ui->coluna5->setStyleSheet("QColumnView {background-color: rgb(85, 85, 127);border-radius: 10px;border: 2px rgb(85, 85, 127);}");
    ui->zerarbutton->setStyleSheet("QPushButton {color: white; background-color: #52639f; }");
    ui->configurationbutton->setStyleSheet("QPushButton {color: white; background-color: #52639f; }");
    ui->turnoffbutton->setStyleSheet("QPushButton {color: white; background-color: #52639f; }");
    ui->fluoroscopytimebutton->setStyleSheet("QPushButton {color: white; background-color: #52639f; }");
    ui->heatexchangerbutton->setStyleSheet("QPushButton {color: white; background-color: #52639f; }");
    ui->overheatingbutton->setStyleSheet("QPushButton {color: white; background-color: #52639f; }");
    ui->xrlockupbutton->setStyleSheet("QPushButton {color: white; background-color: #52639f; }");
    ui->readybutton->setStyleSheet("QPushButton {color: white; background-color: #52639f; }");
    ui->hubutton->setStyleSheet("QPushButton {color: white; background-color: #52639f; }");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_fluoro_toggled(bool checked)
{
    if(checked)
    {
        ui->fluoro->setIcon(QIcon("C:/Users/INFORMÁTICA/OneDrive/Área de Trabalho/project/project1/icons/eye_icon.png"));
        qDebug() <<"O fluoro foi ativado!";
    }
    else
    {
        ui->fluoro->setIcon(QIcon("C:/Users/INFORMÁTICA/OneDrive/Área de Trabalho/project/project1/icons/eye_close.png"));
        qDebug() <<"O fluoro foi desativado!";
    }
}

void MainWindow::on_timerbutton_toggled(bool checked)
{
    qDebug() <<"Botão temporizador clicado!";
    if (checked && !timerRunning)
    {
        timer->start(1000); // Inicia o temporizador com intervalo de 1 segundo (1000ms)
        timerRunning = true;
    }
    else
    {
        timer->stop(); // Para o temporizador
        timerRunning = false;
    }
}

void MainWindow::updateTimer()
{
    timerRemaining++;

    int minutes = timerRemaining / 60;
    int seconds = timerRemaining % 60;

    QString timeString;

    if (minutes > 0) {
        timeString += QString::number(minutes) + "m ";
    }

    timeString += QString::number(seconds) + "s";

    ui->timerlabel->setText(timeString);
}



void MainWindow::on_xraybutton_toggled(bool checked)
{
    if(checked)
    {
        ui->xraybutton->setIcon(QIcon("C:/Users/INFORMÁTICA/OneDrive/Área de Trabalho/project/project1/icons/radiation_icon.png"));
        ui->xraybutton->setStyleSheet("QPushButton {color: black; background-color: yellow;");
        qDebug() <<"O RaioX está ativo!";
    }
    else
    {
        ui->xraybutton->setIcon(QIcon("C:/Users/INFORMÁTICA/OneDrive/Área de Trabalho/project/project1/icons/radiation_icon.png"));
        qDebug() <<"O RaioX está Desativado!";
    }
}


void MainWindow::on_pushButton_11_toggled(bool checked)
{
    if(checked)
    {
        ui->cinebutton->setIcon(QIcon("C:/Users/INFORMÁTICA/OneDrive/Área de Trabalho/project/project1/icons/movie_icon.png"));
        qDebug() <<"O Cine está Ativo!";
    }
    else
    {
        ui->cinebutton->setIcon(QIcon("C:/Users/INFORMÁTICA/OneDrive/Área de Trabalho/project/project1/icons/movie_icon.png"));
        qDebug() <<"O Cine está Desativado!";
    }
}


void MainWindow::on_overheatingbutton_toggled(bool checked)
{
    if(checked)
    {
        qDebug() <<"overheating ativo!";
    }
    else
    {
        qDebug() <<"Overheating Desativado!";
    }
}


void MainWindow::on_angiobutton_toggled(bool checked)
{
    if(checked)
    {
        ui->angiobutton->setIcon(QIcon("C:/Users/INFORMÁTICA/OneDrive/Área de Trabalho/project/project1/icons/file_icon.png"));
        qDebug() <<"Angio foi Ativado!";
    }
    else
    {
        ui->angiobutton->setIcon(QIcon("C:/Users/INFORMÁTICA/OneDrive/Área de Trabalho/project/project1/icons/file_icon.png"));
        qDebug() <<"Angio foi Desativado!";
    }
}


