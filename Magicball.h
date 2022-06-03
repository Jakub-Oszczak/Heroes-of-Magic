#ifndef MAGICBALL_H
#define MAGICBALL_H
#include"Bullet.h"
#include"Mage.h"

/**
 * \brief Klasa Magicball
 * Logiczna klasa pocisku typu magicznego, która dziedziczy od klasy nadrzędnej Bullet.
 */
class Magicball: public Bullet
{
public:
    /**
     * \brief Konstruktor klasy Magicball
     * Konstruktor ustawia wielkość obrażeń zadawanych przez pocisk.
     */
    Magicball();

private:

    /**
     * \brief Poruszanie pocisku
     * Nadpisanie funkcji wirtualnej odpowiedzialnej za poruszanie pocisku.
     */
    void keepMoving() override;
};


#endif // MAGICBALL_H


