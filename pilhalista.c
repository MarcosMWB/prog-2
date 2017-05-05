#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
	float info;
	struct lista * prox;
}Lista;

typedef struct pilha
{
	struct lista* prim;
}Pilha;

Pilha* pilha_cria()
{
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->prim = NULL;
	return p;
}

int vazia(Pilha *p)
{
	return p->prim==NULL;
}

void pilhapush(Pilha* p, float v)
{
	Lista* n = (Lista*) malloc(sizeof(Lista));
	n->info = v;
	n->prox = p->prim;
	p->prim = n;
}

float pilha_pop (Pilha* p)
{
	Lista* t;
	float v;
	if(vazia(p)) { printf("pilha vazia.\n"); exit(1);}

	t = p->prim;
	v = t->info;
	p->prim = t->prox;
	free(t);
	return v;
}

void pilha_imprime(Pilha* p)
{
	Lista* q;
	for(q=p->prim; q!=NULL; q=q->prox)
		printf("%.2f\n", q->info);
}

void pilha_libera (Pilha* p)
{
	Lista* q = p->prim;
	while(q!=NULL)
	{
		Lista* t = q->prox;
		free(q);
		q = t;
	}
	free(p);
}

void imprime(Pilha* p)
{
	Pilha* aux = pilha_cria();

	while(!vazia(p))
	{
		pilhapush(aux, pilha_pop(p));
	}

	while(!vazia(aux))
	{
		float v = pilha_pop(aux);
		printf("%.2f\n", v);
		pilhapush(p,v);
	}
	pilha_libera(aux);
}


int main()
{
	Pilha *p;

	p = pilha_cria(); pilhapush(p,10); pilhapush(p,15); pilhapush(p,20); pilhapush(p,25);

	float v = pilha_pop(p);
	printf("%.2f\n\n", v);

	pilha_imprime(p);
	printf("\n");

	pilha_libera(p);

	return 0;
}

