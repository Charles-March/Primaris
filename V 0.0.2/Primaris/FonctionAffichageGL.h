std::vector<coordonnees> transformeP(polygone* p,coordonnees c){
std::vector<coordonnees> l(p->getNb());
int i;
for(i=0;i<p->getNb();i++){
    l.at(i).setX(p->vecteur.at(i).getX()-c.getX());
    l.at(i).setY(p->vecteur.at(i).getY()-c.getY());
}

return l;
}

void AffichePolynome(polygone* p,coordonnees c,GLuint text){
int i;
std::vector<coordonnees> l(p->getNb());
l = transformeP(p,c);

glBindTexture(GL_TEXTURE_2D, text);
glBegin(GL_POLYGON);

for(i=0;i<p->getNb();i++){

	glVertex2f(l.at(i).getX(),  l.at(i).getY());
}

glEnd();
}
