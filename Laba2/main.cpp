#include <iostream>
#include <cmath>
#define eps 0.0001
using namespace std;
#define eps 0.1;
float Rekursivna(float x, int i){
    i++;
    float l;
    l=pow(x,i);
    if(fabs(l/i)<eps) return 0;
    else return Rekursivna(x,i,eps)+l/i;
}
float Iteratyvna(float x, int i, float eps){
    float fx, l;
    fx=x;
    l=pow(x,i);
    while (!(fabs(l/i)<eps)){
        i++;
        fx=fx+l/i;
    }
    return fx;
}
float Bibliotechna(float x){
    return log(1-x);
}
int main(){
    float a, b, x, eps;
    cout<<"Vvedit oblast tabulyacii: [a;b] ta epsilon\n";
    cin>>a>>b>>eps;
    x=a;
    while(x<b){
        int i=1;
        cout<<"1.F("<<x<<")="<<-Rekursivna(x,i,eps)<<endl;
        cout<<"2.F("<<x<<")="<<-Iteratyvna(x,i,eps)<<endl;
        cout<<"3.F("<<x<<")="<<Bibliotechna(x)<<endl<<endl<<endl;
        x=x+n;
    }
    return 0;
}