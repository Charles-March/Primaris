#ifndef POLYGONE_H
#define POLYGONE_H

#include <vector>
#include "coordonnees.h"

class polygone
{
private:
    int nbCote;

public:
    std::vector<coordonnees> vecteur;

    polygone();
    polygone(std::vector<coordonnees> a);
    void setnbCote(int i);
    int getNb();
};

#endif
