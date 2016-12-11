#include "base2.h"
using namespace std;
base2::base2()
{
    base2A=0;
    cout<<"Hello from base2()"<<endl;
}
base2::base2(int a){
    base2A=a;
    cout<<"Hello from base2(a)"<<endl;
}
base2::~base2()
{
    cout<<"Goodbye from base2()"<<endl;
}

