#include "FonctionAffichageGL.h"
#include <stdio.h>

std::vector<coordonnees> CalculRelatif(std::vector<coordonnees> l, coordonnees c){
int i;
coordonnees center;
center.setX(TAILLEX/2);
center.setY(TAILLEY/2);
for(i=0;i<l.size();i++){
    l.at(i).setX((l.at(i).getX()-center.getX())/TAILLEX);
    l.at(i).setY((l.at(i).getY()-center.getY())/TAILLEY);

}
return l;
}

std::vector<coordonnees> transformeP(polygone* p,coordonnees c)
{
   // printf("p->getNb : %d\n",p->getNb());

    std::vector<coordonnees> l(p->getNb());
    int i;
    for(i=0; i<p->getNb(); i++)
    {
        l.at(i).setX(p->vecteur.at(i).getX()-c.getX());
        l.at(i).setY(p->vecteur.at(i).getY()-c.getY());
        printf("X : %d | Y : %d \n",l.at(i).getX(),l.at(i).getY());
    }
    return CalculRelatif(l,c);
}

void AffichePolynome(polygone* p,coordonnees c,GLuint text)
{
  //  printf("debut coucou ?\n");
    int i;
    std::vector<coordonnees> l(p->getNb());
   // printf("coucou0");
    l = transformeP(p,c);
//    printf("coucou1");
    glBindTexture(GL_TEXTURE_2D, text);
    glBegin(GL_POLYGON);
//    printf("coucou2");

    for(i=0; i<p->getNb(); i++)
    {
        glVertex2f(l.at(i).getX(),  l.at(i).getY());
    }
//    printf("coucou3");
    glEnd();
  //  printf("j'affiche un polynome\n");
    delete(&l);
}
