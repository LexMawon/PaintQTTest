#ifndef PAINT_H
#define PAINT_H
#include <QWidget>
#include <scenepaint.h>
#include <QTimer>

namespace Ui {
class Paint;
}

class Paint : public QWidget

{
    Q_OBJECT

public:
    explicit Paint(QWidget *parent = 0);
    ~Paint();

public:
    Ui::Paint *ui;
    QTimer *timer; // таймер
    scenePaint *scene; // графическая сцена для рисования

public slots:
    void slotTimer();
};

#endif // PAINT_H
