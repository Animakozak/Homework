#include <stdio.h>
#define N 5
int main(){
    int i;
    double d, o, c;
    a =1;
    c =1;
    int A[N];
    for(i=0; i<N; i++){
        scanf("%e", &A[i]);
        d = 1 - (A[i]-floor(A[i]));
        printf("Znachenya, yakogo ne vystachaye do nayblyzhchogo cilogo: %e", d);
        if(d<=o){
            c=A[i];
            printf("Nayblyzhche cile: %e", c);
            o=b;
        }
    }
    return 0;
}