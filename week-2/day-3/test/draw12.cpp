#include "draw.h"

void draw(int x, int y, int size, SDL_Renderer* gRenderer)
{
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 4; i++) {
            int offsetX = i * 2 * size;
            int offsetY = j * 2 * size;
            SDL_Rect fillRect = {
                    x + offsetX,
                    y + offsetY,
                    size,
                    size
            };
            SDL_Rect fillRect2 = {
                    x + size + offsetX,
                    y + size + offsetY,
                    size,
                    size
            };
            SDL_RenderFillRect( gRenderer, &fillRect );
            SDL_RenderFillRect( gRenderer, &fillRect2 );
        }
    }
}
void draw(SDL_Renderer* gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    int size = 50;
    int chessBoardX = 100;
    draw(chessBoardX, chessBoardX, size, gRenderer);
    draw(20, 20, 5, gRenderer);
}