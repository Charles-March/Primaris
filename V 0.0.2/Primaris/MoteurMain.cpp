#include "MoteurMain.h"
#include <SDL2/SDL.h>

void DeplacementSouris(int Mx, int My, boolEvenement& boolEvent)
{
    if(Mx>=0 && Mx<=99 && My>=0 && My<=30)
    {
        boolEvent.SourisSurNouveau = true;
        boolEvent.SourisSurOuvrir = false;
        boolEvent.SourisSurEnregistrer = false;
        boolEvent.SourisSurEnregistrerSous = false;
    }
    else if(Mx>=100 && Mx<=198 && My>=0 && My<=30)
    {
        boolEvent.SourisSurNouveau = false;
        boolEvent.SourisSurOuvrir = true;
        boolEvent.SourisSurEnregistrer = false;
        boolEvent.SourisSurEnregistrerSous = false;
    }
    else if(Mx>=199 && Mx<=347 && My>=0 && My<=30)
    {
        boolEvent.SourisSurNouveau = false;
        boolEvent.SourisSurOuvrir = false;
        boolEvent.SourisSurEnregistrer = true;
        boolEvent.SourisSurEnregistrerSous = false;
    }
    else if(Mx>=348 && Mx<=552 && My>=0 && My<=30)
    {
        boolEvent.SourisSurNouveau = false;
        boolEvent.SourisSurOuvrir = false;
        boolEvent.SourisSurEnregistrer = false;
        boolEvent.SourisSurEnregistrerSous = true;
    }
    else
    {
        boolEvent.SourisSurNouveau = false;
        boolEvent.SourisSurOuvrir = false;
        boolEvent.SourisSurEnregistrer = false;
        boolEvent.SourisSurEnregistrerSous = false;
    }
}

bool Event_Moteur(boolEvenement& boolEvent)
{
    SDL_Event event;
    SDL_PollEvent(&event);
    int Mx,My;

    switch(event.type)
    {

    case SDL_MOUSEBUTTONDOWN:
        SDL_GetMouseState(&Mx,&My);

        switch(event.button.button)
        {
            /*
            Coordonnees de la souris au moment du click => Mx,My
            */

        //Click droit
        case SDL_BUTTON_RIGHT:

            break;


        //Click gauche
        case SDL_BUTTON_LEFT:

            break;

        default:
            break;

        }
        break;

    case SDL_MOUSEMOTION:
        SDL_GetMouseState(&Mx,&My);
        DeplacementSouris(Mx,My,boolEvent);
        break;

    case SDL_KEYDOWN:
        switch(event.key.keysym.sym)
        {
        //Espace
        case SDLK_SPACE:
            break;

        //Echap
        case SDLK_ESCAPE:
            break;


        //a
        case SDLK_a:
            break;
            //.
            //.
            //.

        }
        break;

    case SDL_QUIT:
        return false;
        break;

    }

    return true;
}

void AffichageJeu(map m,coordonnees finMenu)
{
m.affiche(finMenu);
}
