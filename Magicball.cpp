#include "Magicball.h"
#include"Game.h"

extern Game *game;

Magicball::Magicball()
{
    dmg = 40;
}

void Magicball::keepMoving()
{
    switch(shotDirection)
    {
        case 'w':
            bulletPosY-=15;
            break;

        case 'a':
            bulletPosX-=15;
            break;

        case 's':
            bulletPosY+=15;
            break;

        case 'd':
            bulletPosX+=15;
            break;
    }

    bool deleted = deleteAtBorder();
    if(deleted != true)
        collision(dmg);
}

