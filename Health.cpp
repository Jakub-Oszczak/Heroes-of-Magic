#include "Health.h"
#include <QFont>
#include <QFontMetrics>

Health::Health(QGraphicsItem * parent): QGraphicsTextItem(parent)
{
    setDefaultTextColor(Qt::green);
    setFont(QFont("Times",20));
}

void Health::display(int id, int health)
{
    if(id == 0)
        setPlainText(QString("Health (player): ") + QString::number(health));
    else
        setPlainText(QString("Health (enemy): ") + QString::number(health));
}
