#ifndef TANKBALL_H
#define TANKBALL_H
#include"Bullet.h"
#include"Mage.h"

/**
 * \brief Klasa Tankball
 * Logiczna klasa pocisku typu czołgowego, która dziedziczy od klasy nadrzędnej Bullet.
 */
class Tankball: public Bullet
{
public:
    /**
     * \brief Konstruktor klasy Tankball
     * Konstruktor ustawia wielkość obrażeń zadawanych przez pocisk.
     */
    Tankball();

private:
    /**
     * \brief Poruszanie pocisku
     * Nadpisanie funkcji wirtualnej odpowiedzialnej za poruszanie pocisku.
     */
    void keepMoving() override;
};


#endif // TANKBALL_H
