#include "FonctionAffichageGL.h"
#include <stdio.h>
std::vector<coordonnees> transformeP(polygone* p,coordonnees c)
{
    std::vector<coordonnees> l(p->getNb());
    int i;
    for(i=0; i<p->getNb(); i++)
    {
        l.at(i).setX(p->vecteur.at(i).getX()-c.getX());
        l.at(i).setY(p->vecteur.at(i).getY()-c.getY());
    }
    return l;
}

void AffichePolynome(polygone* p,coordonnees c,GLuint text)
{
    printf("debut coucou ?\n");
    int i;
    std::vector<coordonnees> l(p->getNb());
    printf("coucou0");
    l = transformeP(p,c);
    printf("coucou1");
    glBindTexture(GL_TEXTURE_2D, text);
    glBegin(GL_POLYGON);
    printf("coucou2");
    for(i=0; i<p->getNb(); i++)
    {
        glVertex2f(l.at(i).getX(),  l.at(i).getY());
    }
    printf("coucou3");
    glEnd();
    printf("j'affiche un polynome\n");
    delete(&l);
}
