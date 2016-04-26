#include <iostream>
#define N 5
using namespace std;
int main(){
    int i, min, max, index_min, index_max;
    int ar[N];
    index_max=0;
    index_min=0;
    for(i=0;i<N;i++){
        cout<<"Vvedit chyslo: ";
        cin>>ar[i];
    }
    for(i=0, max=ar[0], min=ar[0];i<N;i++){
        if(min>=ar[i]){
            min=ar[i];
            index_min=i;
        }
        if(ar[i]>max){
            max=ar[i];
            index_max=i;
        }
    }
    cout<<"min="<<index_min+1<<endl;
    cout<<"max="<<index_max+1<<endl;
    return 0;
}