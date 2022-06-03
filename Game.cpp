#include <QTimer>
#include <QObject>
#include<QFont>
#include <QLabel>
#include<QGraphicsTextItem>
#include "Player.h"
#include "Game.h"


Game::Game(QWidget *parent){

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,900,900);

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900,900);
    map = new Map();
    map->createMap();
    gmap = new GMap();
    gmap->map = map;
    gmap->draw(scene);

    player = new Player();
    player->returnMage()->posx = 800;
    player->returnMage()->posy = 800;

    gplayer = new GPlayer();
    gplayer->player = player;
    scene->addItem(gplayer);

    gplayer->setFlag(QGraphicsItem::ItemIsFocusable);
    gplayer->setFocus();

    gmagePlayer = new GMage(player->returnMage());
    scene->addItem(gmagePlayer);

    playerhealth = new Health();
    playerhealth->display(0, player->returnMage()->returnHealth());
    playerhealth->setPos(10,10);
    scene->addItem(playerhealth);

    enemy = new Enemy;
    enemy->returnEnemyMage()->posx = 600;
    enemy->returnEnemyMage()->posy = 300;

    gmageEnemy = new GMage(enemy->returnEnemyMage());
    scene->addItem(gmageEnemy);

    enemyhealth = new Health();
    enemyhealth->display(1, enemy->returnEnemyMage()->returnHealth());
    enemyhealth->setPos(10,50);
    scene->addItem(enemyhealth);

    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()), scene, SLOT(advance()));
    timer -> start(30);

    show();
}

void Game::gameOver(int option)
{
    gmap->drawGameOver(scene, option);
}






