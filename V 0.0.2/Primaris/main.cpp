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
#include "sdlglutils.h"
#include "polygone.h"

SDL_Renderer* displayRenderer;
SDL_Window* displayWindow;
coordonnees finMenu;

struct boolEvenement {
    bool SourisSurNouveau;
    bool SourisSurOuvrir;
    bool SourisSurEnregistrer;
    bool SourisSurEnregistrerSous;
};

#include "objet.h"
#include "coffre.h"
#include "enemi.h"
#include "hero.h"
#include "jeu.h"
#include "FonctionAffichageSDL.h"
#include "FonctionAffichageGL.h"
#include "menu.h"
#include "MoteurMain.h"
#include "init.h"
#include "map.h"
int main(int argc,char** argv){
    Init_SDL();
    //Display_Render();
    bool continuer=true;
    struct boolEvenement boolEvent = {false};

map map01("textureTest.jpg");

while(continuer){

    rectanglePlein(0,0,TAILLEX,TAILLEY,noir,displayRenderer);

    AffichageMenu(boolEvent);
    continuer=Event_Moteur(boolEvent);
    AffichageJeu();


   // SDL_GL_SwapWindow(displayWindow);
    SDL_GL_GetSwapInterval();
    refresh(displayRenderer);

    SDL_Delay(10);
}
return 0;
}
