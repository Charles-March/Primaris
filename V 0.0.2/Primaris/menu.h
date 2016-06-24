void MenuGauche(SDL_Renderer* renderer,boolEvenement& boolEvent){
    rectanglePlein(1, 32, 200, 500, blanc, renderer);
}

void MenuHaut(SDL_Renderer* renderer,boolEvenement boolEvent){
    rectanglePlein(0, 1, 1366, 30, blanc, renderer);

    rectangleVide(0, 0, 100, 32, noir, renderer);
    affichetexte("Nouveau", 11, 6, 20, "JackI.TTF", noir, renderer);

    rectangleVide(99, 0, 100, 32, noir, renderer);
    affichetexte("Ouvrir", 116, 6, 20, "JackI.TTF", noir, renderer);

    rectangleVide(198, 0, 150, 32, noir, renderer);
    affichetexte("Enregistrer", 214, 6, 20, "JackI.TTF", noir, renderer);

    rectangleVide(347, 0, 205, 32, noir, renderer);
    affichetexte("Enregistrer sous", 364, 6, 20, "JackI.TTF", noir, renderer);

    if(boolEvent.SourisSurNouveau==true)
        rectangleVide(1, 1, 98, 30, noir, renderer);
    else if (boolEvent.SourisSurOuvrir==true)
        rectangleVide(100, 1, 98, 30, noir, renderer);
}

void AffichageMenu(boolEvenement& boolEvent){
    MenuGauche(displayRenderer,boolEvent);
    MenuHaut(displayRenderer,boolEvent);
}
