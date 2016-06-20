#include <iostream>
#include <array>
using namespace std;
int main(){
    int i, k;
    array <float, 5> a;
    for(i=0;i<a.size();i++){
        cin>>a[i];
    }
    for(i=0;i<a.size();i++){
        if(a[i]>0){
            for(k=a.size()-1;k>i;k--){
                a[k]=a[k-1];
            }
            a[i]=0;
            cout<<"-Promizkoviy etap-"<<endl;
            for(int l=0;l<a.size();l++){
                cout<<a[l]<<endl;
            }
            i++;
        }
    }
    cout<<"-Kinzeviy rezultat-"<<endl;
    for(i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
