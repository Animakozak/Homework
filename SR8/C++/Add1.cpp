#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float a;
    cin>>a;
    while(a/2.0>0){
        a=a/2.0;
        cout<<"Float a="<<fixed<<setw(102)<<setprecision(100)<<a<<endl;
    }
    cout<<"Float a="<<fixed<<setw(102)<<setprecision(100)<<a;
    return 0;
}