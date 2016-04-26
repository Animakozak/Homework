#include <stdio.h>
int main(){
    float a;
    scanf("%f", &a);
    while(a/2.0>0){
        a=a/2.0;
    }
    printf("Float a=%2.100f\n", a);
    return 0;
}