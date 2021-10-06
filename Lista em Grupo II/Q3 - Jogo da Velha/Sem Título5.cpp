#include <stdio.h>
#include <stdlib.h>

void tabuleiro3x3(char tab[3][3])
{
	printf("\t %c %c %c \n", tab[0][0], tab[0][1], tab[0][2]);
	printf("\t %c %c %c \n", tab[1][0], tab[1][1], tab[1][2]);
	printf("\t %c %c %c \n", tab[2][0], tab[2][1], tab[2][2]);
}

void tabuleiro5x5(char tab[5][5])
{
	printf("\t %c %c %c %c %c \n", tab[0][0], tab[0][1], tab[0][2], tab[0][3], tab[0][4]);
	printf("\t %c %c %c %c %c \n", tab[1][0], tab[1][1], tab[1][2], tab[1][3], tab[1][4]);
	printf("\t %c %c %c %c %c \n", tab[2][0], tab[2][1], tab[2][2], tab[2][3], tab[2][4]);
	printf("\t %c %c %c %c %c \n", tab[3][0], tab[3][1], tab[3][2], tab[3][3], tab[3][4]);
	printf("\t %c %c %c %c %c \n", tab[4][0], tab[4][1], tab[4][2], tab[4][3], tab[4][4]);

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
		char tabuleiro[3][3] = {'0','0','0','0','0','0','0','0','0'};
		tabuleiro3x3(tabuleiro);}
	
	else if(n == 5){
		char tabuleiro[5][5] = {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
		tabuleiro5x5(tabuleiro);}	
		
	return 0;
} 
