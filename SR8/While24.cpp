#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N, f1, f2, tmp;
    f1 = 1;
    f2 = 1;
    cout<<"Vvedit N:";
    cin>>N;
    if(N>1){
        while(N>f2){
            tmp = f2;
            f2 = f1 + f2;
            f1 = tmp;
        }
        if (N==f2){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    else{
        cout<<"Error"<<endl;
    }
    return 0;
}