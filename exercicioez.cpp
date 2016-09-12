#include <stdio.h>

int main()
{
	int num, i=1;

	printf("digite um numero: ");
	scanf("%d", &num);

	while(i<11)
	{
		printf("%d x %d = %d\n", i, num, i*num);
		i++;
	}

	return 0;
}
