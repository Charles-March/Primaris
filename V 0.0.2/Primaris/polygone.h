#include <vector>
#include "coordonnees.h"

class polygone{
private:
int nbCote;

public:
std::vector<coordonnees> vecteur;


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
