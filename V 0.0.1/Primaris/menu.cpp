#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <gl/gl.h>
#include <glut.h>

class menu_moteur_gauche{
public:
int x,y;
char* s1=NULL;
RECT r1;
HDC hdc;

menu_moteur_gauche(int x,int y,HDC hdc){
this->x=x;
this->y=y;
this->hdc=hdc;
this->s1 = (char*)malloc(sizeof(char)*8);
strcpy(this->s1,"coucou");
create();
}
void maj(){
DrawText(this->hdc,s1,strlen(s1),&r1,DT_CENTER);
}
void create(){
/*
glColor3f(254,0.0,0.0);
unsigned int i;
void* font = GLUT_BITMAP_8_BY_13;
glRasterPos2f(x,y);
glCallLists(strlen(s1),GL_UNSIGNED_BYTE,s1);
/*

for(i=0;i<strlen(s1);i++){
    glutBitmapCharacter(font,s1[i]);

 //   printf("%c",s1[i]);
}
//printf("\n");
*/

r1.left=x;
r1.top=y;
r1.bottom=r1.top+16;
r1.right=r1.left+strlen(s1)*10;
}

};
