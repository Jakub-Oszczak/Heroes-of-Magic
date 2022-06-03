#ifndef HEALTH_H
#define HEALTH_H
#include <QGraphicsTextItem>

/**
 * \brief Klasa Health
 * Graficzno tekstowa klasa wyświetlania zdrowia
 */
class Health: public QGraphicsTextItem
{
public:
    Health(QGraphicsItem * parent=NULL);
    void display(int id, int health);
};

#endif // HEALTH_H
