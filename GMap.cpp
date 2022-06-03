#include "GMap.h"

GMap::GMap()
{

}

void GMap::draw(QGraphicsScene *scene)
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<15; j++)
        {
            switch(map->Map[i][j])
            {
            case 0:
                map->background[i][j]->create(scene);
                break;
            case 1:
                map->background[i][j]->create(scene);
                break;
            case 2:
                map->background[i][j]->create(scene);
                break;
             }
         }
    }
}

void GMap::drawGameOver(QGraphicsScene *scene, int option)
{
    if(option == 1)
    {
        setPixmap(QPixmap(":/img/playerwins.jpg"));
        scene->addItem(this);
    }
    else
    {
        setPixmap(QPixmap(":/img/enemywins.jpg"));
        scene->addItem(this);
    }
}

