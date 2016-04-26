#include <stdio.h>
#include <math.h>
int main(){
    int A, B;
    printf("Vvedit A, B (A>B, A>0, B>0)\n");
    scanf("%d%d", &A, &B);
    if (A>B && A>0 && B>0)
    {
        int rest = A - B;
        while (rest>=B){
        rest=rest-B;
        }
        printf("rest=%d", rest);
    }
    else{
        printf("Error");
    }
    return 0;
}