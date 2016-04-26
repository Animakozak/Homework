#include <stdio.h>
int main(){
    int i, sum;
    sum=0;
    FILE*f;
    f=fopen("d://series13.txt", "r");
    if (!f){
        printf("File is not opened");
    }
    while(!feof(f) && i!=0){
    fscanf(f, "%d", &i);
    if(i%2==0 && i>0){
        sum=sum+i;
        }
    }
    printf("sum=%d",sum);
    fclose(f);
    return 0;    
}