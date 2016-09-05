#include <stdio.h>


int main()
{
	int c[15], x[15], y[15], j=14, k=0;

	for(int i=1;i<=15;i++)
	{
		printf("digite o %d numero de x:", i);
		scanf("%d", &x[i-1]);
		printf("digite o %d numero de y:", i);
		scanf("%d", &y[i-1]);
	}

	for (int i = 0; i < 15; i++)
	{
		k = j - i;
		c[i] = x[i] + y[k];
	}

	for (int i = 0; i < 15; i++)
	{
		printf("\nC[%d] : %d", i+1, c[i]);
	}
	
	return 0;
}
