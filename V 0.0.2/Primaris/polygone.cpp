#include "coordonnees.h"
#include "polygone.h"

polygone::polygone()
{
    vecteur.resize(3);
    vecteur.at(0)= coordonnees(10,10);
    vecteur.at(1)= coordonnees(20,10);
    vecteur.at(2)= coordonnees(10,20);
    nbCote=3;
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
