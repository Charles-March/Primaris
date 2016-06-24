#ifndef FONCTIONAFFICHAGEGL_H
#define FONCTIONAFFICHAGEGL_H

#include <vector>
#include "coordonnees.h"
#include "polygone.h"
#include <gl/glu.h>

std::vector<coordonnees> transformeP(polygone* p,coordonnees c);
void AffichePolynome(polygone* p,coordonnees c,GLuint text);

#endif
