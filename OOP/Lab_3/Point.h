#ifndef POINT_H
#define POINT_H
#include <iostream>
class Point{
public:
    Point();
    Point(int x, int y);
    void setPointCoordinates(int a, int b);
//private:
    int x;
    int y;
};

#endif
