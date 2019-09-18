#include "draw.h"

// Draw a green 100x100 square to the canvas' center.

void draw(SDL_Renderer* gRenderer){

    SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0 /*B*/, 0xFF /*A*/);

    int x1 = 270;
    for(int i= 0;i < 200;i+=100){
        SDL_RenderDrawLine(gRenderer, x1, 175+i, x1+100, 175+i);
    }
    for(int i= 0;i < 200;i+=100){
        SDL_RenderDrawLine(gRenderer, x1+i, 175, x1+i, 175+100);
    }
}