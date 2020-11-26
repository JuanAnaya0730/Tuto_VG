#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QDebug>
#include <QObject>
#include "enemy.h"
#include "bullet.h"
#include <QGraphicsScene>

class MyRect: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    MyRect();
    void keyPressEvent(QKeyEvent *event);
public slots:
    void spaw();
};

#endif // MYRECT_H
