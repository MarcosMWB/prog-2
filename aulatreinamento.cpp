#include <stdio.h>

void triangulo(int h,int a, int b){
	if(h * h == a * a + b * b)
		printf("triangulo retangulo");
	else
		printf("nao eh um triangulo retangulo");
}

int main()
{
	int t1, t2, t3;

	printf("digite o maior valor do triangulo: ");
	scanf("%d", &t1);
	printf("digite o segundo maior valor: ");
	scanf("%d", &t2);
	printf("digite o menor valor do triangulo: ");
	scanf("%d", &t3);

	triangulo(t1, t2, t3);


	return 0;
}
