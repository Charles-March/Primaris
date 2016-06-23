#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif
#include <windows.h>
#include <string>
#include <time.h>
#include <stdio.h>
#include <dirent.h>
#include <gl/glu.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>
#include <SDL2/SDL_ttf.h>

SDL_Renderer* displayRenderer;
SDL_Window* displayWindow;

#include "polygone.h"
#include "FonctionAffichageSDL.h"
#include "menu.h"
#include "MoteurMain.h"
#include "init.h"

int main(int argc,char** argv){
    Init_SDL();
    //Display_Render();
bool continuer=true;
SDL_GL_SwapWindow(displayWindow);

while(continuer){
    AffichageMenu();
    continuer=Event_Moteur();
    AffichageJeu();
}

return 0;
}
