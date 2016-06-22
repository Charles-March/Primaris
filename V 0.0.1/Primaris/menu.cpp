#include "menu.h"
#include <glut.h>

menu_moteur_gauche::menu_moteur_gauche(int x,int y){
x=x;
y=y;
create();
}

void menu_moteur_gauche::create(){
glColor3f(1.0f,0.0f,0.0f);
glRasterPos2i(x,y);
char s[] ="coucou";
unsigned int i;
void* font = GLUT_BITMAP_9_BY_15;
for(i=0;i<strlen(s);i++){
    glutStrokeCharacter(GLUT_STROKE_ROMAN,s[i]);
}
}
