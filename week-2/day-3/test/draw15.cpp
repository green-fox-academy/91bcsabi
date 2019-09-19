
#include "draw.h"

/*void draw(SDL_Renderer* gRenderer) {
    for(int j = 0; j <= 200;j = j + 20) {

        for (int i = 0; i <= 560; i = i + 40) {
            SDL_SetRenderDrawColor(gRenderer, 0 , 255 , 0x00 , 0xFF );
            SDL_RenderDrawLine(gRenderer, 20 + i, 555, i, 595);
            SDL_RenderDrawLine(gRenderer, 0 + i, 595, 40 + i, 595);
            SDL_RenderDrawLine(gRenderer, 20 + i, 555, 40 + i, 595);
        }
    }
}
*/

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

        SDL_SetRenderDrawColor(gRenderer, 159 , 234 , 132 , 0);
        SDL_RenderDrawLine(gRenderer, 0+i, 600, 300+i/2, 0+i);
        SDL_RenderDrawLine(gRenderer, 600-i, 600, 300-i/2, 0+i);
        SDL_RenderDrawLine(gRenderer, 0+i/2, 600-i, 600-i/2, 600-i);
    }
}
