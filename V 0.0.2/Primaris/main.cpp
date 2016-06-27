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
#include "boolEvenement.h"

//extern SDL_Renderer* displayRenderer;
extern SDL_Window* displayWindow;
extern coordonnees finMenu;


#include "FonctionAffichageSDL.h"
#include "FonctionAffichageGL.h"

#include "objet.h"
#include "coffre.h"
#include "ennemi.h"
#include "heros.h"
#include "jeu.h"

#include "menu.h"
#include "MoteurMain.h"
#include "init.h"
#include "map.h"

int main(int argc,char** argv)
{
coordonnees finMenu;
SDL_Window* displayWindow=NULL;
SDL_Renderer* displayRenderer=NULL;
Init_SDL(&displayRenderer,&displayWindow,&finMenu);
//Display_Render();
bool continuer=true;
struct boolEvenement boolEvent;


map map01("textureTest.jpg");

while(continuer)
{

    rectanglePlein(0,0,TAILLEX,TAILLEY,noir,displayRenderer);

    AffichageMenu(boolEvent,displayRenderer);
    continuer=Event_Moteur(boolEvent);
    AffichageJeu(map01,finMenu);


    // SDL_GL_SwapWindow(displayWindow);
    //SDL_GL_GetSwapInterval();
    refresh(displayRenderer);

    SDL_Delay(10);
}
return 0;
}
