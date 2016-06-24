class map{
public:
jeu univers;
GLuint texture_poly;
map(const char* text){
texture_poly=loadTexture(text,true);
remplir_univers();

}

void remplir_univers(){
univers.addp(new polygone());
}

void affiche(){

}

};
