//
// Created by Den on 12.11.2016.
//

#include "Body.h"

Body::Body(){
    radIn=1;
    radOut=0.5;
    faceNum=5;
    p=3;
}
Body::Body(double radiusInner, double radiusOuter, double faceQuantity, double edgeQuantity, double edgeLength){
    radIn=radiusInner;
    radOut=radiusOuter;
    faceNum=faceQuantity;
    p=edgeQuantity;
    a=edgeLength;
}
double Body::bodyArea(){
    return (a/2.0)*(a/2.0)*faceNum*p*1/tan(3.14/p);
}
double Body::bodyVolume() {
    return radIn*radIn*p*tan(3.14/p)*radIn*1/3.0;
}