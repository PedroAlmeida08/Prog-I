#include <stdio.h>

void GerarMatriz (int mat[30][30])
{
	for(int i=0; i<30; i++)
	{
		for(int j=0; j<30; j++)
			if(i == j)
			{
				mat[i][j] = 0;
				printf("%3d ", mat[i][j]);
			}
				
			else
				printf("%3d ", mat[i][j]);
		printf("\n");
	}
}
 int main()
 {

	int mat[30][30];
	
	for(int i=0; i<30; i++)
		for(int j=0; j<30; j++)
			mat[i][j] = i*30+j;
			
	GerarMatriz(mat);	
 	
 	return 0;
 }
