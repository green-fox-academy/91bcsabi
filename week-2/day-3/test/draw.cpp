#include "draw.h"

 void draw(SDL_Renderer* gRenderer) {

     // draw a red horizontal line to the canvas' middle.
     // draw a green vertical line to the canvas' middle.

     SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
     SDL_RenderDrawLine(gRenderer, 320, 0, 320, 480);
     SDL_SetRenderDrawColor(gRenderer, 255 /*R*/, 0 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
     SDL_RenderDrawLine(gRenderer, 0, 240, 640, 240);

 }
