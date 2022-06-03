#include "Enemy.h"
#include <QRandomGenerator>
#include "Game.h"

extern Game *game;

Enemy::Enemy()
{
    enemyMage = new Mage();
    enemyMage->create(true,2);
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));
    timer -> start(50);
}

void Enemy::move()
{
    int randomNumber = QRandomGenerator::global()->bounded(97,101);
    char randomChar = static_cast<char>(randomNumber);
    if(randomChar == 'b')
        randomChar = 'w';
    else if(randomChar == 'c')
        randomChar = 's';

    enemyMage->move(randomChar);
    if(game->returnPlayer()->returnMage()->posx > enemyMage->posx-30 && game->returnPlayer()->returnMage()->posx < enemyMage->posx+30)
    {
        if(game->returnPlayer()->returnMage()->posy > enemyMage->posy)
        {
            enemyMage->move('s');
        }
        else
        {
            enemyMage->move('w');
        }
        enemyMage->shootMain();
    }
    else if(game->returnPlayer()->returnMage()->posy > enemyMage->posy-30 && game->returnPlayer()->returnMage()->posy < enemyMage->posy+30)
    {
        if(game->returnPlayer()->returnMage()->posx > enemyMage->posx)
        {
            enemyMage->move('d');
        }
        else
        {
            enemyMage->move('a');
        }
        enemyMage->shootMain();
    }
}

