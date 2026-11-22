
#include "Sdl.h"
#include "GlyphFactory.h"
#include "GlyphRenderer.h"

#include <vector>
#include <iostream>

int main()
{
    // Create all 26 letters.
    std::vector<Glyph> alphabet = {
        GlyphFactory::createA(),
        GlyphFactory::createB(),
        GlyphFactory::createC(),
        GlyphFactory::createD(),
        GlyphFactory::createE(),
        GlyphFactory::createF(),
        GlyphFactory::createG(),
        GlyphFactory::createH(),
        GlyphFactory::createI(),
        GlyphFactory::createJ(),
        GlyphFactory::createK(),
        GlyphFactory::createL(),
        GlyphFactory::createM(),
        GlyphFactory::createN(),
        GlyphFactory::createO(),
        GlyphFactory::createP(),
        GlyphFactory::createQ(),
        GlyphFactory::createR(),
        GlyphFactory::createS(),
        GlyphFactory::createT(),
        GlyphFactory::createU(),
        GlyphFactory::createV(),
        GlyphFactory::createW(),
        GlyphFactory::createX(),
        GlyphFactory::createY(),
        GlyphFactory::createZ()
    };

    // Print the alphabet in the terminal.
    std::cout << "Alphabet: ";

    for (const Glyph& glyph : alphabet)
    {
        std::cout << glyph.getCharacter() << " ";
    }

    std::cout << "\nTotal letters: "
              << alphabet.size() << std::endl;

    // Create SDL window.
    Sdl app("Modern Sans Serif - A to Z", 1100, 750);

    const int columns = 6;
    const float scale = 1.1f;
    const float cellWidth = 175.0f;
    const float cellHeight = 165.0f;
    const float startX = 45.0f;
    const float startY = 45.0f;

    while (app.isRunning())
    {
        app.processEvents();
        app.clear();

        SDL_SetRenderDrawColor(
            app.getRenderer(),
            0, 0, 0, 255
        );

        for (std::size_t i = 0; i < alphabet.size(); ++i)
        {
            int row = static_cast<int>(i) / columns;
            int column = static_cast<int>(i) % columns;

            float offsetX =
                startX + column * cellWidth;

            float offsetY =
                startY + row * cellHeight;

            const Glyph& glyph = alphabet[i];

            for (const Contour& contour : glyph.getContours())
            {
                GlyphRenderer::drawContour(
                    app.getRenderer(),
                    contour,
                    20,
                    scale,
                    offsetX,
                    offsetY
                );
            }
        }

        app.present();
    }

    return 0;
}
