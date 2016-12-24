#include <iostream>
#include <stdlib.h>
#include "Body.h"
#include "Parallelepiped.h"
#include "Ball.h"

using namespace std;

int main() {
/*    Body MultiPoly(1,2,4,4,2);/*Instancing abstract class Body*/
/*    MultiPoly.getInfo();*/
    Parallelepiped foo(2,4,6,3);
    foo.getInfo();
    Ball bar(4);
    bar.getInfo();
    cout<<"-----Pointers-----"<<endl;
//    Body *i, *j, *k;/*pre-virtual*/
///*    i = new Body(1,2,4,4,2);/*"Instancing abstract class"*/
//    j = new Parallelepiped(2,4,6,3); /*pre-virtual*/
//    k = new Ball(4); /*pre-virtual*/
///*    i->getInfo(); /*We can't create i*/
//    j->getInfo(); /*pre-virtual*/
//    k->getInfo(); /*pre-virtual*/
    Body *arr[10];
    for(int o=0;o<10;o++){
        if(o%2==0){
            if((-10 + rand() % 20)%2==0){
                arr[o]=new Parallelepiped(2,4,6,3);
            }
            else{
                arr[o]=new Parallelepiped(2,4,3,1);
            }
        }
        else{
            if((-10 + rand() % 20)%2==0){
                arr[o]=new Ball(2);
            }
            else{
                arr[o]=new Ball(3);
            }
        }
    }
    for(int o=0;o<10;o++){
        if(o%2==0) cout<<"Parallelepiped:"<<endl;
        else cout<<"Ball:"<<endl;
        arr[o]->getInfo();
    }
    return 0;
}