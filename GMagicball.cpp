#include "GMagicball.h"
#include "qgraphicsscene.h"

GMagicball::GMagicball()
{
    setPixmap(QPixmap(":/img/magicball.png"));
}

void GMagicball::advance(int step)
{
    if(bullet->toDelete == true){
        scene()->removeItem(this);
    }
    setPos(bullet->bulletPosX,bullet->bulletPosY);
}
