#include "jeu.h"
#include "FonctionAffichageGL.h"
#include <stdio.h>
jeu::jeu(char* PathFile)
{

}

void jeu::addp(polygone* p)
{
    lp.push_back(p);
    printf("est ce que ça marche ça ?\n");
}

jeu::jeu()
{
   // lp = new std::list<polygone>;
}

void jeu::affiche(GLuint text,coordonnees c)
{

    unsigned int i;
    for(i=0; i<lp.size(); i++)
    {
        printf("coucou");
        AffichePolynome(lp.front(),c,text);
        lp.push_back((polygone*)lp.front());
        lp.pop_front();
        printf("coucou");
    }
}
