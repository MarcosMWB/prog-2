#include <stdio.h>
#include <stdlib.h>
//faça um programa que preencha 2 vetores (x e y) com 15 numeros inteiros cada e crie um terceiro vetor com a regra...
int main()
{
	int i, x[15], y[15], c[15] ;

	for(i=1;i<=15;i++)
	{
		printf("digite o %d numero de x:", i);
		scanf("%d", &x[i-1]);
		printf("digite o %d numero de y:", i);
		scanf("%d", &y[i-1]);
	}

	for(i=0;i<15;i++)
		c[i] = x[i] + y[i];

	for(i=0;i<15;i++)
		printf("%d\n", c[i]);



	system("pause");
	return 0;
}
