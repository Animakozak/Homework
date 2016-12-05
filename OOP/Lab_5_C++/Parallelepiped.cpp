//
// Created by Den on 12.11.2016.
//

#include "Parallelepiped.h"
Parallelepiped::Parallelepiped() {
    a=0;
    b=0;
    c=0;
    h=0;
}
Parallelepiped::Parallelepiped(double edgeA,double edgeB,double edgeC, double height) {
    a=edgeA;
    b=edgeB;
    c=edgeC;
    h=height;
}
double Parallelepiped::baseArea(double edge, double height) {
    return edge*height;
}
double Parallelepiped::area() {
    return 2*(baseArea(a,h))+2*(a*c+b*c);
}
double Parallelepiped::volume(){
    return baseArea(a, h)*c;
}