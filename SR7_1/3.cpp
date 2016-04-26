#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float y, y2, x;
	int n, sign;
    cout<<"Vvedite N, X"<<endl;
	cin>>n>>x;
    if(n>0)
    {
    sign = 1;
	y = (2*n+1)+x*x/(2*n-1);
	while(n>0)
	{
        y = sign*(2*n-1) + x*x / y;
		cout<<"y="<<y<<endl;
        sign = -sign;
        n--;
	}
        y=x/y;
        if(n%2==0)
        {
            y=-y;
            cout<<"y="<<y<<endl;
        }
        else
        {
            cout<<"y="<<y<<endl;
        }
	y2 = tan(x);
	cout<<"y2="<<y2;
    }
    else
    {
        cout<<"Error"<<endl;
    }
    return 0;
}