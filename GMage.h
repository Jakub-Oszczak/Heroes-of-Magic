#ifndef GMAGE_H
#define GMAGE_H
#include "Mage.h"
#include <QGraphicsPixmapItem>

class GMage: public QGraphicsPixmapItem
{
public:
    GMage(Mage* _m);
    Mage *mage;

protected:
    void advance(int step) override;
};

#endif // GMAGE_H
