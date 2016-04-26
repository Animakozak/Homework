#include <iostream>
#include <array>
using namespace std;
int main(){
    int i, j, k;
    array <int,10> a;
    for(i=0;i<a.size();i++){
        cin>>a[i];
    }
    for(int t = 0; t < 2; t++) {
        for(j=0;j<a.size()-1;j++){
            for(i=j+1;i<a.size()-1;i++){
                if(a[j]==a[i] && i != j){
                    for(k = i; k<a.size()-1;k++){
                        a[k]=a[k+1];
                    }
                }
            }
        }
    }
    for (i = 0; i < a.size(); i++) {
        for (int j = i+1; j < a.size(); j++) {
        if (a[i]==a[j]) {
            a[j] = 0;
            }
        }
    }
    cout<<"--"<<endl;
    for(j=0;j<a.size();j++){
        cout<<a[j]<<endl;
    }
    return 0;
}