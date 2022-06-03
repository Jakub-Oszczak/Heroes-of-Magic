#include "GMage.h"
#include "qgraphicsscene.h"

GMage::GMage(Mage* _m)
{
    mage = _m;
    switch (mage->mageType)
    {
        case 1:
            setPixmap(QPixmap(":/img/mage1.png"));
        break;

        case 2:
            setPixmap(QPixmap(":/img/mage2.png"));
        break;
    }
}

void GMage::advance(int step)
{
    if(mage->flipped == true){
        this->setPixmap(this->pixmap().transformed(QTransform().scale(-1, 1)));
        mage->flipped = false;
    }
    setPos(mage->posx, mage->posy);
}
