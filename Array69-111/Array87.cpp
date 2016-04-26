#include <iostream>
#include <array>
using namespace std;
int main(){
    array <float,5> a={3,1,6,9,12};
    int i;
    cout<<"Vvedit 1iy element: ";
    cin>>a[0];
    if(a[0]<=a[1]){
        for(i=0;i<a.size();i++){
            cout<<a[i]<<endl;
        }
    }
    else if(a[0]>=a[a.size()-1]){
        for(i=0;i<a.size()-1;i++){
            swap(a[i],a[i+1]);
        }
        for(i=0;i<a.size();i++){
            cout<<a[i]<<endl;
        }
    }
    else{
        float variable=a[0];
        int temp=0;
        i=1;
        while(a[0]>a[i]){
            i++;
        }
        temp=i;
        for(i=0;i<temp-1;i++){
            swap(a[i],a[i+1]);
        }
        for(i=0;i<a.size();i++){
            cout<<a[i]<<endl;
        }
    }
    return 0;
}