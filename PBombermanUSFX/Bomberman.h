#pragma once
#include <iostream>
#include "GamePawn.h"

using namespace std;

class Bomberman : public GamePawn
{
private:

	int nr = 0;

public:
	//Constructor
	Bomberman(Texture* _textura, Tile* _tileActual);
	void setTileActual(Tile* _tileNuevo) override;
	map<int, array<int, 2>> movimientoBomberman;

	void update();
	void render();

};

