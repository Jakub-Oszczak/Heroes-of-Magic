#ifndef MAGE_H
#define MAGE_H
#include "Bullet.h"
#include "GBullet.h"

/**
 * \brief Klasa Mage
 * Logiczna klasa maga, która zarządza wszystkimi akcjami maga gracza i maga przeciwnika
 */
class Mage:public QObject
{
    Q_OBJECT
public:
    /**
     * \brief Konstruktor klasy Mage
     */
    Mage();

    /**
     * \brief Ustawianie parametrów maga
     * Funkcja ta ustawia parametry maga w zależności od jego rodzaju i tworzy timer odpowiedzialny za "cooldown" strzelania pociskami.
     * \param isEnemy określenie czy jest to mag wroga
     * \param mageType rodzaj maga
     */
    void create(bool isEnemy, int mageType);
    /**
     * \brief Strzał głównym czarem(pociskiem)
     * Funkcja ta w zależności od typu maga tworzy odpowiedni typ pocisku i wywołuje funkcję shoot().
     */
    void shootMain();
    /**
     * \brief Strzał mocnym czarem(pociskiem)
     * Funkcja ta w zależności od typu maga tworzy odpowiedni typ pocisku i wywołuje funkcję shoot().
     */
    void shootHeavy();
    /**
     * \brief Pozycja pocisku
     * Funkcja ta ustawia pozycję pocisku i wywołuje funkcję poruszającą go (move()).
     */
    void shoot();
    /**
     * \brief Poruszanie się pocisku
     * Funkcja ta porusza pociskiem i wywołuje sprawdzanie kolizji
     * \param direction kierunek strzału
     */
    void move(char direction);
    /**
     * \brief Zadawanie obrażeń
     * Funkcja ta odejmuje odpowiednią ilość zdrowia maga
     * \param damage zadawane obrażenia
     */
    void takeDamage(int damage);
    /**
     * \brief Zwracanie orientacji maga
     * Funkcja ta zwraca kierunek, w którym patrzy mag
     */
    char returnDirection(){return walkingDirection;}
    /**
     * \brief Zwracanie zdrowia
     * Funkcja ta zwraca aktualny stan życia maga
     */
    int returnHealth(){return health;}
    /**
     * \brief Zwracanie wskaźnika na listę pocisków
     */
    Bullet *returnBullet(){return bulletList[300];}
    /**
     * \brief Sprawdzanie kolizji
     * Funkcja ta sprawdza kolizje maga z granicami mapy i przeszkodami.
     */
    void collision();
    int posx,posy;
    int prevPosX, prevPosY;
    int mageType;
    int moveSpeed;
    bool flipped;
    char walkingDirection;

private:
    char prevDirection='d';
    char prevFacingDirection='d';
    int health;
    Bullet *bulletList[300];
    GBullet *gbulletlist[300];
    int shootCount=0;
    bool isEnemy;
    bool canShoot = true;

    /**
     * \brief Powrót do poprzedniej pozycji
     * Funkcja ta ustawia koordynaty maga na te z poprzedniej pozycji.
     */
    void backToPrevPos();

public slots:
    /**
     * \brief Pozwolenie na strzał
     * Funkcja ta ustawia bool'owski parametr, który pozwala strzelać na "true".
     */
    void makeCanShootTrue();

};

#endif // MAGE_H
