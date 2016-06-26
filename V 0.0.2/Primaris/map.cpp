#include "map.h"
#include <gl/glu.h>
#include "sdlglutils.h"
#include <gl/gl.h>

map::map(const char* text)
{
    texture_poly=loadTexture(text,true);
    remplir_univers();
}

void map::remplir_univers()
{
    univers.addp(new polygone());
}

void affiche()
{

}
