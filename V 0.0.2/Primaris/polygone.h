#include <vector>
#include "coordonnees.h"

class polygone{
private:
int nbCote;

public:
std::vector<coordonnees> vecteur;

polygone(){
vecteur.resize(3);
vecteur.at(0)= coordonnees(10,10);
vecteur.at(1)= coordonnees(20,10);
vecteur.at(2)= coordonnees(10,20);

}
polygone(std::vector<coordonnees> a){
vecteur=a;
setnbCote(a.size());
}

void setnbCote(int i){
nbCote=i;
}

int getNb(){
return nbCote;
}



};
