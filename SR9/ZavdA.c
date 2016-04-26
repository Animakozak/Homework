#include <stdio.h>
#define N 5
int main(){
    int i;
    float d, c;
    c =1;
    float A[N];
    for(i=0; i<N; i++){
        scanf("%f", &A[i]);
        if(A[i]<=0){
            printf("Vy vvely chyslo, menshe 0\n");
            i--;
        }
        else{
            d = 1 - (A[i] - floor(A[i]));
            printf("Znachenya, yakogo ne vystachaye do nayblyzhchogo cilogo: %f\n", d);
            if(d<=1){
                c=A[i]+d;
            printf("Nayblyzhche cile: %f\n", c);
            }
        }
    }
    return 0;
}