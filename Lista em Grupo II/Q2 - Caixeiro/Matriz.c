#include <stdio.h>

int main()
{
	char cidades[3][3];
	
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			{
				scanf("%d", &cidades[i][j]);
			}
			
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			{
				printf("%d", cidades[i][j]);
			}
	
	return 0;
}
