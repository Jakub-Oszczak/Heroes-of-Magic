#include "GWater.h"

GWater::GWater()
{

}

void GWater::create(QGraphicsScene *scene){
    collision = true;
    setPixmap(QPixmap(":/img/water.jpg"));
    setPos(obsPosX, obsPosY);
    scene->addItem(this);
}
