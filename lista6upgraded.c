#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main(){
    FILE *arq;
    int i=0, quantidade, codigo;
    char arq_aux, nome[40];
    arq = fopen("cadastro.txt","r");
    float preco, valor_estoque=0;
    
    arq_aux=fscanf(arq, "%s %d %f %d", &nome, &codigo, &preco, &quantidade);
    while(arq_aux != EOF)
    {
     valor_estoque += quantidade * preco;
     printf("%s %d %f %d\n", nome, codigo, preco, quantidade);
     arq_aux=fscanf(arq, "%s %d %f %d", &nome, &codigo, &preco, &quantidade); 
    }
    
    printf("o valor total em estoque eh: %.1f\n", valor_estoque);
    fclose(arq);
     
system("pause");  
    return 0;
}
