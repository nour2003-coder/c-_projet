
#include "Glyph.h"

Glyph::Glyph(char character, double width, double height)
    : character(character), width(width), height(height)
{
}

void Glyph::addContour(const Contour& contour)
{
    contours.push_back(contour);
}
char Glyph::getCharacter() const
{
    return character;
}

double Glyph::getWidth() const
{
    return width;
}

double Glyph::getHeight() const
{
    return height;
}

const std::vector<Contour>& Glyph::getContours() const
{
    return contours;
}
