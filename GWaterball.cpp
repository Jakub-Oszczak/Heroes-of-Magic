#include "GWaterball.h"
#include "qgraphicsscene.h"

GWaterball::GWaterball()
{
    setPixmap(QPixmap(":/img/waterball.png"));
}

void GWaterball::advance(int step)
{
    if(bullet->toDelete == true){
        scene()->removeItem(this);
    }
    setPos(bullet->bulletPosX,bullet->bulletPosY);
}
