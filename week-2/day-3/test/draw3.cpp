#include "draw.h"


    // Draw the canvas' diagonals.
    // If it starts from the upper-left corner it should be green, otherwise it should be red.

void draw(SDL_Renderer* gRenderer){

    SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 0, 0, 640, 480);

    SDL_SetRenderDrawColor(gRenderer, 255 /*R*/, 0 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 640, 0, 0, 480);

}