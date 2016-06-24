#ifndef FONCTIONAFFICHAGESDL_H
#define FONCTIONAFFICHAGESDL_H
#define Imgpath "../../ressource/img/"
#define FontPath "../../ressource/font/"

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>

SDL_Rect tempT;
TTF_Font *police=NULL;

SDL_Color noir= {0,0,0};
SDL_Color vert= {120,255,120};
SDL_Color bleu= {120,120,255};
SDL_Color rouge= {255,120,120};
SDL_Color blanc= {255,255,255};
SDL_Color gris= {128,128,128};

void refresh(SDL_Renderer* renderer);
void affichetexte(const char* text,int x, int y, int Taille,const char* policeN,SDL_Color Color,SDL_Renderer* renderer);
void rectangleVide(int x, int y, int w, int h,SDL_Color Color,SDL_Renderer* renderer);
void rectanglePlein(int x, int y, int w, int h,SDL_Color Color,SDL_Renderer* renderer);
void affiche(char* name,int x,int y,SDL_Renderer* renderer);
void afficheAvecTransparence(char* name,int x, int y, int transparence,SDL_Renderer* renderer);
void afficheEN32(char* name,int x,int y,SDL_Renderer* renderer);

#endif
