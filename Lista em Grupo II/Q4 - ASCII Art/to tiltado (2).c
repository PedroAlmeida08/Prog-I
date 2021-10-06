#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h> 

#define DIM 25
void EspVert(int EV, char Arte[DIM][DIM]);
int main()
{
	system("color 0A");
	char Arte[DIM][DIM];
	for(int i=0; i<DIM; i++)
		for (int j = 0; j<DIM; j++)
			Arte[i][j] =' ';
				
	for(int i =0; i<DIM;i++)
	{
		printf("Digite a linha %2d: ", i);
		fgets(Arte[i],DIM,stdin);	
	}
	
	for(int i=0; i<DIM; i++)
	{
		printf("%s",Arte[i]);
	}
	EspVert(1,Arte);
	return 0;
}

void EspVert(int EV, char Arte[DIM][DIM])
{
	int ctEV=0;
	int i,j,linha,coluna,aux;
	for(ctEV=0; ctEV<EV;ctEV++)
	{
				
		for(linha=0,i=0;i<DIM;i++,linha++)
		{
		
			for (coluna=0,j=(DIM-2);j>=((DIM-1)/2);j--,coluna++)
			{
				aux = Arte[linha][coluna];
				Arte[linha][coluna]=Arte[i][j];
				Arte[i][j] = aux;
			}
		}		

		for(int i=0; i<DIM; i++)
		{
			printf("%s",Arte[i]);
		}
	}
	
	printf("\n \n");
	system("pause");
}



