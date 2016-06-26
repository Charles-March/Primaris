#ifndef INIT_H
#define INIT_H
#define TAILLEX 1366
#define TAILLEY 768
#include <SDL2/SDL.h>

void Display_InitGL();
int Display_SetViewport( int width, int height);
void Init_SDL(SDL_Renderer* displayRenderer);

#endif
