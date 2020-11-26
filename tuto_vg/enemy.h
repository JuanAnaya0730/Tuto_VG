#ifndef ENEMY_H
#define ENEMY_H


#include <QObject>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>

class Enemy: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Enemy();
public slots:
    void move();
};

#endif // ENEMY_H
