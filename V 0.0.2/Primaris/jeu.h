#include <list>
class jeu{
public:
std::list<polygone*> lp;
std::list<enemi*> le;
std::list<objet*> lo;
std::list<coffre*> lc;
hero player;

jeu(char* PathFile){

}

void addp(polygone* p){
lp.push_back(p);
}

jeu(){

}

void affiche(GLuint text,coordonnees c){
int i;
for(i=0;i<lp.size();i++){
    AffichePolynome(lp.front(),c,text);
    lp.push_back((polygone*)lp.front());
    lp.pop_front();
}

}

};
