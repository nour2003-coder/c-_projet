#include "Contour.h"

Contour::Contour(bool isHole)
    : hole(isHole)
{
}


void Contour::addCurve(const BezierCurve& curve)
{
    segments.push_back(curve);
}


void Contour::addLine(const Point& start, const Point& end)
{
    Point control = Point::midpoint(start, end);

    segments.emplace_back(start, control, end);
}


std::vector<Point> Contour::sample(int numberOfSegments) const
{
    std::vector<Point> points;

    if (numberOfSegments < 1)
    {
        return points;
    }

    for (const BezierCurve& curve : segments)
    {
        std::vector<Point> curvePoints =
            curve.sample(numberOfSegments);

        std::size_t startIndex = points.empty() ? 0 : 1;

        for (std::size_t i = startIndex;
             i < curvePoints.size(); ++i)
        {
            points.push_back(curvePoints[i]);
        }
    }

    return points;
}

bool Contour::isHole() const
{
    return hole;
}
