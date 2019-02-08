#include "paint.h"
#include "ui_paint.h"

Paint::Paint(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Paint)
{
    ui->setupUi(this);
    scene = new scenePaint();                         // Иницилизация и
    ui->graphicsView->setScene(scene);   // установка графтческой сцены

    timer = new QTimer(); // Создание таймера обработки события
    connect(timer, &QTimer::timeout, this, &Paint::slotTimer);
    timer->start(); // старт таймера
}

Paint::~Paint()
{
    delete ui;
}

void Paint::slotTimer()
{
    timer->stop();
    scene->setSceneRect(0,0, ui->graphicsView->width() - 0, ui->graphicsView->height() - 0);
}
