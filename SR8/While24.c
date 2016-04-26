#include <stdio.h>
#include <math.h>
int main(){
    int N, f1, f2, tmp;
    f1 = 1;
    f2 = 1;
    printf("Vvedit N:");
    scanf("%d", &N);
    if(N>1){
        while(N>f2){
            tmp = f2;
            f2 = f1 + f2;
            f1 = tmp;
        }
        if (N==f2){
            printf("true\n");
        }
        else{
            printf("false\n");
        }
    }
    else{
        printf("Error");
    }
    return 0;
}