#ifndef FRACTALS_FRACTALGENERATOR_H
#define FRACTALS_FRACTALGENERATOR_H

#include <SDL_render.h>


class FractalGenerator {
public:
    FractalGenerator(SDL_Renderer* renderer, int maxDepth);
    void draw(int x0, int y0, int xm, int ym);
    void drawFractal(int x0, int y0, int xm, int ym, int depth);

private:
    SDL_Renderer* _renderer;
    int maxDepth;
};


#endif //FRACTALS_FRACTALGENERATOR_H
