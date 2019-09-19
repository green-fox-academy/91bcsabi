//
// Created by Csabi on 19/09/2019.
//
//

#include "draw.h"

void draw(SDL_Renderer* gRenderer)
{
    for (int i = 0; i <= 300; i = i + 20) {

        SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
        SDL_RenderDrawLine(gRenderer, 320, i + 20, i + 320, 320);
        SDL_RenderDrawLine(gRenderer, 320, i + 20, 320 - i, 320);
        SDL_RenderDrawLine(gRenderer, i+20, 320, 320, i + 320);
        SDL_RenderDrawLine(gRenderer, 320 , 620-  i , 320 + i, 320  );
    }
}