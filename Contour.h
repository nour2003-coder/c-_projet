#ifndef CONTOUR_H
#define CONTOUR_H

#include "BezierCurve.h"
#include <vector>

class Contour
{
private:
    std::vector<BezierCurve> segments;
    bool hole;

public:
explicit Contour(bool isHole = false);

    void addCurve(const BezierCurve& curve);
    void addLine(const Point& start, const Point& end);


    std::vector<Point> sample(int numberOfSegments) const;
    bool isHole() const;
};

#endif