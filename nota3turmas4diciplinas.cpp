#include <stdio.h>
#define NUMI 3
#define NUMJ 8
#define NUMK 4

void calculamedia(float nota[][NUMJ][NUMK])
{
	float media=0;

	for(int i=0;i<NUMI;i++)
		for(int j=0;j<NUMJ;j++)
		{
			media=0;
				for(int k=0;k<NUMK;k++)
				{
					media=media+nota[i][j][k];
				}
			printf("a media do aluno %d da turma %d eh: %.2f\n ", j+1, i+1, media/NUMK);
		}
}

void calculamediaturma(float nota[][NUMJ][NUMK])
{
	float media=0;

	for(int i=0;i<NUMI;i++)
	{
		media=0;
		for(int j=0;j<NUMJ;j++)
		{
				for(int k=0;k<NUMK;k++)
				{
					media=media+nota[i][j][k];
				}
		}
		printf("a media da turma %d eh: %.2f\n ", i+1, media/(NUMK*NUMJ));
	}
}

int main()
{
	float nota[NUMI][NUMJ][NUMK];

	for(int i=0;i<NUMI;i++)
		for(int j=0;j<NUMJ;j++)
			for(int k=0;k<NUMK;k++)
			{
				printf("entre com a nota da do aluno %d da turma %d na diciplina %d: ", j+1, i+1, k+1);
				scanf("%f", &nota[i][j][k]);
			}

	calculamedia(nota);
	calculamediaturma(nota);

	return 0;
}

