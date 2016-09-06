#include <stdio.h>

int potenciaInt(int base , int expoente){
	int valor=1, i;

	for(i=1;i<=expoente;i++)
		valor = base * valor;

	return valor;
}

int main()
{
	int print, x, y;

	printf("entre com a base e o expoente: ");
	scanf("%d %d", &x, &y);

	print = potenciaInt(x, y);
	printf("%d elevado a %d = %d", x, y, print);

	return 0;
}
