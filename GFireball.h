#ifndef GFIREBALL_H
#define GFIREBALL_H
#include "GBullet.h"

class GFireball: public GBullet
{
public:
    GFireball();

protected:
    void advance(int step) override;

};

#endif // GFIREBALL_H
