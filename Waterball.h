#ifndef WATERBALL_H
#define WATERBALL_H
#include"Bullet.h"
#include"Mage.h"

/**
 * \brief Klasa Waterball
 * Logiczna klasa pocisku typu wodnego, która dziedziczy od klasy nadrzędnej Bullet.
 */
class Waterball: public Bullet
{
public:
    /**
     * \brief Konstruktor klasy Waterball
     * Konstruktor ustawia wielkość obrażeń zadawanych przez pocisk.
     */
    Waterball();

private:
    /**
     * \brief Poruszanie pocisku
     * Nadpisanie funkcji wirtualnej odpowiedzialnej za poruszanie pocisku.
     */
    void keepMoving() override;
};


#endif // WATERBALL_H
