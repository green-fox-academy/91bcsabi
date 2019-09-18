#include "draw.h"

// draw four different size and color rectangles.
// avoid code duplication.

void draw(SDL_Renderer* gRenderer) {

    for (int j = 0; j < 120; j+= 30) {
        SDL_SetRenderDrawColor(gRenderer, 23 + j /*R*/, 200 + j /*G*/, 88 + j /*B*/, 0xFF /*A*/);
        SDL_Rect fillRect = {12 + j, 11+j, 222+j, 175+j};
        SDL_RenderFillRect( gRenderer, &fillRect );
    }
}
