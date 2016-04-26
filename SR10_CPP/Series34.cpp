#include <iostream>
using namespace std;
#define K 3
#define N 4
int main(){
    int i, b, sum, resul, TF;
    int A[K][N];
    resul = 0;
    for(i=0; i<K; i++){
        for(b=0, sum = 0, TF=0, resul=0;b<N;b++){
            cout<<"Vvedite element\n";
            cin>>A[i][b];
            sum = sum + A[i][b];
            if(A[i][b]==2){
                resul = sum;
                TF=1;
            }
        }
        if(TF==1){resul = sum;}
        if(resul!=0){
            cout<<"Summa elementov nabora: "<<resul<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
        }
    return 0;
}