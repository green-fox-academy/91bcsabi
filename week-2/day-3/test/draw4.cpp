#include "draw.h"

// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a line from that point to the center of the canvas.
// Draw at least 3 lines with that function using a loop.


void draw(SDL_Renderer* gRenderer){
    for(int i = 0;i < 300;i+= 50) {
        SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
        SDL_RenderDrawLine(gRenderer, 22 + i, 33 +i, 320, 240);
    }
}
