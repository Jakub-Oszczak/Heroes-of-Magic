#ifndef GPLAYER_H
#define GPLAYER_H
#include "Player.h"
#include<QKeyEvent>


class GPlayer: public QGraphicsPixmapItem
{
public:
    GPlayer();
    void keyPressEvent(QKeyEvent *event);
    Player *player;
};

#endif // GPLAYER_H
