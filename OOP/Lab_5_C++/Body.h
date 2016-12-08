//
// Created by Den on 12.11.2016.
//

#ifndef LAB_5_C_BODY_H
#define LAB_5_C_BODY_H
#include <cmath>
#include <iostream>

class Body {
public:
    Body();
    Body(double radiusInner, double radiusOuter, double facePerVertexQuantity, double edgePerVertexQuantity, double edgeLength);
    virtual ~Body() {};
    double radIn;
    double radOut;
    double faceNum;
    double p;
    double a;
//    double volume();
//    double area();
    virtual double volume()=0;
    virtual double area()=0;
    void getInfo();
};


#endif //LAB_5_C_BODY_H
