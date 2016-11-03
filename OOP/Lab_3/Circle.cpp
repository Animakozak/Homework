#include "Circle.h"
using namespace std;
Circle::Circle():Point(){
    x1=0;
    y1=0;
    setCircleRadius();
}
Circle::Circle(float a, float b, float c, float d):Point(a,b){
    x1=c;
    y1=d;
    setCircleRadius();
}
void Circle::setCircleCoordinate_X(float a){
    x1=a;
}
void Circle::setCircleCoordinate_Y(float b){
    y1=b;
}
float Circle::getCircleRadius(){
    return sqrt(pow((x1-x),2)+pow((y1-y),2));
}
void Circle::initCircle(float circleCenterX, float circleCenterY, float circlePointX, float circlePointY){
    setPointCoordinate_X(circleCenterX);
    setPointCoordinate_Y(circleCenterY);
    setCircleCoordinate_X(circlePointX);
    setCircleCoordinate_Y(circlePointY);
    setCircleRadius();
}
void Circle::setCircleRadius(){
    circleRadius=getCircleRadius();
}
float Circle::getCircleLength(){
    return circleRadius*2*Pi;
}
float Circle::getCircleSquare(){
    return circleRadius*circleRadius*Pi;
}
void Circle::getCircleStats_MSG() {
    cout<<"Circle Center Coordinates are: ("<<x<<";"<<y<<")"<<endl<<"Circle point Coordinates are: ("<<x1<<";"<<y1<<")"<<endl<<"Circle Radius is "<<circleRadius<<endl;
}
void Circle::getCircleLength_MSG(){
    cout<<"Circle length is "<<getCircleLength()<<endl;
    return;
}
void Circle::getCircleSquare_MSG(){
    cout<<"Circle square is "<<getCircleSquare()<<endl;
    return;
}
