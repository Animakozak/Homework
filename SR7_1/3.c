#include <stdio.h>
#include <math.h>
int main()
{
	float y, y2, x;
	int n, sign;
    printf("Vvedite N, X\n");
	scanf("%d%f", &n, &x);
    if (n>0)
    {
    sign = 1;
	y = (2*n+1)+x*x/(2*n-1);
	while(n>0)
	{
        y = sign*(2*n-1) + x*x / y;
		printf("y=%f\n", y);
        sign = -sign;
        n--;
	}
        y=x/y;
        if(n%2==0)
        {
            y=-y;
            printf("y=%f\n", y);
        }
        else
        {
            printf("y=%f\n", y);
        }
	y2 = tan(x);
	printf("y2=%f", y2);
    }
    else
    {
    printf("Error");
    }
	return 0;
}