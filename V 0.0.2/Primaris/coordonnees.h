#ifndef COORDONNEES_H
#define COORDONNEES_H

class coordonnees
{
private:
    int x,y;

public:
    coordonnees();
    coordonnees(int x,int y);
    int getX();
    int getY();
    void setX(int a);
    void setY(int a);
};

#endif
