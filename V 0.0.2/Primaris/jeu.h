#ifndef JEU_H
#define JEU_H

#include <list>
#include <gl/glu.h>
#include "polygone.h"
#include "coordonnees.h"
#include "heros.h"
#include "objet.h"
#include "coffre.h"
#include "ennemi.h"

class jeu
{
public:
    std::list<polygone*> lp;
    std::list<ennemi*> le;
    std::list<objet*> lo;
    std::list<coffre*> lc;
    heros player;

    jeu(char* PathFile);
    void addp(polygone* p);
    jeu();
    void affiche(GLuint text,coordonnees c);
};

#endif
