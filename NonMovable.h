#ifndef NONMOVABLE_H
#define NONMOVABLE_H
#include<QGraphicsScene>

/**
 * \brief Klasa NonMovable
 * Graficzna klasa nadrzędna dla obiektów nieruchomych
 */
class NonMovable
{
public:
    NonMovable();

    virtual void create(QGraphicsScene *scene) = 0;
    int obsPosX, obsPosY;
    bool collision;


};

#endif // NONMOVABLE_H
