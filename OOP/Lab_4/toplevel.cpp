#include "toplevel.h"
using namespace std;
toplevel::toplevel()
{
    toplevelA=0;
    cout<<"Hello from toplevel()"<<endl;
}
toplevel::toplevel(int a){
    toplevelA=a;
    cout<<"Hello from toplevel(a)"<<endl;
}
toplevel::~toplevel()
{
    cout<<"Goodbye from toplevel()"<<endl;
}

