#include "base.h"
using namespace std;
base::base()
{
    baseA=0;
    cout<<"Hello from base()"<<endl;
}
base::base(int a){
    baseA=a;
    cout<<"Hello from base(a)"<<endl;
}
base::~base()
{
    cout<<"Goodbye from base"<<endl;
}

