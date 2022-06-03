#ifndef GBULLET_H
#define GBULLET_H
#include "Bullet.h"
#include <QGraphicsPixmapItem>

class GBullet: public QGraphicsPixmapItem
{
public:
    Bullet *bullet;
    GBullet();
    void drawBullet();
    void deleteBullet();

};

#endif // GBULLET_H
