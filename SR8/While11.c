#include <stdio.h>
#include <math.h>
/*int sum(int x){
    //Calculates a sum of all numbers before "x"
    printf("--------------------------sum(K)--------------------------------\n");
    int sum = 0, i;
    for (i=1; sum<=x; i++){
        sum = sum +i;
        printf("sum=%d", sum);
    }
    printf("fsum=%d\n\n\n", sum); //sum value
    return sum;
}*/
int main(){
    int K, N;
    printf("Vvedit N>1\n");
    scanf("%d", &N);
    if (N>1){
        K=0;
        int sum = 0;
        while(sum<N)
        {
            sum=sum + K;
            K++;
        }
        printf("K=%d\n", K);
        printf("Sum=%d\n", sum);
    }
    else{
        printf("Error");
    }
    return 0;
}