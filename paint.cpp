#include "paint.h"
#include "ui_paint.h"
#include "scenepaint.h"
#include <QColor>
#include <QColorDialog>


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



void Paint::on_pushButton_clicked()
{
         QColor penColor=QColorDialog::getColor(Qt::white, this, "Change Color");
              if(penColor.isValid()){
                    scene->setPenColor(penColor);
           }
}


void Paint::on_pushButton_2_clicked()
{
        QColor penColor=QColorDialog::getColor(Qt::white, this, "Change Color");
        if(penColor.isValid()){
            ui->graphicsView->setBackgroundBrush(penColor);
        }
}
