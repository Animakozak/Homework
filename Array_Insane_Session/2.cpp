#include <iostream>
using namespace std;
#define N 4
int main(){
    int i;
    float S, Smin, a, b, square[N];
    for(i=0;i<N;i++){
        cout<<"2.Vvedit a,b:";
        cin>>a>>b;
        S=a*b;
        square[i]=S;
    }
    Smin=square[0];
    for(i=0;i<N;i++){
        if(Smin>=square[i+1]){
            Smin=square[i+1];
        }
    }
    cout<<Smin<<endl;
    return 0;
}
