#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
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

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Crear escena.
    QGraphicsScene *scene = new QGraphicsScene();

    //Crear Item para poner en la escena.
    MyRect *player = new MyRect();
    player->setRect(0,0,100,100);

    //Enfocar el Item.
    player->setFlag(QGraphicsItem::ItemIsFocusable);


    //Añadir Item a la scena.
    scene->addItem(player);

    //Añadir el View.
    QGraphicsView *view = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    view->setFixedSize(800, 600);
    view->setSceneRect(0,0,800,600);

    player->setPos(view->width()/2-player->rect().width()/2, view->height()-player->rect().height());

    QTimer *timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), player, SLOT(spaw()));
    timer->start(2000);

    return a.exec();
}



