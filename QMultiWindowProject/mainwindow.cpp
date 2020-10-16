#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget::setWindowFlag(Qt::FramelessWindowHint);
    qDebug() << "Hello Git";
}

MainWindow::~MainWindow()
{
    delete ui;
}

