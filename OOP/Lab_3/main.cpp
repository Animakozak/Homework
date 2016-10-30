#include "Point.h"
#include "Circle.h"
#define N 3
using namespace std;

int main() {
    Circle CirclePoint[N];
    for(int i=0; i<N; i++){
        float a,b,c,d;
        cout<<"Enter circleCenterX, circleCenterY, circlePointX, circlePointY"<<endl;
        cin>>a>>b>>c>>d;
        CirclePoint[i].initCircle(a,b,c,d);
        CirclePoint[i].getCircleStats_MSG();
        CirclePoint[i].getCircleLength_MSG();
        CirclePoint[i].getCircleSquare_MSG();
    }
    return 0;
}