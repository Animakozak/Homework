#ifndef POINT_H
#define POINT_H
#include <iostream>
class Point{
public:
    Point();
    Point(float a, float b);
    void view();
    // void setPointCoordinate_X(float input);
    // void setPointCoordinate_Y(float input);
protected:
  float x;
  float y;
};
#endif
