//ler de um arquivo texto
//gravar em um vetor de registros
//gravar em um arquivo binario
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

using namespace std;

struct cliente
{
	int codigo;
	char sexo;
	char nome[40];
	int idade;
	float limite;
};


int main(int argc, char *arqv[]) {
	FILE *arq_cliente;
	char var_sexo, var_arquivo_aux, nomecli[50];
	int cd_cli, vl_idade, indice = 0, i=-1;
	float vl_limite_credito;
	struct cliente *vet;
	arq_cliente = fopen("CLIENTE.TXT", "r");

	if (arq_cliente == NULL) {
		printf("\nArquivo CLIENTE.TXT nao pode ser aberto.");
		printf("\nOcorreu um Erro Grave ! Use alguma tecla para finalizar !");
		getch();
	}else{
		var_arquivo_aux = fscanf(arq_cliente, "%d %c %s %d %f", &cd_cli, &var_sexo, &nomecli, &vl_idade, &vl_limite_credito);

		while (var_arquivo_aux != EOF)  {
			indice = indice + 1; 
			printf("\n Dados do %d § cliente :  \n ", indice);
			printf("\n Nome do Cliente: %s", nomecli);
			printf("\n Codigo do Cliente ..............: %d Sexo: %c", cd_cli, var_sexo);
			printf("\n Idade................: %d Credito....: %0.2f", vl_idade, vl_limite_credito);
			printf("\n------------------------------------------------------ [Tecle Algo]");
			getch();
			var_arquivo_aux = fscanf(arq_cliente, "%d %c %s %d %f", &cd_cli, &var_sexo, &nomecli, &vl_idade, &vl_limite_credito);
		}
		vet = (cliente*)malloc(indice*sizeof(struct cliente));
		
		var_arquivo_aux = fscanf(arq_cliente, "%d %c %s %d %f", &cd_cli, &var_sexo, &nomecli, &vl_idade, &vl_limite_credito);

		while (var_arquivo_aux != EOF)
		{
			i=i+1;
			var_arquivo_aux = fscanf(arq_cliente, "%d %c %s %d %f", &vet[i].codigo, &vet[i].sexo, &vet[i].nome, &vet[i].idade, &vet[i].limite);
		}
		
		fclose (arq_cliente);
		
		var_arquivo_aux=fopen("saida.bin","wb");
		
		fwrite(cliente, sizeof(struct cliente), indice, saida.bin);
		
		printf("\n *** FIM : [Tecle algo] !");
		getch();
		
	}
	return 0;
}
