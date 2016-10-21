#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include <cmath>
class Circle : Point
{
public:
    Circle();
    Circle(Point center, float radius);
    void initCircle(Point center, Point capPoint);
    float getCircleLength();
    float getCircleSquare();
    float setCircleRadius(Point circlePoint);
    void getCircleLength_MSG();
    void getCircleSquare_MSG();
private:
    float circleRadius;
    const float Pi=3.14;
    Point circleCenter;
};

#endif // CIRCLE_H
