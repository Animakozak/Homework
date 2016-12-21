#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include <cmath>
class Circle : Point
{
public:
    Circle();
    Circle(float a, float b, float c, float d);
    float getCircleRadius();
    void setCircleRadius();
    void initCircle(float circleCenterX, float circleCenterY, float circlePointX, float circlePointY);
    float getCircleLength();
    float getCircleSquare();
    void getCircleStats_MSG();
    void getCircleLength_MSG();
    void getCircleSquare_MSG();
    void view();
private:
    float x1;
    float y1;
//    float circleRadius;
    const float Pi=3.14;
};

#endif // CIRCLE_H
