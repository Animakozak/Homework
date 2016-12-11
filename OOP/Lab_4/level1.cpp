#include "level1.h"
using namespace std;
level1::level1()
{
    level1A=0;
    cout<<"Hello from level1()"<<endl;
}
level1::level1(int a){
    level1A=a;
    cout<<"Hello from level1(a)"<<endl;
}
level1::~level1()
{
    cout<<"Goodbye from level1(a)"<<endl;
}

