
#include "draw.h"

void line(SDL_Renderer* gRenderer, int x, int y,int x2,int y2);

void draw(SDL_Renderer* gRenderer){

    int x;
    int y;
    int x2;
    int y2;

    line(gRenderer, x, y,x2,y2);


}
void line(SDL_Renderer* gRenderer, int x, int y,int x2,int y2) {
    for (int i = 0; i < 630; i += 30) {

        SDL_SetRenderDrawColor(gRenderer, 0 , 0, 0 , 255);
        SDL_RenderDrawLine(gRenderer, 0+i, 600, 300+i/2, 0+i);
        SDL_RenderDrawLine(gRenderer, 600-i, 600, 300-i/2, 0+i);
        SDL_RenderDrawLine(gRenderer, 0+i/2, 600-i, 600-i/2, 600-i);
    }
}
