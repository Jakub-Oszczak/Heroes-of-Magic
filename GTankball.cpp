#include "GTankball.h"
#include "qgraphicsscene.h"

GTankball::GTankball()
{
    setPixmap(QPixmap(":/img/tankball.png"));
}

void GTankball::advance(int step)
{
    if(bullet->toDelete == true){
        scene()->removeItem(this);
    }
    setPos(bullet->bulletPosX,bullet->bulletPosY);
}
