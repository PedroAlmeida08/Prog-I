//Aluno: João Pedro de Almeida dos Santos
// Questão 2

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
	printf("\n---------------Escolha uma das opções abaixo---------------\n");
	printf("\n 1 - Definição de passagem de parâmetro por valor.");
	printf("\n 2 - Definição de passagem de parâmetro por referência. ");	
	printf("\n 0 - Sair \n");
	printf("\n\nDigite a opção desejada: ");
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
				printf("\nOpção não encontrada! Digite novamente!\n");
				sleep(2);
				system("cls");
				menu();
			}
	}
}

void funcaoExemplo1(int x)
{
	printf("int x = 10;\n");
	printf("O valor de x é: %d\n\n", x);
}

void funcaoExemplo2(int *y)
{
	printf("int y = 20;\n");
	printf("O valor para o qual y aponta é: %d\n", *y);
	printf("O endereço de memória para o qual y aponta é: %d\n\n", &y);
}

void submenu()
{
	int opcao;
	printf("\nQuando acabar de ler, escolha uma das opções abaixo:");
	printf("\n 1 - Executar o exemplo de passagem de parâmetros por valor.");
	printf("\n 2 - Executar o exemplo de passagem de parâmetros por referência.");
	printf("\n 3 - Voltar ao menu principal.");
	printf("\n 0 - Sair \n");
	printf("\nDigite a opção desejada: ");
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
				printf("\nOpção não encontrada! Digite novamente!\n");
				sleep(2);
				system("cls");
				menu();
			}
	}
}

void passVar()
{
	printf("\nQuando fazemos uma passagem de parâmetros por valor nós \nfornecemos ao nosso programa o valor contido na variável em \nquestão.\n");
	printf("\nPor exemplo:\n");
	printf("\nvoid funcaoExemplo1(int x);\n");
	printf("Nessa situação, a nossa função estará recebendo o valor da \nvariável x.\n");
	printf("Se declaramos que int x = 10 e executarmos um printf da \nvariável, o valor impresso será igual a 10.\n");
	submenu();
}
void passRef()
{
	printf("\nQuando fazemos uma passagem de parâmetros por referência \nnós fornecemos ao nosso programa não mais o valor de uma ");
	printf("\nvariável mas sim o endereço de memória que contém essa \nvariável.\n");
	printf("\nPor exemplo:\n");
	printf("\nvoid funcaoExemplo(int *x);\n");
	printf("Nessa situação, criamos um ponteiro que aponta para o \nendereço de memória da variável x.\n");
	printf("Se declaramos que int x = 20 e executarmos um printf do \nponteiro *x, o valor impresso será igual a 20, pois é o ");
	printf("\nvalor contido no endereço de memória para o qual nosso \nponteiro aponta.\n");
	printf("Se dejarmos imprimir o endereço de memória para o qual \nnosso ponteiro aponta, devemos utilizar o símbolo &.\n");
	printf("Ao executarmos um printf utilizando o &, o valor impresso \nserá igual ao endereço de memória para o qual y está \n");
	printf("apontando, pois é o endereço de memória da variável x.\n");
	submenu();
}

