#include <iostream>
class Point{
public:
    Point();
    Point(int x, int y);
protected:
  int x;
  int y;
  void setPointCoordinates(int a, int b);
};
