void MenuGauche(SDL_Renderer* renderer){
    rectanglePlein(1, 32, 200, 500, blanc, renderer);
}

void MenuHaut(SDL_Renderer* renderer){
    rectanglePlein(0, 1, 1366, 30, blanc, renderer);
    //affichetexte("Fichier", 20, 5, 30, "Arial.ttf", rouge, renderer);
}

void AffichageMenu(){
    MenuGauche(displayRenderer);
    MenuHaut(displayRenderer);
}
