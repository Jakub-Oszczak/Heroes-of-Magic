#include "Waterball.h"
#include"Game.h"

extern Game *game;

Waterball::Waterball()
{
    dmg = 10;
}


void Waterball::keepMoving()
{
    switch(shotDirection)
    {
        case 'w':
            bulletPosY-=30;
            break;

        case 'a':
            bulletPosX-=30;
            break;

        case 's':
            bulletPosY+=30;
            break;

        case 'd':
            bulletPosX+=30;
            break;
    }

    bool deleted = deleteAtBorder();
    if(deleted != true)
        collision(dmg);

}

