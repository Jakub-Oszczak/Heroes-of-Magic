#include "Tankball.h"
#include"Game.h"

extern Game *game;

Tankball::Tankball()
{
    dmg = 70;
}

void Tankball::keepMoving()
{
    switch(shotDirection)
    {
        case 'w':
            bulletPosY-=10;
            break;

        case 'a':
            bulletPosX-=10;
            break;

        case 's':
            bulletPosY+=10;
            break;

        case 'd':
            bulletPosX+=10;
            break;
    }

    bool deleted = deleteAtBorder();
    if(deleted != true)
        collision(dmg);
}

