#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h> 
#include <time.h>

#define DIM 30

int Jogo[DIM+2][DIM+2],TabuleiroAuxiliar[DIM+2][DIM+2],ctGeracao,totalGer;
void menu (); // [Dar opções para ir ao IniRad ou ao IniUser] // JP
void IniRand(); // [inicializar a matriz de forma randomica] // Orlando
void IniUser(); // [Checar input] JP
void NumGenerations(); // [Chamar essa função após as funções Ini] // JP
void O_JOGO(); // [Chamar a função checar vizinhos e depois imprimir o resultado]// JP
void ChecarVizinhos(); // [Usar uma "matriz auxiliar" pra ajudar no calculo de celular viva ou morta] // Tobias




int main() 
{
	setlocale (LC_ALL, "");
	system("color 02");
	ctGeracao=0;
	for(int i=0; i<DIM+2;i++)
		for(int j=0; j<DIM+2; j++)
			{
			if(i == 0 || j== 0 || i==(DIM+1) || j == (DIM+1)) Jogo[i][j] = 2;
			else Jogo[i][j]=0;
			}
	menu();
	return 0;
}

void menu()
{
	int opcao;
	printf("\n--------------------Escolha a forma de jogo--------------------\n");
	printf("\n 1 - Inicialização Randômica.");
	printf("\n 2 - Escolha onde se localizarão as células vivas. ");	
	printf("\n 0 - Sair \n");
	printf("\n\nDigite a opção desejada: ");
	scanf("%d",&opcao);
	switch(opcao)
	{
		case 1:
			{
				IniRand();
			}
			break;
		case 2:
			{
				IniUser();
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
				menu(opcao);
			}
	}
}

void IniUser(int linha, int coluna)
{
	printf("\nQuantas gerações você deseja? \n");
	scanf("%d",&totalGer);
	while(1)
	{
	printf("Digite a linha e a coluna em que deseja posicionar uma célula viva: ");
	scanf("%d %d", &linha, &coluna);
	if(linha == -1 && coluna == -1)
		O_JOGO();
	else if  (linha <1 || linha >DIM || coluna <1 || coluna>DIM)
		printf("Posição inválida, tente outra vez!\n");
	else
		Jogo[linha+1][coluna+1] = 1;
	}	
}

void IniRand()
{
	printf("\nQuantas gerações você deseja? \n");
	scanf("%d",&totalGer);
	srand(time(NULL));
	for(int i=1; i<DIM;i++)
		for(int j=1; j<DIM; j++)
			Jogo[i][j]=rand()%2;
	O_JOGO();
}


void ChecarVizinhos()
{
	int ct=0;
	for(int i=1;i<(DIM+2);i++)
	{
		for(int j=1;j<(DIM+2);j++)
		{
			ct=0;
			if (Jogo[i-1][j-1]==1)
				ct++;
			if (Jogo[i-1][j]==1)
				ct++;
			if (Jogo[i-1][j+1]==1)
				ct++;
			if (Jogo[i][j-1]==1)
				ct++;
			if (Jogo[i][j+1]==1)
				ct++;
			if (Jogo[i+1][j-1]==1)
				ct++;
			if (Jogo[i+1][j]==1)
				ct++;
			if (Jogo[i+1][j+1]==1)
				ct++;
			if(Jogo[i][j]==1)
				{
					if(ct == 2 || ct == 3 )
						TabuleiroAuxiliar[i][j]=1;					
					else
						TabuleiroAuxiliar[i][j]=0;	
					
					
				}
			if (Jogo[i][j]==0 && ct==3)
				TabuleiroAuxiliar[i][j]=1;
			if(Jogo[i][j]==2)
				TabuleiroAuxiliar[i][j]=2;		
			
		}
	}
	for(int i=1; i<=DIM;i++)
		for(int j=1; j<=DIM; j++)
			Jogo[i][j]=TabuleiroAuxiliar[i][j];
	O_JOGO();
}
	
void O_JOGO()
{
	while (ctGeracao<=totalGer)
	{
		printf("\n\n---------Geração %d---------\n\n",ctGeracao);
		for(int i=1; i<DIM;i++)
	    {
	        for(int j=1; j<DIM; j++)
	        {
	            if(Jogo[i][j] == 1)printf("O",Jogo[i][j]);
	            if(Jogo[i][j] == 0)printf(" ",Jogo[i][j]);
	        }
	        printf("\n");
	    }
	    sleep(1);
	    ctGeracao++;
	    
			system("cls");
			    
	    ChecarVizinhos();
	}
	if(ctGeracao>totalGer) exit(0);
}
