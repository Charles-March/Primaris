#include "coordonnees.h"
#include "polygone.h"
#include <stdio.h>

polygone::polygone()
{
    vecteur.resize(3);
    vecteur.at(0)= coordonnees((double)10+202,(double)10+32);
    vecteur.at(1)= coordonnees((double)20+202,(double)10+32);
    vecteur.at(2)= coordonnees((double)10+202,(double)20+32);
    nbCote=3;
    printf("y0:%d |1:%d |2:%d",vecteur.at(0).getY(),vecteur.at(1).getY(),vecteur.at(2).getY());
}

polygone::polygone(std::vector<coordonnees> a)
{
    vecteur=a;
    nbCote=a.size();
}

void polygone::setnbCote(int i)
{
    nbCote=i;
}

int polygone::getNb()
{
    return nbCote;
}
