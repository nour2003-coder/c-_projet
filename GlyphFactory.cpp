
#include "GlyphFactory.h"

// A
Glyph GlyphFactory::createA()
{
    Glyph letter('A', 100, 140);
    Contour outer;

    outer.addLine(Point(8, 130), Point(40, 10));
    outer.addLine(Point(40, 10), Point(60, 10));
    outer.addLine(Point(60, 10), Point(92, 130));
    outer.addLine(Point(92, 130), Point(72, 130));
    outer.addLine(Point(72, 130), Point(64, 98));
    outer.addLine(Point(64, 98), Point(36, 98));
    outer.addLine(Point(36, 98), Point(28, 130));
    outer.addLine(Point(28, 130), Point(8, 130));

    letter.addContour(outer);

    Contour inner(true);
    inner.addLine(Point(40, 78), Point(50, 38));
    inner.addLine(Point(50, 38), Point(60, 78));
    inner.addLine(Point(60, 78), Point(40, 78));

    letter.addContour(inner);
    return letter;
}

// B
Glyph GlyphFactory::createB()
{
    Glyph letter('B', 100, 140);
    Contour outer;

    outer.addLine(Point(15, 10), Point(52, 10));
    outer.addCurve(BezierCurve(
        Point(52, 10), Point(88, 10), Point(88, 42)));
    outer.addCurve(BezierCurve(
        Point(88, 42), Point(88, 62), Point(63, 70)));
    outer.addCurve(BezierCurve(
        Point(63, 70), Point(92, 76), Point(92, 103)));
    outer.addCurve(BezierCurve(
        Point(92, 103), Point(92, 130), Point(55, 130)));
    outer.addLine(Point(55, 130), Point(15, 130));
    outer.addLine(Point(15, 130), Point(15, 10));

    letter.addContour(outer);

    Contour upper(true);
    upper.addLine(Point(35, 29), Point(51, 29));
    upper.addCurve(BezierCurve(
        Point(51, 29), Point(68, 29), Point(68, 43)));
    upper.addCurve(BezierCurve(
        Point(68, 43), Point(68, 56), Point(51, 56)));
    upper.addLine(Point(51, 56), Point(35, 56));
    upper.addLine(Point(35, 56), Point(35, 29));

    letter.addContour(upper);

    Contour lower(true);
    lower.addLine(Point(35, 82), Point(54, 82));
    lower.addCurve(BezierCurve(
        Point(54, 82), Point(72, 82), Point(72, 100)));
    lower.addCurve(BezierCurve(
        Point(72, 100), Point(72, 112), Point(54, 112)));
    lower.addLine(Point(54, 112), Point(35, 112));
    lower.addLine(Point(35, 112), Point(35, 82));

    letter.addContour(lower);
    return letter;
}

// C
Glyph GlyphFactory::createC()
{
    Glyph letter('C', 100, 140);
    Contour outer;

    outer.addCurve(BezierCurve(
        Point(83, 25), Point(65, 8), Point(47, 10)));
    outer.addCurve(BezierCurve(
        Point(47, 10), Point(10, 10), Point(10, 70)));
    outer.addCurve(BezierCurve(
        Point(10, 70), Point(10, 130), Point(47, 130)));
    outer.addCurve(BezierCurve(
        Point(47, 130), Point(65, 132), Point(83, 115)));
    outer.addLine(Point(83, 115), Point(68, 99));
    outer.addCurve(BezierCurve(
        Point(68, 99), Point(55, 113), Point(43, 111)));
    outer.addCurve(BezierCurve(
        Point(43, 111), Point(29, 111), Point(29, 70)));
    outer.addCurve(BezierCurve(
        Point(29, 70), Point(29, 29), Point(43, 29)));
    outer.addCurve(BezierCurve(
        Point(43, 29), Point(55, 27), Point(68, 41)));
    outer.addLine(Point(68, 41), Point(83, 25));

    letter.addContour(outer);
    return letter;
}

// D
Glyph GlyphFactory::createD()
{
    Glyph letter('D', 100, 140);
    Contour outer;

    outer.addLine(Point(15, 10), Point(48, 10));
    outer.addCurve(BezierCurve(
        Point(48, 10), Point(89, 10), Point(89, 70)));
    outer.addCurve(BezierCurve(
        Point(89, 70), Point(89, 130), Point(48, 130)));
    outer.addLine(Point(48, 130), Point(15, 130));
    outer.addLine(Point(15, 130), Point(15, 10));

    letter.addContour(outer);

    Contour inner(true);
    inner.addLine(Point(35, 31), Point(47, 31));
    inner.addCurve(BezierCurve(
        Point(47, 31), Point(69, 31), Point(69, 70)));
    inner.addCurve(BezierCurve(
        Point(69, 70), Point(69, 109), Point(47, 109)));
    inner.addLine(Point(47, 109), Point(35, 109));
    inner.addLine(Point(35, 109), Point(35, 31));

    letter.addContour(inner);
    return letter;
}

// E
Glyph GlyphFactory::createE()
{
    Glyph letter('E', 100, 140);
    Contour outer;

    outer.addLine(Point(15, 10), Point(85, 10));
    outer.addLine(Point(85, 10), Point(85, 30));
    outer.addLine(Point(85, 30), Point(35, 30));
    outer.addLine(Point(35, 30), Point(35, 60));
    outer.addLine(Point(35, 60), Point(78, 60));
    outer.addLine(Point(78, 60), Point(78, 80));
    outer.addLine(Point(78, 80), Point(35, 80));
    outer.addLine(Point(35, 80), Point(35, 110));
    outer.addLine(Point(35, 110), Point(85, 110));
    outer.addLine(Point(85, 110), Point(85, 130));
    outer.addLine(Point(85, 130), Point(15, 130));
    outer.addLine(Point(15, 130), Point(15, 10));

    letter.addContour(outer);
    return letter;
}

// F
Glyph GlyphFactory::createF()
{
    Glyph letter('F', 100, 140);
    Contour outer;

    outer.addLine(Point(15, 10), Point(85, 10));
    outer.addLine(Point(85, 10), Point(85, 30));
    outer.addLine(Point(85, 30), Point(35, 30));
    outer.addLine(Point(35, 30), Point(35, 60));
    outer.addLine(Point(35, 60), Point(78, 60));
    outer.addLine(Point(78, 60), Point(78, 80));
    outer.addLine(Point(78, 80), Point(35, 80));
    outer.addLine(Point(35, 80), Point(35, 130));
    outer.addLine(Point(35, 130), Point(15, 130));
    outer.addLine(Point(15, 130), Point(15, 10));

    letter.addContour(outer);
    return letter;
}

// G
Glyph GlyphFactory::createG()
{
    Glyph letter('G', 100, 140);
    Contour outer;

    outer.addCurve(BezierCurve(
        Point(84, 25), Point(68, 8), Point(48, 10)));
    outer.addCurve(BezierCurve(
        Point(48, 10), Point(10, 10), Point(10, 70)));
    outer.addCurve(BezierCurve(
        Point(10, 70), Point(10, 130), Point(48, 130)));
    outer.addCurve(BezierCurve(
        Point(48, 130), Point(68, 130), Point(85, 113)));
    outer.addLine(Point(85, 113), Point(85, 65));
    outer.addLine(Point(85, 65), Point(51, 65));
    outer.addLine(Point(51, 65), Point(51, 84));
    outer.addLine(Point(51, 84), Point(66, 84));
    outer.addLine(Point(66, 84), Point(66, 104));
    outer.addCurve(BezierCurve(
        Point(66, 104), Point(57, 112), Point(48, 111)));
    outer.addCurve(BezierCurve(
        Point(48, 111), Point(29, 111), Point(29, 70)));
    outer.addCurve(BezierCurve(
        Point(29, 70), Point(29, 29), Point(48, 29)));
    outer.addCurve(BezierCurve(
        Point(48, 29), Point(61, 28), Point(70, 41)));
    outer.addLine(Point(70, 41), Point(84, 25));

    letter.addContour(outer);
    return letter;
}

// H
Glyph GlyphFactory::createH()
{
    Glyph letter('H', 100, 140);
    Contour outer;

    outer.addLine(Point(12, 10), Point(32, 10));
    outer.addLine(Point(32, 10), Point(32, 60));
    outer.addLine(Point(32, 60), Point(68, 60));
    outer.addLine(Point(68, 60), Point(68, 10));
    outer.addLine(Point(68, 10), Point(88, 10));
    outer.addLine(Point(88, 10), Point(88, 130));
    outer.addLine(Point(88, 130), Point(68, 130));
    outer.addLine(Point(68, 130), Point(68, 80));
    outer.addLine(Point(68, 80), Point(32, 80));
    outer.addLine(Point(32, 80), Point(32, 130));
    outer.addLine(Point(32, 130), Point(12, 130));
    outer.addLine(Point(12, 130), Point(12, 10));

    letter.addContour(outer);
    return letter;
}

// I
Glyph GlyphFactory::createI()
{
    Glyph letter('I', 100, 140);
    Contour outer;

    outer.addLine(Point(25, 10), Point(75, 10));
    outer.addLine(Point(75, 10), Point(75, 30));
    outer.addLine(Point(75, 30), Point(60, 30));
    outer.addLine(Point(60, 30), Point(60, 110));
    outer.addLine(Point(60, 110), Point(75, 110));
    outer.addLine(Point(75, 110), Point(75, 130));
    outer.addLine(Point(75, 130), Point(25, 130));
    outer.addLine(Point(25, 130), Point(25, 110));
    outer.addLine(Point(25, 110), Point(40, 110));
    outer.addLine(Point(40, 110), Point(40, 30));
    outer.addLine(Point(40, 30), Point(25, 30));
    outer.addLine(Point(25, 30), Point(25, 10));

    letter.addContour(outer);
    return letter;
}

// J
Glyph GlyphFactory::createJ()
{
    Glyph letter('J', 100, 140);
    Contour outer;

    outer.addLine(Point(20, 10), Point(85, 10));
    outer.addLine(Point(85, 10), Point(85, 100));
    outer.addCurve(BezierCurve(
        Point(85, 100), Point(85, 130), Point(53, 130)));
    outer.addCurve(BezierCurve(
        Point(53, 130), Point(20, 130), Point(20, 100)));
    outer.addLine(Point(20, 100), Point(20, 85));
    outer.addLine(Point(20, 85), Point(40, 85));
    outer.addLine(Point(40, 85), Point(40, 99));
    outer.addCurve(BezierCurve(
        Point(40, 99), Point(40, 111), Point(53, 111)));
    outer.addCurve(BezierCurve(
        Point(53, 111), Point(65, 111), Point(65, 99)));
    outer.addLine(Point(65, 99), Point(65, 30));
    outer.addLine(Point(65, 30), Point(20, 30));
    outer.addLine(Point(20, 30), Point(20, 10));

    letter.addContour(outer);
    return letter;
}

// K
Glyph GlyphFactory::createK()
{
    Glyph letter('K', 100, 140);
    Contour outer;

    outer.addLine(Point(12, 10), Point(32, 10));
    outer.addLine(Point(32, 10), Point(32, 60));
    outer.addLine(Point(32, 60), Point(70, 10));
    outer.addLine(Point(70, 10), Point(94, 10));
    outer.addLine(Point(94, 10), Point(52, 66));
    outer.addLine(Point(52, 66), Point(95, 130));
    outer.addLine(Point(95, 130), Point(71, 130));
    outer.addLine(Point(71, 130), Point(32, 74));
    outer.addLine(Point(32, 74), Point(32, 130));
    outer.addLine(Point(32, 130), Point(12, 130));
    outer.addLine(Point(12, 130), Point(12, 10));

    letter.addContour(outer);
    return letter;
}

// L
Glyph GlyphFactory::createL()
{
    Glyph letter('L', 100, 140);
    Contour outer;

    outer.addLine(Point(15, 10), Point(35, 10));
    outer.addLine(Point(35, 10), Point(35, 110));
    outer.addLine(Point(35, 110), Point(85, 110));
    outer.addLine(Point(85, 110), Point(85, 130));
    outer.addLine(Point(85, 130), Point(15, 130));
    outer.addLine(Point(15, 130), Point(15, 10));

    letter.addContour(outer);
    return letter;
}

// M
Glyph GlyphFactory::createM()
{
    Glyph letter('M', 100, 140);
    Contour outer;

    outer.addLine(Point(8, 130), Point(8, 10));
    outer.addLine(Point(8, 10), Point(32, 10));
    outer.addLine(Point(32, 10), Point(50, 75));
    outer.addLine(Point(50, 75), Point(68, 10));
    outer.addLine(Point(68, 10), Point(92, 10));
    outer.addLine(Point(92, 10), Point(92, 130));
    outer.addLine(Point(92, 130), Point(72, 130));
    outer.addLine(Point(72, 130), Point(72, 52));
    outer.addLine(Point(72, 52), Point(56, 105));
    outer.addLine(Point(56, 105), Point(44, 105));
    outer.addLine(Point(44, 105), Point(28, 52));
    outer.addLine(Point(28, 52), Point(28, 130));
    outer.addLine(Point(28, 130), Point(8, 130));

    letter.addContour(outer);
    return letter;
}

// N
Glyph GlyphFactory::createN()
{
    Glyph letter('N', 100, 140);
    Contour outer;

    outer.addLine(Point(12, 130), Point(12, 10));
    outer.addLine(Point(12, 10), Point(34, 10));
    outer.addLine(Point(34, 10), Point(68, 91));
    outer.addLine(Point(68, 91), Point(68, 10));
    outer.addLine(Point(68, 10), Point(88, 10));
    outer.addLine(Point(88, 10), Point(88, 130));
    outer.addLine(Point(88, 130), Point(66, 130));
    outer.addLine(Point(66, 130), Point(32, 49));
    outer.addLine(Point(32, 49), Point(32, 130));
    outer.addLine(Point(32, 130), Point(12, 130));

    letter.addContour(outer);
    return letter;
}

// O
Glyph GlyphFactory::createO()
{
    Glyph letter('O', 100, 140);

    Contour outer;
    outer.addCurve(BezierCurve(
        Point(50, 10), Point(90, 10), Point(90, 70)));
    outer.addCurve(BezierCurve(
        Point(90, 70), Point(90, 130), Point(50, 130)));
    outer.addCurve(BezierCurve(
        Point(50, 130), Point(10, 130), Point(10, 70)));
    outer.addCurve(BezierCurve(
        Point(10, 70), Point(10, 10), Point(50, 10)));

    letter.addContour(outer);

    Contour inner(true);
    inner.addCurve(BezierCurve(
        Point(50, 35), Point(75, 35), Point(75, 70)));
    inner.addCurve(BezierCurve(
        Point(75, 70), Point(75, 105), Point(50, 105)));
    inner.addCurve(BezierCurve(
        Point(50, 105), Point(25, 105), Point(25, 70)));
    inner.addCurve(BezierCurve(
        Point(25, 70), Point(25, 35), Point(50, 35)));

    letter.addContour(inner);
    return letter;
}

// P
Glyph GlyphFactory::createP()
{
    Glyph letter('P', 100, 140);
    Contour outer;

    outer.addLine(Point(15, 10), Point(53, 10));
    outer.addCurve(BezierCurve(
        Point(53, 10), Point(90, 10), Point(90, 48)));
    outer.addCurve(BezierCurve(
        Point(90, 48), Point(90, 83), Point(53, 83)));
    outer.addLine(Point(53, 83), Point(35, 83));
    outer.addLine(Point(35, 83), Point(35, 130));
    outer.addLine(Point(35, 130), Point(15, 130));
    outer.addLine(Point(15, 130), Point(15, 10));

    letter.addContour(outer);

    Contour inner(true);
    inner.addLine(Point(35, 30), Point(52, 30));
    inner.addCurve(BezierCurve(
        Point(52, 30), Point(69, 30), Point(69, 47)));
    inner.addCurve(BezierCurve(
        Point(69, 47), Point(69, 63), Point(52, 63)));
    inner.addLine(Point(52, 63), Point(35, 63));
    inner.addLine(Point(35, 63), Point(35, 30));

    letter.addContour(inner);
    return letter;
}

// Q


Glyph GlyphFactory::createQ()
{
    Glyph letter('Q', 100, 140);

    // Outer contour: oval with an integrated tail.
    Contour outer;

    outer.addCurve(BezierCurve(
        Point(50, 10), Point(90, 10), Point(90, 70)
    ));

    outer.addCurve(BezierCurve(
        Point(90, 70), Point(90, 91), Point(78, 105)
    ));

    // Outer edge of the tail.
    outer.addLine(Point(78, 105), Point(94, 130));
    outer.addLine(Point(94, 130), Point(78, 130));

    // Inner edge of the tail.
    outer.addLine(Point(78, 130), Point(64, 108));

    // Bottom of the oval.
    outer.addCurve(BezierCurve(
        Point(64, 108), Point(58, 124), Point(50, 130)
    ));

    outer.addCurve(BezierCurve(
        Point(50, 130), Point(10, 130), Point(10, 70)
    ));

    outer.addCurve(BezierCurve(
        Point(10, 70), Point(10, 10), Point(50, 10)
    ));

    letter.addContour(outer);

    // Inner counter.
    Contour inner(true);

    inner.addCurve(BezierCurve(
        Point(50, 31), Point(70, 31), Point(70, 70)
    ));

    inner.addCurve(BezierCurve(
        Point(70, 70), Point(70, 96), Point(55, 104)
    ));

    inner.addCurve(BezierCurve(
        Point(55, 104), Point(39, 101), Point(30, 70)
    ));

    inner.addCurve(BezierCurve(
        Point(30, 70), Point(30, 31), Point(50, 31)
    ));

    letter.addContour(inner);

    return letter;
}


// R
Glyph GlyphFactory::createR()
{
    Glyph letter('R', 100, 140);
    Contour outer;

    outer.addLine(Point(15, 10), Point(53, 10));
    outer.addCurve(BezierCurve(
        Point(53, 10), Point(90, 10), Point(90, 48)));
    outer.addCurve(BezierCurve(
        Point(90, 48), Point(90, 76), Point(63, 82)));
    outer.addLine(Point(63, 82), Point(95, 130));
    outer.addLine(Point(95, 130), Point(71, 130));
    outer.addLine(Point(71, 130), Point(43, 85));
    outer.addLine(Point(43, 85), Point(35, 85));
    outer.addLine(Point(35, 85), Point(35, 130));
    outer.addLine(Point(35, 130), Point(15, 130));
    outer.addLine(Point(15, 130), Point(15, 10));

    letter.addContour(outer);

    Contour inner(true);
    inner.addLine(Point(35, 30), Point(52, 30));
    inner.addCurve(BezierCurve(
        Point(52, 30), Point(69, 30), Point(69, 47)));
    inner.addCurve(BezierCurve(
        Point(69, 47), Point(69, 64), Point(52, 64)));
    inner.addLine(Point(52, 64), Point(35, 64));
    inner.addLine(Point(35, 64), Point(35, 30));

    letter.addContour(inner);
    return letter;
}

// S

Glyph GlyphFactory::createS()
{
    Glyph letter('S', 100, 140);
    Contour outer;

    // Upper terminal.
    outer.addLine(Point(82, 24), Point(68, 40));

    // Upper curve.
    outer.addCurve(BezierCurve(
        Point(68, 40), Point(57, 28), Point(45, 29)
    ));

    outer.addCurve(BezierCurve(
        Point(45, 29), Point(28, 29), Point(28, 43)
    ));

    // Middle transition.
    outer.addCurve(BezierCurve(
        Point(28, 43), Point(28, 53), Point(44, 58)
    ));

    outer.addCurve(BezierCurve(
        Point(44, 58), Point(60, 63), Point(72, 70)
    ));

    // Lower-right curve.
    outer.addCurve(BezierCurve(
        Point(72, 70), Point(90, 81), Point(88, 101)
    ));

    outer.addCurve(BezierCurve(
        Point(88, 101), Point(86, 125), Point(57, 130)
    ));

    // Lower terminal.
    outer.addCurve(BezierCurve(
        Point(57, 130), Point(31, 134), Point(12, 113)
    ));

    outer.addLine(Point(12, 113), Point(27, 97));

    // Inner lower curve.
    outer.addCurve(BezierCurve(
        Point(27, 97), Point(40, 113), Point(55, 111)
    ));

    outer.addCurve(BezierCurve(
        Point(55, 111), Point(69, 110), Point(69, 98)
    ));

    // Inner middle transition.
    outer.addCurve(BezierCurve(
        Point(69, 98), Point(69, 88), Point(54, 83)
    ));

    outer.addCurve(BezierCurve(
        Point(54, 83), Point(32, 77), Point(20, 65)
    ));

    // Return to upper terminal.
    outer.addCurve(BezierCurve(
        Point(20, 65), Point(8, 53), Point(10, 37)
    ));

    outer.addCurve(BezierCurve(
        Point(10, 37), Point(12, 13), Point(43, 10)
    ));

    outer.addCurve(BezierCurve(
        Point(43, 10), Point(67, 8), Point(82, 24)
    ));

    letter.addContour(outer);

    return letter;
}


// T
Glyph GlyphFactory::createT()
{
    Glyph letter('T', 100, 140);
    Contour outer;

    outer.addLine(Point(8, 10), Point(92, 10));
    outer.addLine(Point(92, 10), Point(92, 30));
    outer.addLine(Point(92, 30), Point(60, 30));
    outer.addLine(Point(60, 30), Point(60, 130));
    outer.addLine(Point(60, 130), Point(40, 130));
    outer.addLine(Point(40, 130), Point(40, 30));
    outer.addLine(Point(40, 30), Point(8, 30));
    outer.addLine(Point(8, 30), Point(8, 10));

    letter.addContour(outer);
    return letter;
}

// U
Glyph GlyphFactory::createU()
{
    Glyph letter('U', 100, 140);
    Contour outer;

    outer.addLine(Point(12, 10), Point(32, 10));
    outer.addLine(Point(32, 10), Point(32, 91));
    outer.addCurve(BezierCurve(
        Point(32, 91), Point(32, 112), Point(50, 112)));
    outer.addCurve(BezierCurve(
        Point(50, 112), Point(68, 112), Point(68, 91)));
    outer.addLine(Point(68, 91), Point(68, 10));
    outer.addLine(Point(68, 10), Point(88, 10));
    outer.addLine(Point(88, 10), Point(88, 93));
    outer.addCurve(BezierCurve(
        Point(88, 93), Point(88, 130), Point(50, 130)));
    outer.addCurve(BezierCurve(
        Point(50, 130), Point(12, 130), Point(12, 93)));
    outer.addLine(Point(12, 93), Point(12, 10));

    letter.addContour(outer);
    return letter;
}

// V
Glyph GlyphFactory::createV()
{
    Glyph letter('V', 100, 140);
    Contour outer;

    outer.addLine(Point(8, 10), Point(30, 10));
    outer.addLine(Point(30, 10), Point(50, 103));
    outer.addLine(Point(50, 103), Point(70, 10));
    outer.addLine(Point(70, 10), Point(92, 10));
    outer.addLine(Point(92, 10), Point(62, 130));
    outer.addLine(Point(62, 130), Point(38, 130));
    outer.addLine(Point(38, 130), Point(8, 10));

    letter.addContour(outer);
    return letter;
}

// W
Glyph GlyphFactory::createW()
{
    Glyph letter('W', 100, 140);
    Contour outer;

    outer.addLine(Point(4, 10), Point(24, 10));
    outer.addLine(Point(24, 10), Point(36, 99));
    outer.addLine(Point(36, 99), Point(46, 35));
    outer.addLine(Point(46, 35), Point(54, 35));
    outer.addLine(Point(54, 35), Point(64, 99));
    outer.addLine(Point(64, 99), Point(76, 10));
    outer.addLine(Point(76, 10), Point(96, 10));
    outer.addLine(Point(96, 10), Point(78, 130));
    outer.addLine(Point(78, 130), Point(58, 130));
    outer.addLine(Point(58, 130), Point(50, 78));
    outer.addLine(Point(50, 78), Point(42, 130));
    outer.addLine(Point(42, 130), Point(22, 130));
    outer.addLine(Point(22, 130), Point(4, 10));

    letter.addContour(outer);
    return letter;
}

// X
Glyph GlyphFactory::createX()
{
    Glyph letter('X', 100, 140);
    Contour outer;

    outer.addLine(Point(10, 10), Point(34, 10));
    outer.addLine(Point(34, 10), Point(50, 48));
    outer.addLine(Point(50, 48), Point(66, 10));
    outer.addLine(Point(66, 10), Point(90, 10));
    outer.addLine(Point(90, 10), Point(62, 69));
    outer.addLine(Point(62, 69), Point(92, 130));
    outer.addLine(Point(92, 130), Point(68, 130));
    outer.addLine(Point(68, 130), Point(50, 91));
    outer.addLine(Point(50, 91), Point(32, 130));
    outer.addLine(Point(32, 130), Point(8, 130));
    outer.addLine(Point(8, 130), Point(38, 69));
    outer.addLine(Point(38, 69), Point(10, 10));

    letter.addContour(outer);
    return letter;
}

// Y
Glyph GlyphFactory::createY()
{
    Glyph letter('Y', 100, 140);
    Contour outer;

    outer.addLine(Point(8, 10), Point(32, 10));
    outer.addLine(Point(32, 10), Point(50, 52));
    outer.addLine(Point(50, 52), Point(68, 10));
    outer.addLine(Point(68, 10), Point(92, 10));
    outer.addLine(Point(92, 10), Point(60, 76));
    outer.addLine(Point(60, 76), Point(60, 130));
    outer.addLine(Point(60, 130), Point(40, 130));
    outer.addLine(Point(40, 130), Point(40, 76));
    outer.addLine(Point(40, 76), Point(8, 10));

    letter.addContour(outer);
    return letter;
}

// Z
Glyph GlyphFactory::createZ()
{
    Glyph letter('Z', 100, 140);
    Contour outer;

    outer.addLine(Point(15, 10), Point(85, 10));
    outer.addLine(Point(85, 10), Point(85, 27));
    outer.addLine(Point(85, 27), Point(39, 110));
    outer.addLine(Point(39, 110), Point(85, 110));
    outer.addLine(Point(85, 110), Point(85, 130));
    outer.addLine(Point(85, 130), Point(12, 130));
    outer.addLine(Point(12, 130), Point(12, 113));
    outer.addLine(Point(12, 113), Point(58, 30));
    outer.addLine(Point(58, 30), Point(15, 30));
    outer.addLine(Point(15, 30), Point(15, 10));

    letter.addContour(outer);
    return letter;
}
