#include <stdio.h>
#include <stdlib.h>

#define DIM 23

int main()
{
	printf("\n");
	printf("\n---------------------------Algumas Observações----------------------------");
	printf("\nPara o bom funcionamento desta função certifique-se que o arquivo a ser \naberto se encontra no mesmo diretório que o executável!\n");
	printf("Você deve digitar o nome do arquivo exatamente como ele é, incluindo \nletras maiúsculas e minúsculas!\n");
	printf("Como por exemplo, Casa.txt, porta.txt, etc.\n");
	printf("Obs: Não se esqueça do .txt no final!\n");
	printf("\n");
	
	char nome[80];
   	printf("Digite o nome do arquivo: ");      
   	gets(nome);
   	printf("\n");
	
	FILE *file; //Define um ponteiro do tipo FILE
	file = fopen(nome, "r"); //Abre o arquivo
				 //"r" significa "read", usado na função "fopen" para ler arquivos
	
	if(file == NULL){ //Se o ponteiro não apontar para nada, ou seja, se o nome digitado for diferente do nome do arquivo, printa que é inválido.
		printf("Arquivo inválido.\n");
		return 0;
	}
	
	char arquivo[DIM*DIM];
	while((fgets(arquivo, DIM*DIM, file)) != NULL){ //Imprime até que encontre um espaço vazio (NULL), daí para o print.
		printf("%s", arquivo);
	}
	
	printf("\n");
	
	fclose(file);
	
	return 0;
}
