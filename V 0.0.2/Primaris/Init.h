#ifndef INIT_H
#define INIT_H
#define TAILLEX 1366
#define TAILLEY 768
#include <SDL2/SDL.h>
#include "coordonnees.h"

void Display_InitGL();
int Display_SetViewport( int width, int height,coordonnees* finMenu);
void Init_SDL(SDL_Renderer** displayRenderer,SDL_Window** displayWindow,coordonnees* finMenu);

#endif
