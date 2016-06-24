#include "coordonnees.h"

coordonnees::coordonnees() {}

coordonnees::coordonnees(int x,int y)
{
    this->x=x;
    this->y=y;
}

int coordonnees::getX()
{
    return x;
}

int coordonnees::getY()
{
    return y;
}

void coordonnees::setX(int a)
{
    x=a;
}

void coordonnees::setY(int a)
{
    y=a;
}
