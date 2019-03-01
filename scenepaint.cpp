#include "scenepaint.h"
#include "paint.h"
#include "ui_paint.h"
#include <QColor>
#include <QColorDialog>

scenePaint::scenePaint(QObject *parent):QGraphicsScene(parent)
{
}

void scenePaint::setPenColor( QColor &newColor)
{
        penColor=newColor;
}

void scenePaint::mousePressEvent(QGraphicsSceneMouseEvent *event) // нажатие мыши
{
    addEllipse(event->scenePos().x()-3,
               event->scenePos().y()-3,6,6, // Эллипс при нажатие кл.мыши
                  QPen(Qt::NoPen), QBrush(penColor));
                    prevPoint=event->scenePos(); //позиция нажатия
}

void scenePaint::mouseMoveEvent(QGraphicsSceneMouseEvent *event) // движение мыши
{
   addLine(prevPoint.x(),prevPoint.y(),
                     event->scenePos().x(),event->scenePos().y(), // линия по позиции
                      QPen(penColor,6,Qt::SolidLine,Qt::RoundCap));
                        prevPoint=event->scenePos();
}

