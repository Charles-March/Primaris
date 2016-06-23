#define Imgpath "../ressource/img/"

SDL_Rect tempT;
TTF_Font *police=NULL;

SDL_Color noir={0,0,0};
SDL_Color vert={120,255,120};
SDL_Color bleu={120,120,255};
SDL_Color rouge={255,120,120};
SDL_Color blanc={255,255,255};
SDL_Color gris={128,128,128};


void refresh(SDL_Renderer* renderer)
{
SDL_RenderPresent(renderer);
SDL_RenderClear(renderer);
}

void affichetexte(char* text,int x, int y, int Taille, char* policeN,SDL_Color Color,SDL_Renderer* renderer)
{
int w=0,h=0;
SDL_Surface *Surface=NULL;
SDL_Texture *texture=NULL;
tempT.x=x;
tempT.y=y;
police=TTF_OpenFont(policeN,Taille);

if((police!=NULL)&&(text!=NULL)){

Surface=TTF_RenderText_Blended(police,text,Color);
texture = SDL_CreateTextureFromSurface(renderer,Surface);
SDL_QueryTexture(texture,NULL,NULL,&w,&h);
tempT.w=w;tempT.h=h;
SDL_RenderCopy(renderer,texture,NULL,&tempT);
                                }
else printf("NTM %s JE CONNAIS PAS",policeN);
TTF_CloseFont(police);
SDL_DestroyTexture(texture);
SDL_FreeSurface(Surface);
}


void rectangleVide(int x, int y, int w, int h,SDL_Color Color,SDL_Renderer* renderer)
{
SDL_SetRenderDrawColor(renderer,Color.r,Color.g,Color.b,Color.a);
SDL_Rect Temp;
Temp.x=x;Temp.y=y;Temp.w=w;Temp.h=h;
SDL_RenderDrawRect(renderer,&Temp);
SDL_free(&Temp);
}

void rectanglePlein(int x, int y, int w, int h,SDL_Color Color,SDL_Renderer* renderer)
{
SDL_SetRenderDrawColor(renderer,Color.r,Color.g,Color.b,Color.a);
SDL_Rect Temp;
Temp.x=x;Temp.y=y;Temp.w=w;Temp.h=h;
SDL_RenderFillRect(renderer,&Temp);
SDL_free(&Temp);
}

void affiche(char* name,int x,int y,SDL_Renderer* renderer)    // fonction affichage principale
{
int w=0,h=0;
SDL_Texture *texture=NULL;
SDL_Surface *a=NULL;
char T[50];
sprintf(T,"%s%s",Imgpath,name);
a=SDL_LoadBMP(T);
if(!(a)){printf("ERROR %s\n",T);}
else {
SDL_SetColorKey(a, 250, SDL_MapRGB(a->format, 255, 255, 255));
texture= SDL_CreateTextureFromSurface(renderer,a);

SDL_Rect temp;
temp.x=x;
temp.y=y;
SDL_QueryTexture(texture,NULL,NULL,&w,&h);
temp.w=w;temp.h=h;
SDL_RenderCopy(renderer,texture,NULL,&temp);
SDL_free(&temp);
    }

SDL_DestroyTexture(texture);
SDL_FreeSurface(a);

}

void afficheAvecTransparence(char* name,int x, int y, int transparence,SDL_Renderer* renderer)
{
int w=0,h=0;
SDL_Texture *texture=NULL;
SDL_Surface *a=NULL;
char T[50];
sprintf(T,"%s%s",Imgpath,name);
a=SDL_LoadBMP(T);
if(!(a)){printf("ERROR %s\n",T);}
else {

SDL_SetSurfaceAlphaMod(a,transparence);

texture= SDL_CreateTextureFromSurface(renderer,a);


SDL_Rect temp;
temp.x=x;
temp.y=y;
SDL_QueryTexture(texture,NULL,NULL,&w,&h);
temp.w=w;temp.h=h;
SDL_SetTextureAlphaMod(texture,transparence);
SDL_RenderCopy(renderer,texture,NULL,&temp);
SDL_free(&temp);
    }
SDL_DestroyTexture(texture);
SDL_FreeSurface(a);


}

void afficheEN32(char* name,int x,int y,SDL_Renderer* renderer)    //permet d'afficher en 32x32 les images a gauche.
{
SDL_Texture *texture=NULL;
SDL_Surface *a=NULL;
char T[30];
SDL_Rect temp;
sprintf(T,"%s%s",Imgpath,name);
a=SDL_LoadBMP(T);
if(!(a)){printf("ERROR %s\n",T);}
else {
texture= SDL_CreateTextureFromSurface(renderer,a);
temp.x=x;
temp.y=y;
temp.w=32;temp.h=32;
SDL_RenderCopy(renderer,texture,NULL,&temp);

    }
SDL_free(&temp);
SDL_DestroyTexture(texture);
SDL_FreeSurface(a);

}


