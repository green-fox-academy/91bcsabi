//
// Created by Csabi on 20/09/2019.
//

#include "draw.h"


void draw(SDL_Renderer* gRenderer) {

    float HorizontalMove = 45.25;
    float VerticalMove = 25;
    for (int i = 0; i <= 300; i = i + 50) {
        SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
        SDL_RenderDrawLine(gRenderer, 300, 100, static_cast<int>(332.75), 100);
        SDL_RenderDrawLine(gRenderer, static_cast<int>(287.5), 125 + i, 300, 100 + i);
        SDL_RenderDrawLine(gRenderer, static_cast<int>(287.5), 125 + i, 300, 150 + i);
        SDL_RenderDrawLine(gRenderer, 300, 150 + i, static_cast<int>(332.75), 150 + i);
        SDL_RenderDrawLine(gRenderer, static_cast<int>(332.75), 100 + i, static_cast<int>(345.25), 125 + i);
        SDL_RenderDrawLine(gRenderer, static_cast<int>(345.25), 125 + i, static_cast<int>(332.75), 150 + i);
        for (int i = 0; i <= 250; i = i + 50) {
            SDL_RenderDrawLine(gRenderer, 300 - HorizontalMove, 100 + VerticalMove,
                               static_cast<int>(332.75) - HorizontalMove, 100 + VerticalMove);
            SDL_RenderDrawLine(gRenderer, static_cast<int>(287.5) - HorizontalMove, 125 + i + VerticalMove,
                               300 - HorizontalMove, 100 + i + VerticalMove);
            SDL_RenderDrawLine(gRenderer, static_cast<int>(287.5) - HorizontalMove, 125 + i + VerticalMove,
                               300 - HorizontalMove, 150 + i + VerticalMove);
            SDL_RenderDrawLine(gRenderer, 300 - HorizontalMove, 150 + i + VerticalMove,
                               static_cast<int>(332.75 - HorizontalMove), 150 + i + VerticalMove);
        }
        for (int i = 0; i <= 200; i = i + 50) {
            SDL_RenderDrawLine(gRenderer, 300 - HorizontalMove - HorizontalMove, 100 + VerticalMove + VerticalMove,
                               static_cast<int>(332.75) - HorizontalMove - HorizontalMove,
                               100 + VerticalMove + VerticalMove);
            SDL_RenderDrawLine(gRenderer, static_cast<int>(287.5) - HorizontalMove - HorizontalMove,
                               125 + i + VerticalMove + VerticalMove, 300 - HorizontalMove - HorizontalMove,
                               100 + i + VerticalMove + VerticalMove);
            SDL_RenderDrawLine(gRenderer, static_cast<int>(287.5) - HorizontalMove - HorizontalMove,
                               125 + i + VerticalMove + VerticalMove, 300 - HorizontalMove - HorizontalMove,
                               150 + i + VerticalMove + VerticalMove);
            SDL_RenderDrawLine(gRenderer, 300 - HorizontalMove - HorizontalMove, 150 + i + VerticalMove + VerticalMove,
                               static_cast<int>(332.75 - HorizontalMove - HorizontalMove),
                               150 + i + VerticalMove + VerticalMove);
        }
        for (int i = 0; i <= 150; i = i + 50) {
            SDL_RenderDrawLine(gRenderer, 300 - HorizontalMove - HorizontalMove - HorizontalMove,
                               100 + VerticalMove + VerticalMove + VerticalMove,
                               static_cast<int>(332.75) - HorizontalMove - HorizontalMove - HorizontalMove,
                               100 + VerticalMove + VerticalMove + VerticalMove);
            SDL_RenderDrawLine(gRenderer, static_cast<int>(287.5) - HorizontalMove - HorizontalMove - HorizontalMove,
                               125 + i + VerticalMove + VerticalMove + VerticalMove,
                               300 - HorizontalMove - HorizontalMove - HorizontalMove,
                               100 + i + VerticalMove + VerticalMove + VerticalMove);
            SDL_RenderDrawLine(gRenderer, static_cast<int>(287.5) - HorizontalMove - HorizontalMove - HorizontalMove,
                               125 + i + VerticalMove + VerticalMove + VerticalMove,
                               300 - HorizontalMove - HorizontalMove - HorizontalMove,
                               150 + i + VerticalMove + VerticalMove + VerticalMove);
            SDL_RenderDrawLine(gRenderer, 300 - HorizontalMove - HorizontalMove - HorizontalMove,
                               150 + i + VerticalMove + VerticalMove + VerticalMove,
                               static_cast<int>(332.75 - HorizontalMove - HorizontalMove - HorizontalMove),
                               150 + i + VerticalMove + VerticalMove + VerticalMove);
        }
        for (int i = 0; i <= 250; i = i + 50) {
            SDL_RenderDrawLine(gRenderer, 300 + HorizontalMove, 100 + VerticalMove,
                               static_cast<int>(332.75) + HorizontalMove, 100 + VerticalMove);
            SDL_RenderDrawLine(gRenderer, 300 + HorizontalMove, 150 + i + VerticalMove,
                               static_cast<int>(332.75 + HorizontalMove), 150 + i + VerticalMove);
            SDL_RenderDrawLine(gRenderer, static_cast<int>(332.75) + HorizontalMove, 100 + i + VerticalMove,
                               static_cast<int>(345.25) + HorizontalMove, 125 + i + VerticalMove);
            SDL_RenderDrawLine(gRenderer, static_cast<int>(345.25) + HorizontalMove, 125 + i + VerticalMove,
                               static_cast<int>(332.75) + HorizontalMove, 150 + i + VerticalMove);
        }
        for (int i = 0; i <= 200; i = i + 50) {
            SDL_RenderDrawLine(gRenderer, 300 + HorizontalMove + HorizontalMove, 100 + VerticalMove + VerticalMove,
                               static_cast<int>(332.75) + HorizontalMove + HorizontalMove,
                               100 + VerticalMove + VerticalMove);
            SDL_RenderDrawLine(gRenderer, 300 + HorizontalMove + HorizontalMove, 150 + i + VerticalMove + VerticalMove,
                               static_cast<int>(332.75 + HorizontalMove + HorizontalMove),
                               150 + i + VerticalMove + VerticalMove);
            SDL_RenderDrawLine(gRenderer, static_cast<int>(332.75) + HorizontalMove + HorizontalMove,
                               100 + i + VerticalMove + VerticalMove,
                               static_cast<int>(345.25) + HorizontalMove + HorizontalMove,
                               125 + i + VerticalMove + VerticalMove);
            SDL_RenderDrawLine(gRenderer, static_cast<int>(345.25) + HorizontalMove + HorizontalMove,
                               125 + i + VerticalMove + VerticalMove,
                               static_cast<int>(332.75) + HorizontalMove + HorizontalMove,
                               150 + i + VerticalMove + VerticalMove);
        }
        for (int i = 0; i <= 150; i = i + 50) {
            SDL_RenderDrawLine(gRenderer, 300 + HorizontalMove + HorizontalMove + HorizontalMove,
                               100 + VerticalMove + VerticalMove + VerticalMove,
                               static_cast<int>(332.75) + HorizontalMove + HorizontalMove + HorizontalMove,
                               100 + VerticalMove + VerticalMove + VerticalMove);
            SDL_RenderDrawLine(gRenderer, 300 + HorizontalMove + HorizontalMove + HorizontalMove,
                               150 + i + VerticalMove + VerticalMove + VerticalMove,
                               static_cast<int>(332.75 + HorizontalMove + HorizontalMove + HorizontalMove),
                               150 + i + VerticalMove + VerticalMove + VerticalMove);
            SDL_RenderDrawLine(gRenderer, static_cast<int>(332.75) + HorizontalMove + HorizontalMove + HorizontalMove,
                               100 + i + VerticalMove + VerticalMove + VerticalMove,
                               static_cast<int>(345.25) + HorizontalMove + HorizontalMove + HorizontalMove,
                               125 + i + VerticalMove + VerticalMove + VerticalMove);
            SDL_RenderDrawLine(gRenderer, static_cast<int>(345.25) + HorizontalMove + HorizontalMove + HorizontalMove,
                               125 + i + VerticalMove + VerticalMove + VerticalMove,
                               static_cast<int>(332.75) + HorizontalMove + HorizontalMove + HorizontalMove,
                               150 + i + VerticalMove + VerticalMove + VerticalMove);
        }
    }
}



