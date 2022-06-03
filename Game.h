#ifndef GAME_H
#define GAME_H

#include<QGraphicsScene>
#include<QGraphicsView>
#include "Player.h"
#include "GPlayer.h"
#include "Enemy.h"
#include "Map.h"
#include "GMap.h"
#include "qlabel.h"
#include "GMage.h"
#include "Health.h"

/**
*\mainpage
*\HEROES OF MAGIC
*\author Jakub Oszczak
*\date 2022.06.01
*/

/**
 * \brief Klasa Game
 * Główna klasa gry, tu jest tworzony gracz, przeciwnik oraz mapa i elementy te
 * dodawane są do sceny oraz aktualizowana jest pozycja obiektów ruchomych.
 */
class Game: public QGraphicsView
{
public:
    /**
     * \brief Konstruktor klasy Game
     * Konstruktor wykonuje główny kod gry.
     * \param Parametr typu QWidget czyli głównej klasy obsługującej obiekty interface'u
     */
    Game(QWidget *parent=nullptr);

    QGraphicsScene *scene;
    Map *map;
    GMap *gmap;
    Player *player;
    GPlayer *gplayer;
    Enemy *enemy;
    GMage *gmagePlayer;
    GMage *gmageEnemy;
    Health *playerhealth;
    Health *enemyhealth;

    /**
     * \brief Funkcja zwracająca wskaźnik na scenę
     * \return wskaźnik na scenę
     */
    QGraphicsScene *returnScene(){return scene;}
    /**
     * \brief Funkcja zwracająca wskaźnik na playera (gracza)
     * \return wskaźnik na playera
     */
    Player *returnPlayer(){return player;}
    /**
     * \brief Funkcja zwracająca wskaźnik na mapę
     * \return wskaźnik na mapę
     */
    Map *returnMap(){return map;}
    /**
     * \brief Funkcja zwracająca wskaźnik na enemy (wroga)
     * \return wskaźnik na enemy
     */
    Enemy *returnEnemy(){return enemy;}
    /**
     * \brief Funkcja pokazująca ekran końcowy
     * Funkcja wywołująca funkcję klasy Map, wyświetlającą ekran końcowy
     * \param option Opcja wskazująca na to czy wygrał gracz czy wróg
     */
    void gameOver(int option);

   };

#endif // GAME_H
