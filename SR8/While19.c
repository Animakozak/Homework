#include <stdio.h>
#include <math.h>
int main(){
    int N, d, N1;
    printf("Vvedit N:");
    scanf("%d", &N);
    if(N>0){
        N1=0;
        printf("Chyslo, prochytane z prava na livo: %d", N1);
        while(N>0){
            d = N % 10;
            N1 = 10*N1+d;
            printf("%d", N1);
            N = N / 10;
        }

    }
    else{
        printf("Error");
    }
    return 0;
}
