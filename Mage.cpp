#include "Mage.h"
#include "Bullet.h"
#include"GWaterball.h"
#include"GFireball.h"
#include"GMagicball.h"
#include"GTankball.h"
#include"Waterball.h"
#include"Fireball.h"
#include"Magicball.h"
#include"Tankball.h"
#include <QTimer>
#include"GWater.h"
#include"GWall.h"
#include"Enemy.h"
#include"Game.h"

extern Game *game;

Mage::Mage()
{

}

void Mage::create(bool isEnemy, int mageType)
{
    Mage::mageType = mageType;
    Mage::isEnemy = isEnemy;

    switch (mageType)
    {
        case 1:
            health = 1000;
            moveSpeed = 10;
        break;

        case 2:
            health = 200;
            moveSpeed = 4;
        break;
    }
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()), this, SLOT(makeCanShootTrue()));
    timer -> start(2000);
}

void Mage::shoot()
{
    bulletList[shootCount]->bulletPosX = posx;
    bulletList[shootCount]->bulletPosY = posy;
    bulletList[shootCount]->move();
    shootCount++;
}

void Mage::shootMain()
{
    if(canShoot == true){
        if(shootCount < 300){
            if(mageType == 1){
                bulletList[shootCount] = new Waterball();
                gbulletlist[shootCount] = new GWaterball();
                gbulletlist[shootCount]->drawBullet();
                gbulletlist[shootCount]->bullet = bulletList[shootCount];
            }
            else{
                bulletList[shootCount] = new Fireball();
                gbulletlist[shootCount] = new GFireball();
                gbulletlist[shootCount]->drawBullet();
                gbulletlist[shootCount]->bullet = bulletList[shootCount];
            }

            if(isEnemy == true)
                bulletList[shootCount]->isEnemy = true;
            else
                bulletList[shootCount]->isEnemy = false;

            bulletList[shootCount]->defineShotDirection();
            shoot();
            canShoot = false;
        }
    }

}

void Mage::shootHeavy()
{
    if(canShoot == true){
        if(shootCount < 300){
            if(mageType == 1){
                bulletList[shootCount] = new Magicball();
                gbulletlist[shootCount] = new GMagicball();
                gbulletlist[shootCount]->drawBullet();
                gbulletlist[shootCount]->bullet = bulletList[shootCount];
            }
            else{
                bulletList[shootCount] = new Tankball();
                gbulletlist[shootCount] = new GTankball();
                gbulletlist[shootCount]->drawBullet();
                gbulletlist[shootCount]->bullet = bulletList[shootCount];
            }
            bulletList[shootCount]->isEnemy = false;
            bulletList[shootCount]->defineShotDirection();
            shoot();
            canShoot = false;
        }
    }

}

void Mage::move(char direction)
{
    walkingDirection = direction;
    prevPosX = posx;
    prevPosY = posy;

    switch(direction)
    {
        case 'w':
                prevDirection = 'w';
                posy -= moveSpeed;
            break;
        case 'a':

                if(prevFacingDirection == 'd'){
                    flipped = true;
                    prevFacingDirection = 'a';
                }
                prevDirection = 'a';
                posx -= moveSpeed;

            break;
        case 's':

                prevDirection = 's';
                posy += moveSpeed;

            break;
        case 'd':

                if(prevFacingDirection == 'a'){
                    flipped = true;
                    prevFacingDirection = 'd';
                }
                prevDirection = 'd';
                posx += moveSpeed;

            break;
    }

    collision();
}

void Mage::takeDamage(int damage)
{
    health -= damage;
    if(health <=0){
        if(isEnemy == true)
            game->gameOver(1);
        else
            game->gameOver(2);
    }
}

void Mage::collision()
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<15; j++){
            if(posx+50 > game->returnMap()->background[i][j]->obsPosX && posx < game->returnMap()->background[i][j]->obsPosX+50 && posy+60 > game->returnMap()->background[i][j]->obsPosY && posy < game->returnMap()->background[i][j]->obsPosY+50 && game->returnMap()->background[i][j]->collision == true)
            {
                backToPrevPos();
            }
        }
    }
    if((posx < 0) || (posx + 60 > game->returnScene()->width()) || (posy < 0) || (posy + 60 > game->returnScene()->height()))
    {
        backToPrevPos();
    }
}

void Mage::makeCanShootTrue()
{
    canShoot = true;
}

void Mage::backToPrevPos()
{
    posx= prevPosX;
    posy = prevPosY;
}


