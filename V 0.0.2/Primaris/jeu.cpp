#include "jeu.h"
#include "FonctionAffichageGL.h"

jeu::jeu(char* PathFile)
{

}

void jeu::addp(polygone* p)
{
    lp.push_back(p);
}

jeu::jeu()
{

}

void jeu::affiche(GLuint text,coordonnees c)
{
    int i;
    for(i=0; i<lp.size(); i++)
    {
        AffichePolynome(lp.front(),c,text);
        lp.push_back((polygone*)lp.front());
        lp.pop_front();
    }
}
