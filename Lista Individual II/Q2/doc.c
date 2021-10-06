#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void funcaoExemplo1(int x); //Função com passagem de parâmetro por valor
void funcaoExemplo2(int *y); //Função com passagem de parâmetro por referência

int main()
{
	setlocale (LC_ALL, "");
	
	int x = 10;
	int y = 20;
	
	funcaoExemplo1(x);
	funcaoExemplo2(&y); 
//utilizamos o & para fornecer um endereço de memória para nossa função
	
	return 0;
}

void funcaoExemplo1(int x)
{
	printf("O valor de x é: %d\n", x);
}

void funcaoExemplo2(int *y)
{
	printf("O valor para o qual y aponta é: %d\n", *y); 
//usamos o * para acessar o valor para o qual y aponta
	printf("O endereço de memória para o qual y aponta é: %d\n", &y);
	//usamos o & para acessar o endereço de memória para o qual y aponta
}

