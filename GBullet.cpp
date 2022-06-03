#include "GBullet.h"
#include "Game.h"

extern Game *game;

GBullet::GBullet()
{

}

void GBullet::drawBullet()
{
    game->scene->addItem(this);
}

void GBullet::deleteBullet()
{
    game->scene->removeItem(this);
}

