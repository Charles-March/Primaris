#include <list>
#include "coordonnees.h"

class polygone{
std::list<coordonnees> vecteur;
int nbCote;

polygone(std::list<coordonnees> a){
vecteur=a;
nbCote=a.size();
}



};
