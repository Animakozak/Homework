#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int A, B;
    cout<<"Vvedit A, B (A>B, A>0, B>0)"<<endl;
    cin>>A>>B;
    if (A>B && A>0 && B>0)
    {
        int rest = A - B;
        while (rest>=B){
        rest=rest-B;
        }
        cout<<"rest="<<rest<<endl;
    }
    else{
        cout<<"Error"<<endl;
    }
    return 0;
}