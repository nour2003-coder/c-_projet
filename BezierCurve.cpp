#include "BezierCurve.h"
BezierCurve::BezierCurve(const Point& start,
                         const Point& control,
                         const Point& end)
    
{
    p0=start;
    p1=control;
    p2=end;
}

Point BezierCurve::evaluate(double t) const
{
   
    Point a = Point::interpolate(p0, p1, t);
    Point b = Point::interpolate(p1, p2, t);

    return Point::interpolate(a, b, t);
}
std::vector<Point> BezierCurve::sample(int numberOfSegments) const
{
    std::vector<Point> points;

    if (numberOfSegments < 1)
    {
        return points;
    }

    for (int i = 0; i <= numberOfSegments; ++i)
    {
        double t = static_cast<double>(i) / numberOfSegments;
        points.push_back(evaluate(t));
    }

    return points;
}