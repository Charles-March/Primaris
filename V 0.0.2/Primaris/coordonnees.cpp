#include "coordonnees.h"

coordonnees::coordonnees() {}

coordonnees::coordonnees(int x,int y)
{
    this->x=x;
    this->y=y;
}

coordonnees::coordonnees(double x,double y){
this->x=x;
this->y=y;
}

void coordonnees::setX(double a){
x=a;
}

void coordonnees::setY(double a){
x=a;
}

double coordonnees::getX()
{
    return x;
}

double coordonnees::getY()
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
