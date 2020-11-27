#ifndef BULLET_H
#define BULLET_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include "enemy.h"
#include "game.h"

class Bullet: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bullet();
public slots:
    void move();
};

#endif // BULLET_H
