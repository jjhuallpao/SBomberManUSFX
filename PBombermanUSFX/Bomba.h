#pragma once
#include <iostream>
#include "GameActor.h"
#include "GamePawn.h"

using namespace std;

class Bomba :
    public GameActor
{
public:
    Bomba(Texture* _textura, Tile* _tileActual);
    void setTileActual(Tile* _tileNuevo);

};


