class coordonnees{
private:
int x,y;
public:
coordonnees(){

}

coordonnees(int x,int y){
this->x=x;
this->y=y;
}

int getX(){
return x;
}

int getY(){
return y;
}

void setX(int a){
x=a;
}

void setY(int a){
y=a;
}

};
