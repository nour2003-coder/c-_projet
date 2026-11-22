#ifndef POINT_H
#define POINT_H

struct Point{
    double x;
    double y;
    Point(double xCoord = 0.0, double yCoord = 0.0);
    static Point midpoint(const Point& a, const Point& b);
    static Point interpolate(const Point& a, const Point& b, double t);
};

#endif