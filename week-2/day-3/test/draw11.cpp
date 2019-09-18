#include "draw.h"

void draw(SDL_Renderer* gRenderer){

    for (int j = 0; j < 400; j+= 20) {
        SDL_SetRenderDrawColor(gRenderer, 177  /*R*/, 3  /*G*/, 252  /*B*/, 255 /*A*/);
        SDL_Rect fillRect = {10+j, 10+j, 20, 20};
        SDL_RenderFillRect( gRenderer, &fillRect );
    }
}
