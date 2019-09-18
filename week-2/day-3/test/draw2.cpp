#include "draw.h"

void draw(SDL_Renderer* gRenderer) {

    // Draw a box that has different colored lines on each edge.
    // The center of the box should align with the center of the screen.

    SDL_SetRenderDrawColor( gRenderer, 255, 0, 0, 255 );
    //create a rectangle
    SDL_Rect fillRect = { 220, 140, 200, 200};
    //draw rectangle
    SDL_RenderFillRect( gRenderer, &fillRect );

    SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 220, 140, 220, 340);

    SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 0 /*G*/, 255 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 220, 140, 420, 140);

    SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 0 /*G*/, 0 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 220, 340, 420, 340);



}

