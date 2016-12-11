//
// Created by Den on 12.11.2016.
//

#include "Ball.h"
Ball::Ball() {
    r=0;
}
Ball::Ball(double radius) {
    r=radius;
}
double Ball::area() {
    return r*r*4*3.14;
}
double Ball::volume() {
    return 4.0/3.0*r*r*r*3.14;
}