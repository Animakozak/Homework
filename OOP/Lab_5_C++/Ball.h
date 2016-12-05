//
// Created by Den on 12.11.2016.
//

#ifndef LAB_5_C_BALL_H
#define LAB_5_C_BALL_H


#include "Body.h"

class Ball : public Body {
public:
    Ball();
    Ball(double radius);
    double r;
    double area();
    double volume();
};


#endif //LAB_5_C_BALL_H
