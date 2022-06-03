#ifndef ENEMY_H
#define ENEMY_H
#include "Mage.h"

/**
 * \brief Klasa Enemy
 * Logiczna klasa wroga
 */
class Enemy: public QObject
{
Q_OBJECT

public:
    /**
     * \brief Konstruktor klasy Enemy
     * Konstruktor tworzy obiekt typu Mage oraz tworzy timer, który cyklicznie aktualizuje pozcyję przeciwnika (enemy).
     */
    Enemy();

private:
    Mage *enemyMage;

public:
    /**
     * \brief Zwracanie wskaźnika na maga przeciwnika
     * \return Wskaźnik na maga przeciwnika (obiekt typu Mage)
     */
    Mage *returnEnemyMage(){return enemyMage;}

public slots:
    /**
     * \brief Poruszanie się przeciwnika
     * Funkcja ta losowo porusza przeciwnikiem, a gdy gracz wejdzie w pole widzenia przeciwnika to ten porusza się w jego kierunku i strzela.
     */
    void move();
};

#endif // ENEMY_H

