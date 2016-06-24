std::vector<coordonnees> transformeP(polygone* p,coordonnees c){
std::vector<coordonnees> l;
int i;
for(i=0;i<p->getNb();i++){
    p->vecteur.at(i);
}


}

void AffichePolynome(polygone* p,coordonnees c,GLuint text){
int i;
glColor3ub(0, 0, 255);
glBegin(GL_POLYGON);

for(i=0;i<p->getNb();i++){

	glVertex2f(-.5,  -1);
}

glEnd();
}
