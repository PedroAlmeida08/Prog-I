#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h> 

#define DIM 5

void ScanArte(char *Arte);
void PrintArte(char *Arte);
void EspVert(int EV, char Arte[DIM][DIM]);

int main()
{
	char Arte[DIM][DIM];
	
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			Arte[i][j] = i * DIM + j;
	
	ScanArte(Arte);
	EspVert(1, Arte);
	
	return 0;
}

void ScanArte(char *Arte) // Função que pede ao usuário que digite a arte e a imprime.
{
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
		{
			printf("Digite o caractere da linha %i, coluna %i: ", i+1, j+1);
			scanf("%s", &Arte[i*DIM+j]);
		}
}

void PrintArte(char *Arte)
{
	int j=0;
	
	for(int i=1; i<=DIM; i++)
	{
		j++;
        if(j==DIM)
		{
        	printf("%s\n", Arte[i]);
            j=0;
		}
        else
		{
     		printf("%s ", Arte[i]);
		}
    }
	
	for (int i = 0; i < DIM; i++)
	{
		for (int j = 0; j < DIM; j++)		
			putchar(Arte[i * DIM + j]);
	}
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
				Arte[linha][coluna] = Arte[i][j];
				Arte[i][j] = aux;
			}
		}		
		
		printf("\n");
		PrintArte(Arte);
	}
	
	printf("\n \n");
	system("pause");
}
