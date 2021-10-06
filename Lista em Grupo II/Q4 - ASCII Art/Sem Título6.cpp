#include <stdio.h>
#include <stdlib.h>

int main()
{
	char Arte[5][5];
	for(int i=1; i<=5; i = i+1)
		for(int j=1; j<=5; j = j+1)
		{
			printf("Digite o caracter da linha %d, coluna %d: ", i, j);
			printf("\n");
			scanf("%c", &Arte[i][j]);
		}
	
	return 0;
}
