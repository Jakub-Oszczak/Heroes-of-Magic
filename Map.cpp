#include "Map.h"
#include "Game.h"

void Map::createMap()
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<15; j++)
        {
            switch(Map[i][j])
            {
            case 0:
                background[i][j] = new GGrass();
                background[i][j]->obsPosX = j*60;
                background[i][j]->obsPosY = i*60;
                break;
            case 1:
                background[i][j] = new GWater();
                background[i][j]->obsPosX = j*60;
                background[i][j]->obsPosY = i*60;
                break;
            case 2:
                background[i][j] = new GWall();
                background[i][j]->obsPosX = j*60;
                background[i][j]->obsPosY = i*60;
                break;
             }
         }
    }

}

