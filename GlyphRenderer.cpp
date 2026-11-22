
#include "GlyphRenderer.h"
#include <vector>

void GlyphRenderer::drawContour(
    SDL_Renderer* renderer,
    const Contour& contour,
    int subdivisions,
    float scale,
    float offsetX,
    float offsetY)
{
    std::vector<Point> points = contour.sample(subdivisions);

    if (points.size() < 2)
    {
        return;
    }

    for (std::size_t i = 0; i < points.size(); ++i)
    {
        const Point& current = points[i];
        const Point& next = points[(i + 1) % points.size()];

        float x1 = static_cast<float>(current.x) * scale + offsetX;
        float y1 = static_cast<float>(current.y) * scale + offsetY;

        float x2 = static_cast<float>(next.x) * scale + offsetX;
        float y2 = static_cast<float>(next.y) * scale + offsetY;

        SDL_RenderLine(renderer, x1, y1, x2, y2);
    }
}
