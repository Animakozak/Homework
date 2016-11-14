#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"
#include "A1.h"
#include "base.h"
#include "base2.h"
#include "level1.h"
#include "level2.h"
#include "toplevel.h"
using namespace std;

int main(){
    cout<<"Calling C"<<endl;
    C tester1;
    tester1.b=1.2;
    cout<<"float="<<tester1.b<<endl;
    tester1.B::b=1;
    cout<<"int="<<tester1.B::b<<endl;
//    cout<<"Calling A"<<endl;
//    A tester2a;
//    cout<<"Calling B"<<endl;
//    B tester2b;
//    cout<<"Calling A1"<<endl;
//   A1 tester3;
//    cout<<"Calling one"<<endl;
//    toplevel one;
    return 0;
}
