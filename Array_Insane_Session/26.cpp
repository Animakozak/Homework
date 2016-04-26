#include <iostream>
using namespace std;
#define N 10
int main(){
    int ar[N];
    for(int i=0; i<N; i++){
        cout<<"26.Enter value: ";
        cin>>ar[i];
    }
    int len=0;
    int max_len=-1;
    for(int t=1;t<N;t++){
        if(ar[t]%2!=0) len++;
        else{
            if(max_len<len) max_len=len;
            len=0;
        }
    }
    cout<<max_len<<endl;
    return 0;
}