#include <iostream>
#define N 5
using namespace std;
int main(){
    int i, min, index_min;
    int ar[N];
    for(i=0;i<N;i++){
        cout<<"4.Vvedit chyslo: ";
        cin>>ar[i];
    }
    min=99999;
    for(i=0;i<N;i++){
        if(min>ar[i]){
            min=ar[i];
            index_min=i;
        }
    }
    cout<<index_min<<endl;
    return 0;
}