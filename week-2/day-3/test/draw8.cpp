#include "draw.h"

// create a function that draws one square and takes 2 parameters:
// the x and y coordinates of the square's top left corner
// and draws a 50x50 square from that point.
// draw at least 3 squares with that function.
// avoid code duplication.

void draw(SDL_Renderer* gRenderer){

    for (int j = 0; j < 400; j+= 100) {
        SDL_SetRenderDrawColor(gRenderer, 23  /*R*/, 200  /*G*/, 88  /*B*/, 0xFF /*A*/);
        SDL_Rect fillRect = {0+j, 0+j, 50, 50};
        SDL_RenderFillRect( gRenderer, &fillRect );
    }
}


