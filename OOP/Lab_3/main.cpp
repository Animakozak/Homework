#include "Point.h"
#include "Circle.h"
using namespace std;

int main() {
    Point oneCenter;
    Point onePoint;
    oneCenter.setPointCoordinates(0,2);
    onePoint.setPointCoordinates(0,6);
    Circle one;
    one.initCircle(oneCenter,onePoint);
    cout<<one.getCircleLength()<<" "<<one.getCircleSquare()<<endl;
    return 0;
}