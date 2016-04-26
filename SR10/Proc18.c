#include <stdio.h>
float CircleS(float r){
    float pi=3.14, S;
    S=pi*r;
    return S;
}
int main()
{
    float r, S;
    printf("Vvedit r: ");
    scanf("%f", &r);
    if(r>0){
    S=CircleS(r);
    printf("Ploshcha = %f", S);
    }
    else printf("Error\n");
	return 0;
}
