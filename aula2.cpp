#include <stdio.h>
#define NUM 15

int main()
{
	int c[NUM], x[NUM], y[NUM];

	for(int i=1;i<=NUM;i++)
	{
		printf("digite o %d numero de x:", i);
		scanf("%d", &x[i-1]);
		printf("digite o %d numero de y:", i);
		scanf("%d", &y[i-1]);
	}

	for (int i = 0; i < NUM; i++)
	{
		c[i] = x[i] + y[(NUM - 1) - i];
	}

	for (int i = 0; i < NUM; i++)
	{
		printf("\nC[%d] : %d", i+1, c[i]);
	}
	
	return 0;
}
