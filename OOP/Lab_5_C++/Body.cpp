//
// Created by Den on 12.11.2016.
//

#include "Body.h"
using namespace std;
Body::Body(){
    radIn=1;
    radOut=0.5;
    faceNum=5;
    p=3;
}
Body::Body(double radiusInner, double radiusOuter, double facePerVertexQuantity, double edgePerVertexQuantity, double edgeLength){
    radIn=radiusInner;
    radOut=radiusOuter;
    faceNum=facePerVertexQuantity;
    p=edgePerVertexQuantity;
    a=edgeLength;
}
/*double Body::area(){
    return (a/2.0)*(a/2.0)*faceNum*p*1/tan(3.14/p);
}
double Body::volume(){
    return radIn*radIn*p*tan(3.14/p)*radIn*1/3.0;
}*/
void Body::getInfo() {
    cout<<"Area: "<<area()<<endl<<"Volume: "<<volume()<<endl<<"--.-.-.-.-.--"<<endl;
}
//Body::~Body() {
//    cout<<"G'bye!"<<endl;
//}