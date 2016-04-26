#include <iostream>
using namespace std;
float CircleS(float r){
    float pi=3.14, S;
    S=pi*r;
    return S;
}
int main()
{
    float r, S;
    cout<<"Vvedit r: ";
    cin>>r;
    if(r>0){
    S=CircleS(r);
    cout<<"Ploshcha = "<<S;
    }
    else cout<<"Error"<<endl;
	return 0;
}
