//Aluno: Jo�o Pedro de Almeida dos Santos
// Quest�o 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menu();
void funcaoExemplo1(int x);
void funcaoExemplo2(int *y);
void submenu();
void passVar();
void passRef();

int main() 
{
	setlocale (LC_ALL, "");
	system("color 02");
	
	menu();
	
	return 0;
}

void menu()
{
	int opcao;
	printf("\n---------------Escolha uma das op��es abaixo---------------\n");
	printf("\n 1 - Defini��o de passagem de par�metro por valor.");
	printf("\n 2 - Defini��o de passagem de par�metro por refer�ncia. ");	
	printf("\n 0 - Sair \n");
	printf("\n\nDigite a op��o desejada: ");
	scanf("%d",&opcao);
	switch(opcao)
	{
		case 1:
			{
				passVar();
			}
			break;
		case 2:
			{
				passRef();
			}
			break;
		case 0:
			{
				exit(0);
			}
			break;
		default: 
			{
				printf("\nOp��o n�o encontrada! Digite novamente!\n");
				sleep(2);
				system("cls");
				menu();
			}
	}
}

void funcaoExemplo1(int x)
{
	printf("int x = 10;\n");
	printf("O valor de x �: %d\n\n", x);
}

void funcaoExemplo2(int *y)
{
	printf("int y = 20;\n");
	printf("O valor para o qual y aponta �: %d\n", *y);
	printf("O endere�o de mem�ria para o qual y aponta �: %d\n\n", &y);
}

void submenu()
{
	int opcao;
	printf("\nQuando acabar de ler, escolha uma das op��es abaixo:");
	printf("\n 1 - Executar o exemplo de passagem de par�metros por valor.");
	printf("\n 2 - Executar o exemplo de passagem de par�metros por refer�ncia.");
	printf("\n 3 - Voltar ao menu principal.");
	printf("\n 0 - Sair \n");
	printf("\nDigite a op��o desejada: ");
	scanf("%d",&opcao);
	switch(opcao)
	{
		case 1:
			{
				int x =10;
				printf("\n");
				funcaoExemplo1(x);
				system("pause");
				menu();
			}
		case 2:
			{
				int y = 20;
				printf("\n");
				funcaoExemplo2(&y);
				system("pause");
				menu();
			}
		case 3:
			{
				system("cls");
				menu();
			}
			break;
		case 0:
			{
				exit(0);
			}
			break;
		default: 
			{
				printf("\nOp��o n�o encontrada! Digite novamente!\n");
				sleep(2);
				system("cls");
				menu();
			}
	}
}

void passVar()
{
	printf("\nQuando fazemos uma passagem de par�metros por valor n�s \nfornecemos ao nosso programa o valor contido na vari�vel em \nquest�o.\n");
	printf("\nPor exemplo:\n");
	printf("\nvoid funcaoExemplo1(int x);\n");
	printf("Nessa situa��o, a nossa fun��o estar� recebendo o valor da \nvari�vel x.\n");
	printf("Se declaramos que int x = 10 e executarmos um printf da \nvari�vel, o valor impresso ser� igual a 10.\n");
	submenu();
}
void passRef()
{
	printf("\nQuando fazemos uma passagem de par�metros por refer�ncia \nn�s fornecemos ao nosso programa n�o mais o valor de uma ");
	printf("\nvari�vel mas sim o endere�o de mem�ria que cont�m essa \nvari�vel.\n");
	printf("\nPor exemplo:\n");
	printf("\nvoid funcaoExemplo(int *x);\n");
	printf("Nessa situa��o, criamos um ponteiro que aponta para o \nendere�o de mem�ria da vari�vel x.\n");
	printf("Se declaramos que int x = 20 e executarmos um printf do \nponteiro *x, o valor impresso ser� igual a 20, pois � o ");
	printf("\nvalor contido no endere�o de mem�ria para o qual nosso \nponteiro aponta.\n");
	printf("Se dejarmos imprimir o endere�o de mem�ria para o qual \nnosso ponteiro aponta, devemos utilizar o s�mbolo &.\n");
	printf("Ao executarmos um printf utilizando o &, o valor impresso \nser� igual ao endere�o de mem�ria para o qual y est� \n");
	printf("apontando, pois � o endere�o de mem�ria da vari�vel x.\n");
	submenu();
}

