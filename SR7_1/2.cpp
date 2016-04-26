#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int N, i;
	float y, k;
	cout<<"Vvedit N:";
	cin>>N;
    if(N>0)
    {
	k = 3;
	y = 1.0 / k;
	for (i = 2; i <= N; i=i+1)
		{ 
			if (i % 2 == 0)
			{
				y = y + ((k + 1) / k);
				cout<<"PAIR y="<<y<<endl;
			}
			else if (i % 2 != 0)
			{
				//printf("\n%f+(%f/(%f+1))  >>  %f+%f  >>  %f\n\n", y, k, k, y, k/(k+1), y+0.75);
				y = y + (k / (k + 1));
				cout<<"NOT PAIR y="<<y<<endl;
			}
			k = k + 1;
		}
	cout<<"y="<<y<<endl;
    }
    else
    {
        cout<<"Error"<<endl;
    }
	return 0; 
}