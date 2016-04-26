#include <iostream>
#define N 5
using namespace std;
int main(){
    int i, min;
    int ar[N];
    min=9999;
    for(i=0;i<N;i++){
        cout<<"12.Vvedit chyslo: ";
        cin>>ar[i];
        if(ar[i]>0 && ar[i]<min){
            min=i;
        }
    }
    if(min==9999) cout<<"0";
    else cout<<"min="<<min<<endl;
    return 0;
}