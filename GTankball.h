#ifndef GTANKBALL_H
#define GTANKBALL_H
#include "GBullet.h"

class GTankball: public GBullet
{
public:
    GTankball();
protected:
    void advance(int step) override;
};

#endif // GTANKBALL_H
