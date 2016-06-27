#ifndef MOTEURMAIN_H
#define MOTEURMAIN_H
#include "boolEvenement.h"
#include "map.h"
void DeplacementSouris(int Mx, int My, boolEvenement& boolEvent);
bool Event_Moteur(boolEvenement& boolEvent);
void AffichageJeu(map m,coordonnees finMenu);

#endif
