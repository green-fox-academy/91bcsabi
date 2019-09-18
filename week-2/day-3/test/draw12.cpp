#include "draw.h"

void draw(SDL_Renderer* gRenderer){

    for (int j = 0; j < 250; j+= 50) {
        SDL_SetRenderDrawColor(gRenderer, 177  /*R*/, 3  /*G*/, 252  /*B*/, 255 /*A*/);
        SDL_Rect fillRect = {10, 10, 10, 10*2};
        SDL_RenderFillRect( gRenderer, &fillRect );
    }
}

