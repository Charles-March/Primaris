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
#include "polygone.h"

SDL_Renderer* displayRenderer;
SDL_Window* displayWindow;
coordonnees finMenu;

#include "objet.h"
#include "coffre.h"
#include "enemi.h"
#include "hero.h"
#include "jeu.h"
#include "FonctionAffichageSDL.h"
#include "menu.h"
#include "MoteurMain.h"
#include "init.h"

int main(int argc,char** argv){
    Init_SDL();
    //Display_Render();
bool continuer=true;


while(continuer){
    //SDL_GL_SwapWindow(displayWindow);
    rectanglePlein(0,0,TAILLEX,TAILLEY,noire,displayRenderer);
    AffichageMenu();
    continuer=Event_Moteur();
    AffichageJeu();


    refresh(displayRenderer);
}

return 0;
}
