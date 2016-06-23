void MenuGauche(SDL_Renderer* renderer){

}

void MenuHaut(SDL_Renderer* renderer){
    rectanglePlein(150, 50, 200, 200, blanc, renderer);
}

void AffichageMenu(){
    MenuGauche(displayRenderer);
    MenuHaut(displayRenderer);
}
