#include "GPlayer.h"

GPlayer::GPlayer()
{

}

void GPlayer::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_W)
        player->move(1);
    else if (event->key() == Qt::Key_A)
        player->move(2);
    else if (event->key() == Qt::Key_S)
        player->move(3);
    else if (event->key() == Qt::Key_D)
        player->move(4);
    else if (event->key() == Qt::Key_F){
        player->move(5);
    }
    else if (event->key() == Qt::Key_Space){
        player->move(6);
    }
    else if (event->key() == Qt::Key_Q){
        player->move(7);
    }
    else if (event->key() == Qt::Key_E){
        player->move(8);
    }
}
