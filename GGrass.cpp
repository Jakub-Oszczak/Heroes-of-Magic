#include "GGrass.h"
#include "qgraphicsscene.h"

GGrass::GGrass()
{

}

void GGrass::create(QGraphicsScene *scene){
    collision = false;
    setPixmap(QPixmap(":/img/grass.jpg"));
    setPos(obsPosX, obsPosY);
    scene->addItem(this);
}
