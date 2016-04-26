#include <iostream>
using namespace std;
#define N 10
int main(){
    int ar[N];
    int max=-99999;
    int output=0;
    for(int i=0; i<N; i++){
        cout<<"Enter value: ";
        cin>>ar[i];
        if(ar[i]>=max){
            max=ar[i];
            output=0;
        }
        else{
            output++;
        }
    }
    cout<<endl<<"output="<<output<<endl;
    return 0;
}