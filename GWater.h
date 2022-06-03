#ifndef GWATER_H
#define GWATER_H
#include"NonMovable.h"
#include <QGraphicsPixmapItem>

class GWater: public NonMovable, public QGraphicsPixmapItem
{
public:
    GWater();

    void create(QGraphicsScene *scene);
};

#endif // GWATER_H
