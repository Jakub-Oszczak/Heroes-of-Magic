#ifndef FIREBALL_H
#define FIREBALL_H
#include"Bullet.h"
#include"Mage.h"

/**
 * \brief Klasa Fireball
 * Logiczna klasa pocisku typu ognistego, która dziedziczy od klasy nadrzędnej Bullet.
 */
class Fireball: public Bullet
{
public:
    /**
     * \brief Konstruktor klasy Fireball
     * Konstruktor ustawia wielkość obrażeń zadawanych przez pocisk
     */
    Fireball();

private:
    /**
     * \brief Poruszanie pocisku
     * Nadpisanie funkcji wirtualnej odpowiedzialnej za poruszanie pocisku.
     */
    void keepMoving() override;
};

#endif // FIREBALL_H
