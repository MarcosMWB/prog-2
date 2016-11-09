#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
	char nome[50];
	float nota;
};

int main()
{
	FILE *arq;
	struct aluno var;
	arq = fopen("SAIDA.bin", "wb");
	
	do{
		printf("nome: ");
		scanf("%s", var.nome);
		printf("nota: ");
		scanf("%f", &var.nota);
		
		fwrite(&var, sizeof(struct aluno), 1, arq);
		
	}while(strcmp(var.nome, "XXX")!=0);
	
	fclose(arq);
	
	return 0;
}
