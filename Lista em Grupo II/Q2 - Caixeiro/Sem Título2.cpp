#include <stdio.h>

void GerarMatriz (int mat[5][5])
{	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
			if(i == j)
			{
				mat[i][j] = 0;
				printf("%3d ", mat[i][j]);
			}
				
			else
			{
				printf("%3d ", mat[i][j]);
			}
				
		printf("\n");
	}
}
 int main()
 {

	int mat[5][5];
	
	for(int i=0; i<5; i++)
		for(int j=0; j<5; j++)
			mat[i][j] = i*5+j;
			
	GerarMatriz(mat);	
 	
 	return 0;
 }
