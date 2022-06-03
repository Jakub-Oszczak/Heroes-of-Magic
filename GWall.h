#ifndef GWALL_H
#define GWALL_H
#include"NonMovable.h"
#include <QGraphicsPixmapItem>

class GWall: public NonMovable, public QGraphicsPixmapItem
{
public:
    GWall();

    void create(QGraphicsScene *scene);
};

#endif // GWALL_H
