#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *file;
	file = fopen(, "r");
	
	if(file == NULL){
		printf("Arquivo inv�lido.\n");
		return 0;
	}
	
	int linha, coluna;
	
	printf("Digite o n�mero de linhas do arquivo: ");
	scanf("%d", &linha);
	printf("Digite o n�mero de colunas do arquivo: ");
	scanf("%d", &coluna);
	printf("\n");
		
	char arquivo[linha*coluna];
	while((fgets(arquivo, linha*coluna, file)) != NULL){
		printf("%s", arquivo);
	}
	
	fclose(file);
	
	return 0;
}
