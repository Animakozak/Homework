#include <stdio.h>
void SortInc3(float *A, float *B, float *C){
    float tmp;
    int i;
    for(i=1; i<=3; i++){
    if (*A>*B){
        tmp=*A;
        *A=*B;
        *B=tmp;
        printf("A=%f, B=%f\n", *A, *B);
    }
    else if(*A>*C){
        tmp=*A;
        *A=*C;
        *C=tmp;
        printf("B=%f, C=%f\n", *B, *C);
    }
    else if(*B>*C){
        tmp=*B;
        *B=*C;
        *C=tmp;
        printf("A=%f, C=%f\n", *A, *C);
    }
    }
}
int main(){
    float A, B, C;
    int i;
    for(i=1;i<=2;i++){
        printf("Vvedit chyslo A: ");
        scanf("%f", &A);
        printf("Vvedit chyslo B: ");
        scanf("%f", &B);
        printf("Vvedit chyslo C: ");
        scanf("%f", &C);
        SortInc3(&A,&B,&C);
        printf("Chysla vidsortovani: %f %f %f\n", A, B, C);
    }
    return 0;
}