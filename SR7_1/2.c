#include <stdio.h>
#include <math.h>
int main()
{
   int N, i;
	float y, k;
	printf("Vvedit N:");
	scanf("%d", &N);
	if(N>0)
    {
    k = 3;
	y = 1.0 / k;
	for (i = 2; i <= N; i=i+1)
		{ 
			if (i % 2 == 0)
			{
				y = y + ((k + 1) / k);
				printf("EVEN y=%f\n", y);
			}
			else if (i % 2 != 0)
			{
				//printf("\n%f+(%f/(%f+1))  >>  %f+%f  >>  %f\n\n", y, k, k, y, k/(k+1), y+0.75);
				y = y + (k / (k + 1));
				printf("ODD y=%f\n", y);
			}
			k = k + 1;
		}
	printf("y=%f\n", y);
    }
    else
    {
        printf("Error");
    }
	return 0; 
}