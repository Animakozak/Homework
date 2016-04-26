#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n;
	float x, y, k;
	printf("Vvedit n, x\n");
	scanf("%d%f", &n, &x);
	if(n>0)
    {//x = x*3.14 / 180;
	k = sin(x); //sin of input
	//cout<<"k1="<<k;
	y = k;
	if(n==1)
	{
		printf("y=%f\n", y);
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			k=sin(k);
			//printf("k2=%f", k); //sin temporary
			y=y+k;
			printf("y=%f\n", y);
		}
		printf("\n\ny=%f\n", y);
    }
    }
    else
        {
        printf("Error\n");
        }
    return 0;
}