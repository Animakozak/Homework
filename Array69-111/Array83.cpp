//Array 83
#include <iostream>
#include <array>
using namespace std;
int main() {
    int i;
    float temp;
    array <float,5> a;
    for(i=0;i<a.size();i++){
        cout<<"Vvedit "<<i+1<<" element: ";
        cin>>a[i];
    }
    temp=a[a.size()];
    cout<<temp<<endl;
    for(i=a.size()-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=temp;
    for(i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    return 0;
}