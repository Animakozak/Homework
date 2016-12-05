//
// Created by Den on 12.11.2016.
//

#ifndef LAB_5_C_PARALLELEPIPED_H
#define LAB_5_C_PARALLELEPIPED_H

#include "Body.h"

class Parallelepiped: public Body {
public:
    Parallelepiped();
    Parallelepiped(double edgeA,double edgeB,double edgeC, double height);
    double a;
    double b;
    double c;
    double h;
    double volume();
    double area();
    double baseArea(double edge, double height);
};


#endif //LAB_5_C_PARALLELEPIPED_H
