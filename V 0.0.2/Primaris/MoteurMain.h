bool Event_Moteur(){
SDL_Event event;
SDL_WaitEvent(&event);
int Mx,My;

switch(event.type){

    case SDL_MOUSEBUTTONDOWN:
        SDL_GetMouseState(&Mx,&My);

        switch(event.button.button){
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

void AffichageJeu(){

}
