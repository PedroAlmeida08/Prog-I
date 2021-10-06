#include <stdio.h>

int main()

{
	int mat[5][5];
	int dist;
	
	for(int i=0; i<4; i++)
	{
		for(int j=i+1; j<5; j++)
			scanf("%d", &dist);
				
		printf("\n");
	}
	
	for(int i=0; i<4; i++)

		for(int j=0; j<4; j++)
			if(i == j)
			{
				mat[i][j] = 0;
				printf("%3d ", mat[i][j]);
			}
				
			else
			{
				mat[i][j] = i*4+j;
				printf("%3d ", mat[i][j]);
			}
				
		printf("\n");
		
	return 0;
}

