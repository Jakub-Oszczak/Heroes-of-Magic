#ifndef GMAGICBALL_H
#define GMAGICBALL_H
#include "GBullet.h"

class GMagicball: public GBullet
{
public:
    GMagicball();
protected:
    void advance(int step) override;
};

#endif // GMAGICBALL_H
