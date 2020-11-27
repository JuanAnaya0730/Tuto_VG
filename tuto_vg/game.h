#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include "myrect.h"
#include "score.h"

class game: public QGraphicsView
{
public:
    game(QWidget *parent = 0);

    QGraphicsScene *scene;
    MyRect *player;
    Score *score;

};

#endif // GAME_H
