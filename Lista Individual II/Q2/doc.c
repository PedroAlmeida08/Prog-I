#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void funcaoExemplo1(int x); //Fun��o com passagem de par�metro por valor
void funcaoExemplo2(int *y); //Fun��o com passagem de par�metro por refer�ncia

int main()
{
	setlocale (LC_ALL, "");
	
	int x = 10;
	int y = 20;
	
	funcaoExemplo1(x);
	funcaoExemplo2(&y); 
//utilizamos o & para fornecer um endere�o de mem�ria para nossa fun��o
	
	return 0;
}

void funcaoExemplo1(int x)
{
	printf("O valor de x �: %d\n", x);
}

void funcaoExemplo2(int *y)
{
	printf("O valor para o qual y aponta �: %d\n", *y); 
//usamos o * para acessar o valor para o qual y aponta
	printf("O endere�o de mem�ria para o qual y aponta �: %d\n", &y);
	//usamos o & para acessar o endere�o de mem�ria para o qual y aponta
}
