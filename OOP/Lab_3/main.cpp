#include "Point.h"
#include "Circle.h"
using namespace std;

int main() {
    int constructor;
    float a,b,c,d;
    cout<<"Would you like to create points with methods? Type 1. Else uses constructors"<<endl;
    cin>>constructor;
    cout<<"Enter circleCenterX, circleCenterY, circlePointX, circlePointY"<<endl;
    cin>>a>>b>>c>>d;
    if(constructor==1){
        Circle O1;
        O1.initCircle(a,b,c,d);
        O1.getCircleStats_MSG();
        O1.getCircleLength_MSG();
        O1.getCircleSquare_MSG();
    }
    else{
        Point circleCenter(a, b);
        Circle circlePoint(c, d);
        circlePoint.getCircleStats_MSG();
        circlePoint.getCircleLength_MSG();
        circlePoint.getCircleSquare_MSG();
    }
    return 0;
}