#include "coordonnees.h"
#include "polygone.h"

polygone::polygone()
{
    vecteur.resize(3);
    vecteur.at(0)= coordonnees(10+202,10+32);
    vecteur.at(1)= coordonnees(20+202,10+32);
    vecteur.at(2)= coordonnees(10+202,20+32);
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
