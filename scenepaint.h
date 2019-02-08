#ifndef SCENEPAINT_H
#define SCENEPAINT_H
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

class scenePaint : public QGraphicsScene
{
    Q_OBJECT

public:
    explicit scenePaint(QObject *parent=0);
public:
    QPointF prevPoint; // координаты точки
public: // события использования мыши для рисования
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
public:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
};

#endif // SCENEPAINT_H
