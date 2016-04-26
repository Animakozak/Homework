//7
#include <iostream>
using namespace std;
int main(){
    int n, v;
    float k, a;
    cout<<"Vvedite chyslo i pokazatel stepenya"<<endl;
    cin>>a>>n;
    v = n;
    k = 1;
    if(a == 0 && n < 0){
        k=0;
    }
    else{
        if(n<0){
            n=-n;
        }
        while(n){
            if (n & 1){
                k*=a;
            }
            a*=a;
            n>>=1;
        }
        if(v<0){
            k=1.0/k;
        }
    }
    cout<<"a="<<k<<endl;
    return 0;
}