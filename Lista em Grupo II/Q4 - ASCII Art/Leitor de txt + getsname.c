#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Para o bom funcionamento desta fun��o certifique-se que o arquivo a ser aberto se encontra no mesmo \ndiret�rio que o execut�vel!\n");
	printf("Voc� deve digitar o nome do arquivo exatamente como ele �, incluindo letras mai�sculas e min�sculas!\n");
	printf("Como por exemplo, Casa.txt, porta.txt, etc.\n");
	printf("Obs: N�o se esque�a do .txt no final!\n");
	printf("\n");
	
	char nome[80];
   	printf("Digite o nome do arquivo: ");      
   	gets(nome);
   	printf("\n");
	
	FILE *file; //Define um ponteiro do tipo FILE
	file = fopen(nome, "r"); //Abre o arquivo
				       //"r" significa "read", usado na fun��o "fopen" para ler arquivos

	if(file == NULL){ //Se o ponteiro n�o apontar para nada, ou seja, se o nome digitado for diferente do nome do arquivo, printa que � inv�lido.
		printf("Arquivo inv�lido.\n");
		return 0;
	}

	char arquivo[529];
	while((fgets(arquivo, 529, file)) != NULL){ //Imprime at� que encontre um espa�o vazio (NULL), da� para o print.
		printf("%s", arquivo);
	}
	
	printf("\n");

	fclose(file);
	
	return 0;
}
