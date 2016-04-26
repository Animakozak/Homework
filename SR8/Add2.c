#include <stdio.h>
int main(){
    int a, k;
    float n, v;
    printf("Vvedit a, n");
    scanf("%d%f", &a, &n);
    v = n;
    k = 1;
    if(a == 0 && n < 0){
        k=0;
    }
    else{
        if(n<0){
            n=-n;
        }
        while(n){
            if (n & 1){
                k*=a;
            }
            a*=a;
            n>>=1;
        }
        if(v<0){
            k=1.0/k;
        }
    }
    cout<<"a="<<k<<endl;
    return 0;
}