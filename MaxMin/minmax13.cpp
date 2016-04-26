#include <iostream>
using namespace std;
#define N 5
int main(){
    int ar[N];
    int output=0;
    for(int i=N-1; i>=0; i--){
        cout<<"Enter value: ";
        cin>>ar[i];
        if(ar[i]%2!=0)
            output=ar[i];
    }
    cout<<endl<<"output="<<output<<endl;
    return 0;
}