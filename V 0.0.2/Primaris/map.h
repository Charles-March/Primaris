#ifndef MAP_H
#define MAP_H

#include "jeu.h"

class map
{
public:
    jeu univers;
    GLuint texture_poly;

    map(const char* text);
    void remplir_univers();
    void affiche();
};

#endif
