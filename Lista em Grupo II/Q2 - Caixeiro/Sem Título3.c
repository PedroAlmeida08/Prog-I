#include <stdio.h>

int main()
{
	int Matriz[5][5], Distancia;
	
	for (int i =0; i<5; i++)
		for (int j = 0; j<5; j++)
				Matriz[i][j] = 0;
				
	for (int i =0; i<5; i++)
	{
		for (int j = 0; j<5; j++)
		{
			if (Matriz[i][j] ==0 && i!=j)
			{
			printf("\nDigite a distância entre as cidades %d e %d: ",i,j);
			scanf("%d", &Distancia);
			Matriz[i][j] = Distancia;
			Matriz[j][i] = Distancia;
			}
		}
	}
	
	for (int i =0; i<5; i++)
		for (int j = 0; j<5; j++)
				printf("%3d", Matriz[i*5+j);
	
	return 0;
}
