#ifndef GGRASS_H
#define GGRASS_H
#include"NonMovable.h"
#include <QGraphicsPixmapItem>

class GGrass: public NonMovable, public QGraphicsPixmapItem
{
public:
    GGrass();

    void create(QGraphicsScene *scene);

};

#endif // GGRASS_H
