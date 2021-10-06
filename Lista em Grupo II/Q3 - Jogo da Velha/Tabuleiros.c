#include <stdio.h>
#include <stdlib.h>

void tabuleiro3x3(char tab[9])
{
	for(int i=0; i<3; i++)
	printf("\t %c %c %c \n", tab[i], tab[i+1], tab[i+2]);
}

void tabuleiro5x5(char tab[25])
{
	for(int i=0; i<5; i++)
	printf("\t %c %c %c %c %c \n", tab[i], tab[i+1], tab[i+2], tab[i+3], tab[i+4]);
}

int main()
{
	int n;
	
	printf("Digite o tamanho do tabuleiro:\n");
	printf("Para um tabuleiro 3x3, digite 3!\n");
	printf("Para um tabuleiro 5x5, digite 5!\n");
	printf("\n");
	scanf("%d", &n);
	printf("\n");
	
	if(n == 3){
		char tabuleiro[9] = {'0','0','0','0','0','0','0','0','0'};
		tabuleiro3x3(tabuleiro);}
	
	else if(n == 5){
		char tabuleiro[25] = {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
		tabuleiro5x5(tabuleiro);}	
		
	return 0;
}
