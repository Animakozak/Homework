#include <iostream>
#include <array>
using namespace std;
int main(){
    array <float,10> a;
    int k;
    cin>>k;
    for(int i=0;i<a.size();i++){
        cout<<"Vvedit chyslo: ";
        cin>>a[i];
    }
    for(int i=0;i<a.size()-k;i++){
        a[i]=a[i+k];
    }
    for(int i=a.size()-k;i<a.size();i++){
        a[i]=0;
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    return 0;
}