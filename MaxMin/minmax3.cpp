#include <iostream>
using namespace std;
#define N 4
int main(){
    int i;
    float P, Pmax, a, b, per[N];
    for(i=0;i<N;i++){
        cout<<"Vvedit a,b:";
        cin>>a>>b;
        if(a>0 && b>0){
        P=2*(a+b);
        per[i]=P;
        Pmax=per[0];
        }
        else{
            cout<<"Error: negative value"<<endl;
            i--;
        }
    }
    for(i=0;i<N;i++){
        if(Pmax<=per[i+1]){
            Pmax=per[i+1];
        }
    }
    cout<<Pmax<<endl;
    return 0;
}