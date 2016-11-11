#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main(){
    FILE *arq;
    int i=0, quantidade, codigo, index=0;
    char arq_aux, nome[40];
    arq = fopen("cadastro.txt","r");
    float preco;
    
    arq_aux=fscanf(arq, "%s %d %f %d", &nome, &codigo, &preco, &quantidade);

    printf("%s %d %f %d", nome, codigo, preco, quantidade);
    
system("pause");  
    return 0;
}
