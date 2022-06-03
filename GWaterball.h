#ifndef GWATERBALL_H
#define GWATERBALL_H
#include "GBullet.h"

class GWaterball: public GBullet
{
public:
    GWaterball();    
protected:
    void advance(int step) override;
};

#endif // GWATERBALL_H
