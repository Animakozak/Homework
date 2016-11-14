#include "level2.h"
using namespace std;
level2::level2()
{
    level2A=0;
    cout<<"Hello from level2()"<<endl;
}
level2::level2(int a){
    level2A=a;
    cout<<"Hello from level2(a)"<<endl;
}
level2::~level2()
{
    cout<<"Goodbye from level2()"<<endl;
}

