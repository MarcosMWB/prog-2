#include <stdio.h>
#define N 100

int main(){
    
    int i=0;
    char nome[40];
    FILE *arq_saida;
    arq_saida = fopen("saida.txt", "w");
    
    for(i=0;i<N;i++)
    {
     printf("entre com um nome: ");
     scanf("%s", nome);
     fprintf(arq_saida, "%s\n", nome);
    }
    
return 0;
}
