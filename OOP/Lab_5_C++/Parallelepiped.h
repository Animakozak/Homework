//
// Created by Den on 12.11.2016.
//

#ifndef LAB_5_C_PARALLELEPIPED_H
#define LAB_5_C_PARALLELEPIPED_H
#include "Body.h"

class Parallelepiped: Body {
    Parallelepiped();
    Parallelepiped(double a,double b,double c, double d);
    double a;
    double b;
    double c;
    double d;
    double volume();
    double area();
};


#endif //LAB_5_C_PARALLELEPIPED_H
