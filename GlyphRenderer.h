
#ifndef GLYPH_RENDERER_H
#define GLYPH_RENDERER_H

#include "Contour.h"
#include <SDL3/SDL.h>

/**
 * @brief Draws glyph contours using SDL3.
 */
class GlyphRenderer
{
public:
    /**
     * @brief Draws a contour using sampled Bezier points.
     * @param renderer SDL renderer.
     * @param contour Contour to draw.
     * @param subdivisions Number of subdivisions per curve.
     * @param scale Scaling factor.
     * @param offsetX Horizontal screen position.
     * @param offsetY Vertical screen position.
     */
    static void drawContour(
        SDL_Renderer* renderer,
        const Contour& contour,
        int subdivisions,
        float scale,
        float offsetX,
        float offsetY
    );
};

#endif
