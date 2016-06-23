void MenuGauche(SDL_Renderer* renderer){

}

void MenuHaut(SDL_Renderer* renderer){
    rectanglePlein(1, 1, 100, 50, blanc, renderer);
    affichetexte("Fichier",20, 5, 14, "Arial.ttf", noir, renderer);
}

void AffichageMenu(){
    MenuGauche(displayRenderer);
    MenuHaut(displayRenderer);
}
