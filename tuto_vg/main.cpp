#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include "game.h"
#include "myrect.h"

/*
-Memoria dinamica, punteros.
-Widgets.
-QGraphicsScene.
-QGraphicsItem.
-QGraphicsView.
-QKeyEvent.
-QDebug.
-QTimer.
-signals and slots(connect).
-QObject -- MACRO.
*/

game *juego;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    juego = new game();
    juego->show();

    return a.exec();
}



