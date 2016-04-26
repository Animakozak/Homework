#include <stdio.h>
#define K 3
#define N 4
int main(){
    int i, b, sum, resul, TF;
    int A[K][N];
    resul = 0;
    for(i=0; i<K; i++){
        for(b=0, sum = 0, TF=0, resul=0;b<N;b++){
            printf("Vvedite element\n");
            scanf("%d", &A[i][b]);
            sum = sum + A[i][b];
            if(A[i][b]==2){
                resul = sum;
                TF=1;
            }
        }
        if(TF==1){resul = sum;}
        if(resul!=0){
            printf("Summa elementov nabora: %d\n", resul);
        }
        else{
            printf("0");
        }
        }
    return 0;
}