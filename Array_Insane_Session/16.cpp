#include <iostream>
using namespace std;
#define N 5
int main(){
    int ar[N];
    int min=99999;
    int output=0;
    for(int i=0; i<N; i++){
        cout<<"16.Enter value: ";
        cin>>ar[i];
    }
    for(int i=N-1; i>=0; i--){
        if(ar[i]<=min){
            min=ar[i];
            output=0;
        }
        else{
            output++;
        }
    }
    cout<<endl<<"output="<<output<<endl;
    return 0;
}