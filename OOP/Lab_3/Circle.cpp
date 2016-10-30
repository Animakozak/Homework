#include "Circle.h"
using namespace std;
Circle::Circle(){
    circleCenter.x=0;
    circleCenter.y=0;
    circleRadius=0;
};
Circle::Circle(Point center, float radius){}
float Circle::setCircleRadius(Point circlePoint){
    return sqrt(pow((circlePoint.x-circleCenter.x),2)+pow((circlePoint.y-circleCenter.y),2));
    }
void Circle::initCircle(Point center, Point capPoint){
    circleCenter=center;
    circleRadius=setCircleRadius(capPoint);
}
float Circle::getCircleLength(){
    return circleRadius*2*Pi;
}
float Circle::getCircleSquare(){
    return circleRadius*circleRadius*Pi;
}
void Circle::getCircleLength_MSG(){
    cout<<"Circle length is "<<getCircleLength()<<endl;
    return;
}
void Circle::getCircleSquare_MSG(){
    cout<<"Circle square is "<<getCircleSquare()<<endl;
    return;
}
