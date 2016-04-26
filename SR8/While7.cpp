#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N, K, i;
    cout<<"Vvedit N (N>0): ";
    cin>>N;
    if(N>0){
        i=N;
        K=N;
        while(K>=N){
            i=i-1;
            K=i*i;
        //printf("K=%d\n", i); //Промежуточный результат
        }
        cout<<"K="<<i<<endl;
    }
    else{
    cout<<"Error"<<endl;
    }
return 0;
}