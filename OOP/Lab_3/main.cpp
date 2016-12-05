#include "Point.h"
#include "Circle.h"
using namespace std;

int main() {
    float a,b,c,d;
    cout<<"Enter circleCenterX, circleCenterY, circlePointX, circlePointY"<<endl;
    cin>>a>>b>>c>>d;
        Circle circlePoint(a, b, c, d);
        circlePoint.getCircleStats_MSG();
        circlePoint.getCircleLength_MSG();
        circlePoint.getCircleSquare_MSG();
    return 0;
}