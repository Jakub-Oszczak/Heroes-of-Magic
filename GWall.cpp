#include "GWall.h"

GWall::GWall()
{

}

void GWall::create(QGraphicsScene *scene){
    collision = true;
    setPixmap(QPixmap(":/img/wall.jpg"));
    setPos(obsPosX, obsPosY);
    scene->addItem(this);
}
