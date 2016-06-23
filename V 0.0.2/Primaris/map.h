class map{
private:
jeu univers;
GLuint texture_poly;
public:
map(const char* text){
texture_poly=loadTexture(text,true);
remplir_univers();

}

void remplir_univers(){

}


};
