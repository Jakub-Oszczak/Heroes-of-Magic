#include "GFireball.h"
#include "qgraphicsscene.h"

GFireball::GFireball()
{
    setPixmap(QPixmap(":/img/fireball.png"));
}

void GFireball::advance(int step)
{
    if(bullet->toDelete == true){
        scene()->removeItem(this);
    }
    setPos(bullet->bulletPosX,bullet->bulletPosY);
}
