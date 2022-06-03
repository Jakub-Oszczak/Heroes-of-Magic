#include<QGraphicsScene>
#include "Player.h"
#include "qevent.h"


Player::Player(){
    myMage = new Mage();
    myMage->create(false, 1);
}

void Player::move(int i)
{
    if (i == 1)
        myMage->move('w');
    else if (i == 2)
        myMage->move('a');
    else if (i == 3)
        myMage->move('s');
    else if (i == 4)
        myMage->move('d');
    else if (i == 5){
        myMage->shootHeavy();
    }
    else if (i == 6){
        myMage->shootMain();
    }
    else if (i == 7){
        myMage->posy += 100;
    }
    else if (i == 8){
        myMage->moveSpeed += 10;
        QTimer::singleShot(10000, this, SLOT(resetSpeed()));
    }
}


void Player::resetSpeed()
{
    myMage->moveSpeed -= 10;
}



