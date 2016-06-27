#ifndef MENU_H
#define MENU_H
#include <SDL2/SDL.h>
#include "boolEvenement.h"

void MenuGauche(SDL_Renderer* renderer,boolEvenement& boolEvent);
void MenuHaut(SDL_Renderer* renderer,boolEvenement boolEvent);
void AffichageMenu(boolEvenement& boolEvent,SDL_Renderer* displayRenderer);

#endif
