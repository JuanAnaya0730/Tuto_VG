#include "myrect.h"

MyRect::MyRect()
{

}

void MyRect::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left || event->key() == Qt::Key_A){
        if(pos().x() > 0){
            setPos(x()-10, y());
        }
    }
    else if(event->key() == Qt::Key_Right){
        if(pos().x() + 100 < 800){
            setPos(x()+10, y());
        }
    }
    else if(event->key() == Qt::Key_Space){
        //Create bala.
        Bullet *bullet = new Bullet();
        bullet->setPos(x(), y());
        scene()->addItem(bullet);
    }
}

void MyRect::spaw()
{
    Enemy *enemy = new Enemy();
    scene()->addItem(enemy);
}




