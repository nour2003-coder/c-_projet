#include "Point.h"

Point::Point(double xCoord,double yCoord){
    x=xCoord;
    y=yCoord;
}
Point Point::midpoint(const Point& a, const Point& b)
{
   return interpolate(a, b, 0.5);
}
/**
 * @brief Interpolates between two points.
 */
Point Point::interpolate(const Point& a, const Point& b, double t)
{
    return Point(
        (1.0 - t) * a.x + t * b.x,
        (1.0 - t) * a.y + t * b.y
    );
}