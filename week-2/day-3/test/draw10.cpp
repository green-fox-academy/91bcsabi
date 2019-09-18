#include "draw.h"

void rainbowSquare(SDL_Renderer* renderer, int size, int a, int b, int c) {

    SDL_SetRenderDrawColor(renderer, a, b, c, 100);

    SDL_Rect rect;
    rect.x = SCREEN_WIDTH / 2 - size / 2;
    rect.y = SCREEN_HEIGHT / 2 - size / 2;
    rect.h = size;
    rect.w = size;

    SDL_RenderFillRect(renderer, &rect);
}

void draw(SDL_Renderer* gRenderer) {

    SDL_SetRenderDrawBlendMode(gRenderer, SDL_BLENDMODE_BLEND);

    for (int i = 0; i < 60; ++i) {
        rainbowSquare(gRenderer, SCREEN_WIDTH - i * 10, 255 - i * 3, 0 + i * 3, 0 + i * 4);
    }
}