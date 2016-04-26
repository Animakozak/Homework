#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    int i, n;
	float x, y, k;
	cout<<"Vvedit n, x"<<endl;
	cin>>n>>x;
	//x = x*3.14 / 180;
    if(n>0)
    {
        k = sin(x); //sin of input
        //cout<<"k1="<<k;
        y = k;
        if(n==1)
        {
            cout<<"y="<<y<<endl;
        }
        else
        {
            for(i=2;i<=n;i++)
            {
                k=sin(k);
                //printf("k2=%f", k); //sin temporary
                y=y+k;
                cout<<"y="<<y<<endl;
            }
            cout<<endl<<endl<<"y="<<y;
        }
    }
    else
    {
        cout<<"Error"<<endl;
    }
     return 0;
}