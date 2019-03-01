#ifndef PAINT_H
#define PAINT_H
#include <QWidget>
#include <scenepaint.h>
#include <QTimer>
#include <QColor>

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

public slots:
    void on_pushButton_clicked();
private slots:
    void on_pushButton_2_clicked();
};

#endif // PAINT_H
