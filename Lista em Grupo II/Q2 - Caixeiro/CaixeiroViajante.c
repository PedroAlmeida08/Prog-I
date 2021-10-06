#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define DIM 30
	
int Distancias[DIM][DIM];
int CidInicial,ctUniversal;
int Checarinput(int Distancia);
void rota(int Cidade,int ctUniversal);
int Checar1000km(int Cidade, int ctaux);	

int main() 
{
	setlocale (LC_ALL, "");
	int Distancia;
	
	for (int i =0; i<DIM; i++)
		for (int j = 0; j<DIM; j++)
				{
					Distancias[i][j] = 0;
				}
	for (int i =0; i<DIM; i++)
	{
		for (int j = 0; j<DIM; j++)
		{
			if (Distancias[i][j] ==0 && i!=j)
			{
			printf("\nDigite a distância entre as cidades %d e %d: ",i+1,j+1);
			scanf("%d", &Distancia);
			Distancia = Checarinput(Distancia);
			Distancias[i][j] = Distancia;
			Distancias[j][i] = Distancia;
			}
		}
	}
	
	printf("\n");			
	
	for (int i =0; i<DIM; i++)
	{
		for (int j = 0; j<DIM; j++)
		{
			printf("%4d ", Distancias[i][j]);	
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("Em qual cidade o caixeiro viajante está?\n");
	scanf("%d",&CidInicial);
	while(CidInicial>DIM)
		{
			printf("Cidade invalida, digite uma cidade valida:\n\n");
			scanf("%d",&CidInicial);
		}
	rota(CidInicial,0);
	return 0;
}

int Checarinput(int Distancia)
{
	if(Distancia>0 && Distancia<=1000) return Distancia;
	if(Distancia<=0||Distancia>1000)
	{
		printf("\nDistância inválida! Digite novamente.\n");
		scanf("%d",&Distancia);
		Checarinput(Distancia);
	}
}

void rota(int Cidade,int ctUniversal)
{
	int flagCid1, flagCid2, ctCidades;
	int menorD=0;
	
	if(Checar1000km(Cidade,ctUniversal)==0)
	{
	menorD=999999;
	for(int j=0; j<DIM; j++)
		{
			if (Distancias[Cidade-1][j]<menorD && Distancias[Cidade-1][j]!=0)
			{
				flagCid1 =Cidade;
				flagCid2 =j+1;
				menorD=Distancias[Cidade-1][j];
			}
		}
	}
	ctUniversal+=menorD;

	printf("\nPartindo da cidade %d, a próxima cidade é a cidade %d.\n",flagCid1,flagCid2);
	for(int i = 0; i<DIM;i++)
		for(int j=0; j<DIM; j++)
			{
				if(i == Cidade-1)
					{
						Distancias[Cidade-1][j] = 0;
					}
				else if(j == Cidade -1)
				{
					Distancias[i][Cidade-1] = 0;
				}
			}	
	rota(flagCid2,ctUniversal);

}
int Checar1000km(int Cidade, int ctaux)
{
	int flagCid1, flagCid2, ctCidades=0;
	int menorD=9999;
	
	for(int j=0; j<DIM; j++)
		{
			if (Distancias[Cidade-1][j]<menorD && Distancias[Cidade-1][j]!=0)
			{
				flagCid1 =Cidade;
				flagCid2 =j+1;
				menorD=Distancias[Cidade-1][j];
			}
		}
	ctaux+=menorD;

	for(int i = 0; i<DIM;i++)
		for(int j=0; j<DIM; j++)
			ctCidades+=Distancias[i][j];
			
	if(ctCidades==0)
	{
		printf("\nTodas as cidades foram percorridas, volte a cidade inicial!\n");
		exit(0);
	}
	
	if(ctaux<=1000) return 0;
	if(ctaux>1000) 
	{
		printf("\nDurma uma noite na cidade %d e recomeçe no dia seguinte.\n",Cidade);
		ctUniversal=0;
		rota(Cidade,ctUniversal);
		return 0;	
	}
	
}

