#include "draw.h"
// create a function that draws one square and takes 1 parameters:
// the square size
// and draws a square of that size to the center of the canvas.
// draw at least 3 squares with that function.
// the squares should not be filled otherwise they will hide each other
// avoid code duplication.
void draw(SDL_Renderer* gRenderer){

    SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    int x1 = 270;
    int y1 = 180;
    int x2 = 370;
    for(int i= 0;i < 400;i+=100){
        SDL_RenderDrawLine(gRenderer, x1, y1, x2, 175+i);
    }
    for(int i= 0;i < 200;i+=100){
        SDL_RenderDrawLine(gRenderer, x1+i, y1, x1+i, 175+100);
    }

}
