#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

int JdV[5][5],DIM; //inicializada no int menu
int checarinput(int aux1, int aux2);
void checarlinha(int a);
void checarcoluna(int b);
void checardiagonal_principal(int c);
void checardiagonal_secundaria(int d);
void empate();
void rodada(int rod);
void tabuleiro(int e);
void menu();
void newgame();
int numero_jogador;

int main() 
{
	system("color 1F");
	setlocale (LC_ALL, "");
	menu();
	return 0;
}

void empate()
{
	int ctEmpate=0,linha,coluna;
	for(linha =0; linha<DIM; linha++)
	{
		for(coluna = 0; coluna<DIM; coluna++)
		{
			if(JdV[linha][coluna]!=0)
			{
				ctEmpate++;
			}
		}
	}
	if((DIM*DIM) == ctEmpate) 
	{
		printf("Empate!");
		printf("\n \n");
		
		int resp;
			printf("Deseja jogar novamente? Digite 1 para sim e 2 para não!\n");
			scanf("%d", &resp);
			if(resp == 1){
				system("cls");
				newgame();
			}
				
			else if(resp == 2)
				exit(0);
	}
}

void tabuleiro(int e)
{
	int numero_jogador = e;
	printf("\nTabuleiro:\n");
	for(int linha = 0; linha<DIM;linha++)
		{
		for(int coluna=0; coluna<DIM;coluna++)
			{
				printf("%d ", JdV[linha][coluna]);
			}
			printf("\n");
		}
	checarlinha(numero_jogador);
	checarcoluna(numero_jogador);
	checardiagonal_principal(numero_jogador);
	checardiagonal_secundaria(numero_jogador);
	empate();
	if(numero_jogador==1) rodada(2);
	if(numero_jogador==2) rodada(1);
}

void rodada(int rod)
{
	int numero_jogador = rod;
	int aux1, aux2;
	if(numero_jogador== 1)
	{
		printf("\nPrimeiro Jogador:");
	}
	if(numero_jogador == 2)
	{
		printf("\nSegundo Jogador:");
	}
	scanf("%d %d",&aux1, &aux2);
	if(checarinput(aux1,aux2) == 1)
	{
		printf("\nPosição Inválida!\nTente novamente!");
		rodada(numero_jogador);
	}
	else 
	{
		JdV[aux1-1][aux2-1] = numero_jogador;
		tabuleiro(numero_jogador);
	}
}

int checarinput(int aux1, int aux2)
{
	if (JdV[aux1-1][aux2-1]==0 && aux1-1>= 0 && aux2-1 >= 0 && aux1-1< DIM && aux2-1 < DIM) 
		return 0;
	else 
		return 1;
}

void checarlinha(int a)
{
	int numero_jogador = a, ctLin;
	if(numero_jogador ==1)
	{
		for(int linha =0; linha<DIM; linha++)
			{
				ctLin=0;
				for(int coluna =0; coluna<DIM; coluna++)
				{
					if(JdV[linha][coluna] == 1) ctLin++;
				}
				if( ctLin == DIM)
				{
					printf("Parabéns! Primeiro jogador ganhou!");
					printf("\n \n");
		
					int resp;
					printf("Deseja jogar novamente? Digite 1 para sim e 2 para não!\n");
					scanf("%d", &resp);
					if(resp == 1){
						system("cls");
						newgame();
					}
					else if(resp == 2)
						exit(0);
				}			
			}
	}
	
	if(numero_jogador ==2)
	{
		for(int linha =0; linha<DIM; linha++)
			{
				ctLin=0;
				for(int coluna =0; coluna<DIM; coluna++)
				{
					if(JdV[linha][coluna] == 2) ctLin++;
				}
				if( ctLin == DIM)
				{
					printf("Parabéns! Segundo jogador ganhou!");
					printf("\n \n");
		
					int resp;
					printf("Deseja jogar novamente? Digite 1 para sim e 2 para não!\n");
					scanf("%d", &resp);
					if(resp == 1){
						system("cls");
						newgame();
					}
					else if(resp == 2)
						exit(0);
				}
			}
	}
}

void checarcoluna(int b)
{
	int numero_jogador = b,ctCol;
	if(numero_jogador ==1)
	{
		for(int coluna =0; coluna<DIM; coluna++)
			{
				ctCol=0;
				for(int linha =0; linha <DIM; linha++)
				{
					if(JdV[linha][coluna]==1) ctCol++;
				}	
				if( ctCol == DIM)
				{
					printf("Parabéns! Primeiro jogador ganhou!");
					printf("\n \n");
		
					int resp;
					printf("Deseja jogar novamente? Digite 1 para sim e 2 para não!\n");
					scanf("%d", &resp);
					if(resp == 1){
						system("cls");
						newgame();
					}
					else if(resp == 2)
						exit(0);
				}
			}	
	}
	
	if(numero_jogador ==2)
	{
			for(int coluna =0; coluna<DIM; coluna++)
			{
				ctCol=0;
				for(int linha =0; linha <DIM; linha++)
				{
					if(JdV[linha][coluna]==2) ctCol++;
				}	
				if( ctCol == DIM)
				{
					printf("Parabéns! Segundo jogador ganhou!");
					printf("\n \n");
		
					int resp;
					printf("Deseja jogar novamente? Digite 1 para sim e 2 para não!\n");
					scanf("%d", &resp);
					if(resp == 1){
						system("cls");
						newgame();
					}
					else if(resp == 2)
						exit(0);
				}	
			}
	}
}

void checardiagonal_principal(int c)
{
	int numero_jogador = c;
	int ct_diagonal;
	if(numero_jogador ==1)
	{
		int linha, coluna;
		ct_diagonal = 0;
		for(linha=0,coluna = 0; linha < DIM; linha++, coluna++ )
		{
			if(JdV[linha][coluna] == 1) ct_diagonal++;
		}
		if(ct_diagonal == DIM) 
		{
			printf("Parabéns! Primeiro jogador ganhou!");
			printf("\n \n");
		
			int resp;
			printf("Deseja jogar novamente? Digite 1 para sim e 2 para não!\n");
			scanf("%d", &resp);
			if(resp == 1){
				system("cls");
				newgame();
			}
			else if(resp == 2)
				exit(0);
		}
	}
	if(numero_jogador ==2)
	{
		int linha, coluna;
		ct_diagonal = 0;
		for(linha=0,coluna = 0; linha < DIM; linha++, coluna++ )
		{
			if(JdV[linha][coluna] == 2) ct_diagonal++;
		}
		if(ct_diagonal == DIM) 
		{
			printf("Parabéns! Segundo jogador ganhou!");
			printf("\n \n");
		
			int resp;
			printf("Deseja jogar novamente? Digite 1 para sim e 2 para não!\n");
			scanf("%d", &resp);
			if(resp == 1){
				system("cls");
				newgame();
			}
			else if(resp == 2)
				exit(0);
		}
	}
}

void checardiagonal_secundaria(int d)
{
	int numero_jogador = d;
	int ct_diagonal;
	if(numero_jogador ==1)
	{
		int linha, coluna;
		ct_diagonal = 0;
		for(linha=0,coluna = (DIM-1); coluna >=0; linha++, coluna-- )
		{
			if(JdV[linha][coluna] == 1) ct_diagonal++;
		}
		if(ct_diagonal == DIM) 
		{
			printf("Parabéns! Primeiro jogador ganhou!");
			printf("\n \n");
		
			int resp;
			printf("Deseja jogar novamente? Digite 1 para sim e 2 para não!\n");
			scanf("%d", &resp);
			if(resp == 1){
				system("cls");
				newgame();
			}
			else if(resp == 2)
				exit(0);
		}
	}
	if(numero_jogador ==2)
	{
		int linha, coluna;
		ct_diagonal = 0;
		for(linha=0,coluna = (DIM-1); coluna >=0; linha++, coluna-- )
		{
			if(JdV[linha][coluna] == 2) ct_diagonal++;
		}
		if(ct_diagonal == DIM) 
		{
			printf("Parabéns! Segundo jogador ganhou!");
			printf("\n \n");
		
			int resp;
			printf("Deseja jogar novamente? Digite 1 para sim e 2 para não!\n");
			scanf("%d", &resp);
			if(resp == 1){
				system("cls");
				newgame();
			}
			else if(resp == 2)
				exit(0);
		}
	}
}

void menu()
{
	int opcao=0;
	printf("\n------------------Menu------------------");
	printf("\n 1 - Jogar em tabuleiro padrão 3x3");
	printf("\n 2 - Jogar em um tabuleiro especial 5x5");	
	printf("\n 0 - Sair \n");
	printf("\n\nDigite a opção desejada: ");
	scanf("%d",&opcao);
	switch(opcao)
	{
		case 1:
			{
				printf("\nVocê escolheu a opção de jogar em um tabuleiro 3x3!\n");
				printf("\nAguarde. O jogo começará em instantes.");
				sleep(3);
				DIM = 3;
	 			int JdV[3][3] = {0,0,0,0,0,0,0,0,0};				
				system("cls");
				printf("Jogo da Velha!\n");
				rodada(1);
			}
			break;
		case 2:
			{
				printf("\nVocê escolheu a opção de jogar em um tabuleiro 5x5!\n");
				printf("\nAguarde. O jogo começará em instantes.");
				sleep(3);
	 			int JdV[5][5] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
				DIM = 5;
				system("cls");
				printf("Jogo da Velha!\n");
				rodada(1);
			}
			break;
		case 0:
			{
				printf("\nQue pena que você já vai embora.");
				sleep(3);
				exit(0);
			}
		default: 
			{
				printf("\nOpção não encontrada! Digite novamente!");
				void menu();
			}
	}
}

void newgame()
{
	for(int linha = 0; linha<DIM;linha++)
		{
		for(int coluna=0; coluna<DIM;coluna++)
			{
				JdV[linha][coluna]=0;
			}
			printf("\n");
		}
	menu();
}
