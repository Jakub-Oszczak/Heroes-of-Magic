#ifndef BULLET_H
#define BULLET_H
#include<QTimer>

/**
 * \brief Klasa Bullet
 * klasa logiczna pocisków, zarządza kolizjami i pozycją pocisków.
 */
class Bullet:public QObject
{
    Q_OBJECT
public:
    /**
     * \brief Konstruktor klasy Bullet
     */
    Bullet();
    /**
     * \brief Usuń pocisk poza mapą
     * Funkcja, która usuwa pocisk ze sceny i zwalnia miejsce pamięci, po tym jak pocisk wyleci poza scenę gry.
     */
    bool deleteAtBorder();
    /**
     * \brief Kolizja pocisku
     * Funkcja ta usuwa pocisk, gdy ten uderzy w przeszkodę lub usuwa pocisk i zadaje obrażenia graczowi/przeciwnikowi jeśli pocisk trafił w postać.
     * \param dmg Obrażenia zadane przez pocisk
     */
    void collision(int dmg);
    /**
     * \brief Wywołanie funkcji wirtualnej
     * Funkcja ta tworzy timer, który cyklicznie wywołuje wirtualną funkcję keepMoving().
     */
    void move();
    /**
     * \brief Definiowanie kierunku strzału
     * Funkcja ta pobiera orientację gracza/przeciwnika podczas wystrzelenia pocisku.
     */
    void defineShotDirection();
    int bulletPosX, bulletPosY;
    int dmg;
    bool isEnemy;
    bool toDelete = false;

protected:
    char shotDirection;

public slots:
    /**
     * \brief Poruszanie się pocisku
     * Wirtualna funkcja aktualizująca pozycję pocisku.
     */
    virtual void keepMoving()=0;
};

#endif // BULLET_H
