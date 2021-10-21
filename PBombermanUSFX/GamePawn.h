#pragma once
#include "GameActor.h"
#include "./system/KeyboardInput.h"

class GamePawn :
    public GameActor
{
protected:
    KeyboardInput* keyboardInput;
    SDL_Keycode botonBomba = SDLK_b;
    SDL_Keycode botonArriba = SDLK_UP;
    SDL_Keycode botonAbajo = SDLK_DOWN;
    SDL_Keycode botonIzquierda = SDLK_LEFT;
    SDL_Keycode botonDerecha = SDLK_RIGHT;
    
public:
    // Constructores destructor
    GamePawn();
    GamePawn(Texture* _textura, Tile* _tileActual);
    ~GamePawn();
    // Metodos accesores

    void setBotonBomba(SDL_KeyCode _botonBomba) { botonBomba = _botonBomba; }
    void setBotonArriba(SDL_KeyCode _botonArriba) { botonArriba = _botonArriba; }
    void setBotonAbajo(SDL_KeyCode _botonAbajo) { botonAbajo = _botonAbajo; }
    void setBotonDerecha(SDL_KeyCode _botonDerecha) { botonDerecha = _botonDerecha; }
    void setBotonIzquierda(SDL_KeyCode _botonIzquierda) { botonIzquierda = _botonIzquierda; }



    // Metodos heredados
    virtual void render();
    virtual void update();
    virtual void handleEvent(SDL_Event* _event){};
    virtual void deleteGameObjet();

    // Metodos especificos
    virtual void setTileActual(Tile* _tileNuevo) {};

};

