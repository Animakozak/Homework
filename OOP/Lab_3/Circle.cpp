#include "Circle.h"
using namespace std;
Circle::Circle(){
    circleCenter.x=0;
    circleCenter.y=0;
    circleRadius=0;
};
Circle::Circle(Point center, float radius){}
Circle::setCircleRadius(Point circlePoint){
    return sqrt(pow((circlePoint.x-circleCenter.x),2)+pow((circlePoint.y-circleCenter.y),2));
    }
Circle::initCircle(Point center, Point capPoint){
    circleCenter=center;
    circleRadius=setCircleRadius(capPoint);
}
Circle::getCircleLength(){
    return circleRadius*2*Pi;
}
Circle::getCircleSquare(){
    return circleRadius*circleRadius*Pi;
}
