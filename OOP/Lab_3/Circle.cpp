#include "Circle.h"
using namespace std;
Circle::Circle():Point(){
    x1=0;
    y1=0;
}
Circle::Circle(float a, float b, float c, float d):Point(a,b){
    x1=c;
    y1=d;
}
float Circle::getCircleRadius(){
    return sqrt(pow((x1-x),2)+pow((y1-y),2));
}
void Circle::view(){
    cout<<"("<<x1<<";"<<y1<<")";
}
float Circle::getCircleLength(){
    return getCircleRadius()*2*Pi;
}
float Circle::getCircleSquare(){
    return getCircleRadius()*getCircleRadius()*Pi;
}
void Circle::getCircleStats_MSG() {
    cout<<"Circle Center Coordinates are: ";
    Point::view();
    cout<<"Circle point Coordinates are: ";
    view();
    cout<<"Circle Radius is "<<getCircleRadius()<<endl;
}
void Circle::getCircleLength_MSG(){
    cout<<"Circle length is "<<getCircleLength()<<endl;
}
void Circle::getCircleSquare_MSG(){
    cout<<"Circle square is "<<getCircleSquare()<<endl;
}
