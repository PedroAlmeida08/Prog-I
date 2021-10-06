#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *file;
	file = fopen(, "r");
	
	if(file == NULL){
		printf("Arquivo inválido.\n");
		return 0;
	}
	
	int linha, coluna;
	
	printf("Digite o número de linhas do arquivo: ");
	scanf("%d", &linha);
	printf("Digite o número de colunas do arquivo: ");
	scanf("%d", &coluna);
	printf("\n");
		
	char arquivo[linha*coluna];
	while((fgets(arquivo, linha*coluna, file)) != NULL){
		printf("%s", arquivo);
	}
	
	fclose(file);
	
	return 0;
}
