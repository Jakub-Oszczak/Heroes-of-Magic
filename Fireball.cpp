#include "Fireball.h"
#include"Game.h"

extern Game *game;

Fireball::Fireball()
{
    dmg = 20;
}


void Fireball::keepMoving()
{
    switch(shotDirection)
    {
        case 'w':
            bulletPosY -= 25;
            break;

        case 'a':
            bulletPosX -= 25;
            break;

        case 's':
            bulletPosY += 25;
            break;

        case 'd':
            bulletPosX += 25;
            break;
    }

    bool deleted = deleteAtBorder();
    if(deleted != true)
        collision(dmg);
}
