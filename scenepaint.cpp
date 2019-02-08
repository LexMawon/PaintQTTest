#include "scenepaint.h"

scenePaint::scenePaint(QObject *parent):QGraphicsScene(parent)
{

}
void scenePaint::mousePressEvent(QGraphicsSceneMouseEvent *event) // нажатие мыши
{
    addEllipse(event->scenePos().x()-3,event->scenePos().y()-3,6,6, // Эллипс при нажатие кл.мыши
               QPen(Qt::NoPen),QBrush(Qt::black));
    prevPoint=event->scenePos(); //позиция нажатия
}

void scenePaint::mouseMoveEvent(QGraphicsSceneMouseEvent *event) // движение мыши
{
    addLine(prevPoint.x(),prevPoint.y(),event->scenePos().x(),event->scenePos().y(), // линия по позиции
            QPen(Qt::black,6,Qt::SolidLine,Qt::RoundCap));
    prevPoint=event->scenePos();
}
