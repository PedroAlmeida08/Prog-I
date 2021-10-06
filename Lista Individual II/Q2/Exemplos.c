#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void funcaoExemplo1(int x);
void funcaoExemplo2(int *y);

int main()
{
	setlocale (LC_ALL, "");
	
	int x = 10;
	int y = 20;
	
	funcaoExemplo1(x);
	funcaoExemplo2(&y);
	
	return 0;
}

void funcaoExemplo1(int x)
{
	printf("O valor de x �: %d\n", x);
}

void funcaoExemplo2(int *y)
{
	printf("O valor para o qual y aponta �: %d\n", *y);
	printf("O endere�o de mem�ria para o qual y aponta �: %d\n", &y);
}
