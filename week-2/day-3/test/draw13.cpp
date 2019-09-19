//
// Created by Csabi on 19/09/2019.
//

#include "draw.h"

#include "draw.h"

void draw(SDL_Renderer* gRenderer) {
    int a1 = 540;
    int b1 = 580;
    for (int i = 80; i <=  480; i = i + 40) {

        SDL_SetRenderDrawColor(gRenderer, 177 /*R*/, 3 /*G*/, 252 /*B*/, 255 /*A*/);
        SDL_RenderDrawLine(gRenderer, i, 10, b1, i+40);
        SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
        SDL_RenderDrawLine(gRenderer, 10, i, i+40, b1);
    }
}