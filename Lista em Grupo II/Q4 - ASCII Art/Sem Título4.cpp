#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *file;
	file = fopen("Snake.txt", "r");
	
	if(file == NULL){
		printf("Arquivo inválido.\n");
		return 0;
	}
	
	char arquivo[529];
	while((fgets(arquivo, 529, file)) != NULL){
		printf("%s", arquivo);
	}
	
	fclose(file);
	
	return 0;
}
