#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N, d, N1;
    cout<<"Vvedit N:";
    cin>>N;
    if(N>0){
        N1=0;
        cout<<"Chyslo, prochytane z prava na livo: ";
        while(N>0){
            d = N % 10;
            N1 = 10*N1+d;
            cout<<N1;
            N = N / 10;
        }
    }
    else{
        cout<<"Error"<<endl;
    }
    return 0;
}
