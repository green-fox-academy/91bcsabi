//
// Created by Csabi on 20/09/2019.
//

#include "draw.h"


void draw(SDL_Renderer* gRenderer) {

    // for (int i = 0; i <= 400; i = i + 50){
    //   SDL_SetRenderDrawColor(gRenderer, 0 , 0, 0 , 255);
    //SDL_RenderDrawLine(gRenderer, 100+i, 100+i, static_cast<int>(132.75)+i, 100+i);
    // SDL_RenderDrawLine(gRenderer, static_cast<int>(87.5)+i, 125+i, 100+i, 100+i);
    // SDL_RenderDrawLine(gRenderer, static_cast<int>(87.5)+i, 125+i, 100+i, 150+i);
    // SDL_RenderDrawLine(gRenderer, 100+i, 150+i, static_cast<int>(132.75)+i, 150+i);
    // SDL_RenderDrawLine(gRenderer, static_cast<int>(132.75)+i, 100+i, static_cast<int>(145.25)+i, 125+i);
    // SDL_RenderDrawLine(gRenderer, static_cast<int>(145.25)+i, 125+i, static_cast<int>(132.75)+i, 150+i);
    // }

    for (int i = 0; i <= 200; i = i + 50) {
        SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
        SDL_RenderDrawLine(gRenderer, 300, 300, static_cast<int>(332.75), 300);
        SDL_RenderDrawLine(gRenderer, static_cast<int>(287.5), 325, 300, 300);
        SDL_RenderDrawLine(gRenderer, static_cast<int>(287.5), 325, 300, 350);
        SDL_RenderDrawLine(gRenderer, 300, 350, static_cast<int>(332.75), 350);
        SDL_RenderDrawLine(gRenderer, static_cast<int>(332.75), 300, static_cast<int>(345.25), 325);
        SDL_RenderDrawLine(gRenderer, static_cast<int>(345.25), 325, static_cast<int>(332.75), 350);
    }
}



