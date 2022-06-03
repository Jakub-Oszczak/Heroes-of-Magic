#include "Bullet.h"
#include "Game.h"

extern Game *game;

Bullet::Bullet()
{

}

bool Bullet::deleteAtBorder()
{
    if((bulletPosX < 0) || (bulletPosX > game->returnScene()->width()) || (bulletPosY < 0) || (bulletPosY > game->returnScene()->height())){
        toDelete = true;
        delete this;
        return true;
    }
    return false;
}

void Bullet::collision(int dmg)
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<15; j++){
            if(bulletPosX+40 > game->returnMap()->background[i][j]->obsPosX && bulletPosX < game->returnMap()->background[i][j]->obsPosX+40 && bulletPosY+40 > game->returnMap()->background[i][j]->obsPosY && bulletPosY < game->returnMap()->background[i][j]->obsPosY+40 && game->returnMap()->background[i][j]->collision == true)
            {
                toDelete = true;
                delete this;
                break;
            }
        }
    }

    if(isEnemy != true){
        if(game->returnEnemy()->returnEnemyMage()->posx+40 > bulletPosX && game->returnEnemy()->returnEnemyMage()->posx < bulletPosX+40 && game->returnEnemy()->returnEnemyMage()->posy+40 > bulletPosY && game->returnEnemy()->returnEnemyMage()->posy < bulletPosY+40){
            game->returnEnemy()->returnEnemyMage()->takeDamage(dmg);
            game->enemyhealth->display(1, game->enemy->returnEnemyMage()->returnHealth());
            toDelete = true;
            delete this;
        }
    }
    else{
        if(game->returnPlayer()->returnMage()->posx+40 > bulletPosX && game->returnPlayer()->returnMage()->posx < bulletPosX+40 && game->returnPlayer()->returnMage()->posy+40 > bulletPosY && game->returnPlayer()->returnMage()->posy < bulletPosY+40){
            game->returnPlayer()->returnMage()->takeDamage(dmg);
            game->playerhealth->display(0, game->player->returnMage()->returnHealth());
            toDelete = true;
            delete this;
        }
    }

}


void Bullet::defineShotDirection()
{
    if(isEnemy == false)
        shotDirection = game->returnPlayer()->returnMage()->returnDirection();
    else
        shotDirection = game->returnEnemy()->returnEnemyMage()->returnDirection();
}



void Bullet::move()
{
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()), this, SLOT(keepMoving()));
    timer -> start(30);
}
