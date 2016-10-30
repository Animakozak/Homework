#include "Point.h"
Point::Point(){
  x=0;
  y=0;
}
Point::Point(float a, float b){
    x=a;
    y=b;
}
void Point::setPointCoordinate_X(float input) {
    x=input;
}
void Point::setPointCoordinate_Y(float input) {
    y=input;
}