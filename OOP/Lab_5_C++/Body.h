//
// Created by Den on 12.11.2016.
//

#ifndef LAB_5_C_BODY_H
#define LAB_5_C_BODY_H
#import <cmath>

class Body {
public:
    Body();
    Body(double radiusInner, double radiusOuter, double faceQuantity, double edgeQuantity, double edgeLength);
    double radIn;
    double radOut;
    double faceNum;
    double p;
    double a;
    double volume();
    double area();
};


#endif //LAB_5_C_BODY_H
