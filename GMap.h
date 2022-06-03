#ifndef GMAP_H
#define GMAP_H
#include "Map.h"
#include <QGraphicsPixmapItem>

class GMap: public QGraphicsPixmapItem
{
public:
    GMap();
    Map *map;
    void draw(QGraphicsScene *scene);
    void drawGameOver(QGraphicsScene *scene, int option);
};

#endif // GMAP_H
