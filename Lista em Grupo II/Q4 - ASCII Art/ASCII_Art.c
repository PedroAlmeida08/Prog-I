#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define DIM 24

void menuini(char Arte[DIM][DIM]); // Orlando
void menurot(char Arte[DIM][DIM]); 
void ScanArte(char Arte[DIM][DIM]); // JP
void hor90(int R1,char Arte[DIM][DIM]); // Tobias FEITO
void ant90(int R2,char Arte[DIM][DIM]); // Tobias FEITO
void EspVert(int EV,char Arte[DIM][DIM]); // Orlando FEITO 
void EspHori(int EH,char Arte[DIM][DIM]); // Orlando FEITO

void LeitorTXT(); // JP - Bonus FEITO

int main() 
{
	setlocale (LC_ALL, "");
	char Arte[DIM][DIM];
	menuini(Arte);
	return 0;
}

void ScanArte(char Arte[DIM][DIM]) // Fun��o que pede ao usu�rio que digite a arte e a imprime.
{
	for(int i=0; i<DIM; i++)
		for (int j = 0; j<DIM; j++)
			Arte[i][j] =' ';
	printf("Digite o seu scan art: \n");
	for(int i =0; i<DIM;i++)
	{
		fgets(Arte[i],DIM,stdin);	
	}
	menurot(Arte);
}

void LeitorTXT(char Arte[DIM][DIM])
{
	getchar();
	
	int k=0;
	
	printf("\n---------------------------Algumas Observa��es----------------------------");
	printf("\nPara o bom funcionamento desta fun��o certifique-se que o arquivo a ser \naberto se encontra no mesmo diret�rio que o execut�vel!\n");
	printf("Voc� deve digitar o nome do arquivo exatamente como ele �, incluindo \nletras mai�sculas e min�sculas!\n");
	printf("Como por exemplo, Casa.txt, porta.txt, etc.\n");
	printf("Obs: N�o se esque�a do .txt no final!\n");
	printf("\n");
	
	char nome[80];
   	printf("Digite o nome do arquivo: ");      
   	gets(nome);
   	printf("\n");
	
	FILE *file; //Define um ponteiro do tipo FILE
	file = fopen(nome, "r"); //Abre o arquivo
				 //"r" significa "read", usado na fun��o "fopen" para ler arquivos
	
	if(file == NULL){ //Se o ponteiro n�o apontar para nada, ou seja, se o nome digitado for diferente do nome do arquivo, printa que � inv�lido.
		printf("Arquivo inv�lido.\n");
		printf("Digite Enter para tentar novamente!\n");
		LeitorTXT(Arte);
	}
	
	char arquivo[DIM*DIM];
	while((fgets(arquivo, DIM*DIM, file)) != NULL){ //Imprime at� que encontre um espa�o vazio (NULL), da� para o print.
		printf("%s", arquivo);
	}
	
	printf("\n");
	
	fclose(file);
	
	for(int i=0; i<DIM;i++)
		for (int j=0;j<DIM;j++,k++)
			Arte[i][j] = arquivo[k];
	menurot(Arte);
}

void menuini(char Arte[DIM][DIM])
{
	int opcao;
	printf("\n------------------Selecione o modo de enviar a ASCII Art------------------");
	printf("\n 1 - Digitar o arquivo manualmente no formato [23][23].");
	printf("\n 2 - Enviar um arquivo no formato .txt ");	
	printf("\n 0 - Sair \n");
	printf("\n\nDigite a op��o desejada: ");
	scanf("%d",&opcao);
	printf("\n");
	switch(opcao)
	{
		case 1:
			{
				ScanArte(Arte);
			}
			break;
		case 2:
			{
				LeitorTXT(Arte);
			}
			break;
		case 0:
			{
				exit(0);
			}
		default: 
			{
				printf("\nOp��o n�o encontrada! Digite novamente!");
				menuini(Arte);
			}
	}
}

void menurot(char Arte[DIM][DIM])
{
	int opcao,R1,R2,EV,EH;
	printf("\n--------------------------Menu de Transforma��es--------------------------");
	printf("\n 1 - Rotacione a imagem em 90� no sentido hor�rio.");
	printf("\n 2 - Rotacione a imagem em 90� no sentido anti-hor�rio. ");
	printf("\n 3 - Aplique espelhamentos verticais na imagem. ");	
	printf("\n 4 - Aplique espelhamentos horizontais na imagem. ");	
	printf("\n 0 - Sair \n");
	printf("\n\nDigite a op��o desejada: ");
	scanf("%d",&opcao);
	switch(opcao)
	{
		case 1:
			{
				printf("\nQuantas rota��es deseja fazer? ");
				scanf("%d",&R1);
				hor90(R1,Arte);
			}
			break;
		case 2:
			{
				printf("\nQuantas rota��es deseja fazer? ");
				scanf("%d",&R2);
				ant90(R2,Arte);
			}
			break;
		case 3:
			{
				printf("\nQuantos espelhamentos deseja fazer? ");
				scanf("%d",&EV);
				EspVert(EV,Arte);
			}
			break;
		case 4:
			{
				printf("\nQuantos espelhamentos deseja fazer? ");
				scanf("%d",&EH);
				EspHori(EH,Arte);
			}
			break;
		case 0:
			{
				exit(0);
			}
		default: 
			{
				printf("\nOp��o n�o encontrada! Digite novamente!");
				menurot(Arte);
			}
	}
}

void hor90(int R1,char Arte[DIM][DIM])
{
		
	int i=0,j=0;
	int c=0;
	int l= DIM-1-c;
	char temp = 0;
	for(int ctR1=0; ctR1<R1;ctR1++)
	{
		for(c=0;c<DIM/2;++c)
		{
			int l=DIM-1-c;
			for(int i=0; i<l-c;++i)
			{
				char temp=Arte[c][c+i];
				Arte[c][c+i]=Arte[l-i][c];
				Arte[l-i][c]=Arte[l][l-i];
				Arte[l][l-i]=Arte[c+i][l];
				Arte[c+i][l]=temp;
			}
			}	

	    for(int i =0; i<DIM; i++)
	    {
	        for(int j =0; j<DIM; j++)
	        {
	            printf("%c ",Arte[i][j]);
	        }
	        printf("\n");
	    }
	}
	printf("\n \n");
		
	int resp;
	printf("Deseja aplicar outra transforma��o? Digite 1 para sim e 2 para n�o!\n");
	scanf("%d", &resp);
	if(resp == 1)
	{
		menurot(Arte);
	}
	else if(resp == 2)
		exit(0);			
}

void ant90(int R2,char Arte[DIM][DIM])
{

	int i=0,j=0;
	int c=0;
	int l= DIM-1-c;
	char temp = 0;
	for(int ctR2=0; ctR2<R2;ctR2++)
	{
			for(c=0;c<DIM/2;++c)
		{
			int l=DIM-1-c;
			for(int i=0; i<l-c;++i)
			{
				char temp=Arte[c+i][l];
				Arte[c+i][l]=Arte[l][l-i];
				Arte[l][l-i]=Arte[l-i][c];
				Arte[l-i][c]=Arte[c][c+i];
				Arte[c][c+i]=temp;
			}
			}	

	    for(int i =0; i<DIM; i++)
	    {
	        for(int j =0; j<DIM; j++)
	        {
	            printf("%c ",Arte[i][j]);
	        }
	        printf("\n");
	    }
	}
	printf("\n \n");
		
		int resp;
		printf("Deseja aplicar outra transforma��o? Digite 1 para sim e 2 para n�o!\n");
		scanf("%d", &resp);
		if(resp == 1)
		{
			menurot(Arte);
		}
		else if(resp == 2)
			exit(0);
}
	
	
void EspVert(int EV, char Arte[DIM][DIM])
{
	int ctEV=0;
	int i,j,linha,coluna,aux;
	for(ctEV=0; ctEV<EV;ctEV++)
	{
				
		for(coluna=0,j=0;j<DIM;j++,coluna++)
		{
		
			for (linha=0,i=(DIM-1);i>=(DIM/2);i--,linha++)
			{
				aux = Arte[linha][coluna];
				Arte[linha][coluna]=Arte[i][j];
				Arte[i][j] = aux;
			}
		}	
	}
	for(int i=0; i<DIM; i++)
	{
		printf("%s",Arte[i]);
	}
	printf("\n \n");
		
		int resp;
		printf("Deseja aplicar outra transforma��o? Digite 1 para sim e 2 para n�o!\n");
		scanf("%d", &resp);
		if(resp == 1)
		{
			menurot(Arte);
		}
		else if(resp == 2)
			exit(0);	
}

void EspHori(int EH, char Arte[DIM][DIM])
{
	int ctEH=0;
	int i,j,linha,coluna,aux;
	for(ctEH=0; ctEH<EH;ctEH++)
	{		
		for(linha=0;linha<DIM;linha++)
		{
			int len;
			len = strlen(Arte[linha]);
			for (coluna=0;coluna<((len-1)/2);coluna++)
			{
				aux = Arte[linha][coluna];
				Arte[linha][coluna]=Arte[linha][(len-1)-coluna];
				Arte[linha][(len-1)-coluna] = aux;
			}
		}		
	}
	for(int i=0; i<DIM; i++)
		{
			printf("%s",Arte[i]);
		}

	printf("\n \n");
		
		int resp;
		printf("Deseja aplicar outra transforma��o? Digite 1 para sim e 2 para n�o!\n");
		scanf("%d", &resp);
		if(resp == 1)
		{
			menurot(Arte);
		}
		else if(resp == 2)
			exit(0);
}

