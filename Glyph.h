
#ifndef GLYPH_H
#define GLYPH_H

#include "Contour.h"
#include <vector>


class Glyph
{
private:
    char character;
    double width;
    double height;
    std::vector<Contour> contours;

public:
    Glyph(char character, double width, double height);

    void addContour(const Contour& contour);


    char getCharacter() const;

    double getWidth() const;


    double getHeight() const;

    const std::vector<Contour>& getContours() const;
};

#endif
