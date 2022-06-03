#ifndef PLAYER_H
#define PLAYER_H
#include"Mage.h"

/**
 * \brief Klasa Player
 * Logiczna klasa gracza
 */
class Player: public QObject
{
    Q_OBJECT
public:
    /**
     * \brief Konstruktor klasy Player
     * Konstruktor tworzy nowego maga dla gracza.
     */
    Player();

    /**
     * \brief Poruszanie gracza
     * Funkcja ta porusza graczem i wywołuje akcje strzelania oraz umiejętności specjalnych.
     * \param i numer akcji do wykonania
     */
    void move(int i);
    /**
     * \brief Zwracanie maga gracza
     * Funkcja ta zwraca wskaźnik na maga gracza.
     */
    Mage *returnMage(){return myMage;}

private:
    Mage *myMage;

public slots:
    /**
     * \brief Resetowanie prędkości gracza
     */
    void resetSpeed();
};

#endif // PLAYER_H
