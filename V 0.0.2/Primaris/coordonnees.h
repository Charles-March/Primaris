#ifndef COORDONNEES_H
#define COORDONNEES_H

class coordonnees
{
private:
    double x,y;

public:
    coordonnees();
    coordonnees(int x,int y);
    coordonnees(double x,double y);
    double getX();
    double getY();
    void setX(int a);
    void setY(int a);
    void setX(double a);
    void setY(double a);

};

#endif
