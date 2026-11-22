#ifndef BEZIERCURVE_H
#define BEZIERCURVE_H
#include <vector>
#include "Point.h"
class BezierCurve
{
private:
    Point p0;
    Point p1;
    Point p2;

public:

    BezierCurve(const Point& start,
                const Point& control,
                const Point& end);
    Point evaluate(double t) const;
     std::vector<Point> sample(int numberOfSegments) const;
};

#endif