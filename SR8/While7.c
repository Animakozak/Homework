#include <stdio.h>
#include <math.h>
int main(){
    int N, K, i;
    printf("Vvedit N (N>0): ");
    scanf("%d", &N);
    if(N>0){
        i=N;
        K=N;
        while(K>=N){
            i=i-1;
            K=i*i;
        //printf("K=%d\n", i); //Промежуточный результат
        }
        printf("K=%d\n", i);
    }
    else{
    printf("Error");
    }
return 0;
}