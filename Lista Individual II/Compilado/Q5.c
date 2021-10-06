//Aluno: João Pedro de Almeida dos Santos
// Questão 5

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

#define tam 30

void scanMed(int *medJ, int *medP);
bool cincoMed(int *medJ, int *medP);
bool dezMed(int *medJ, int *medP);
bool quinzeMed(int *medJ, int *medP);
void resultado(int *medJ, int *medP);
void mediaJ(int *medJ);
void mediaP(int *medP);

int main() 
{
	setlocale (LC_ALL, "");
	system("color 02");
	
	int medJ[tam];
	int medP[tam];
	int acum = 0;
	int estado = 2;
	
	scanMed(medJ, medP);
	cincoMed(medJ, medP);
	dezMed(medJ, medP);
	resultado(medJ, medP);
	mediaJ(medJ);
	mediaP(medP);
		
	return 0;
}

void scanMed(int *medJ, int *medP)
{
	for(int i=0; i<tam; i++)
	{
		printf("Digite o valor medido no dia %d quando estava em jejum: ", i+1);
		scanf("%d", &medJ[i]);
		printf("Digite o valor medido no dia %d quando estava em em período pós-prandial: ", i+1);
		scanf("%d", &medP[i]);
		printf("\n");
	}
}

bool cincoMed(int *medJ, int *medP)
{	
	int acumC = 0;
	int estadoC = 2;
		
	while(1)
	{
		for(int i=0; i<tam; i++)
		{
			if(medJ[i] > 101 && medP[i] > 141)
			{
				acumC++;
				if(acumC == 5)
				{
					estadoC = 1; //Alterado
					break;
				}	
			}
			else
				acumC = 0;
		}
		break;
	}
		
	bool cn;
	
	if(estadoC == 1)
	{
		cn = true;
		return cn; //Alterado
	}
	else
	{
		cn = false;
		return cn; //Normal
	}
}

bool dezMed(int *medJ, int *medP)
{
	int acumD = 0;
	int estadoD = 2;

	while(1)
	{
		for(int i=0; i<tam; i++)
		{
			if(medJ[i] > 101 || medP[i] > 141)
			{
				acumD++;
				if(acumD == 10)
				{
					estadoD = 1; //Alterado
					break;
				}	
			}
			else
				acumD = 0;
		}
		break;
	}
		
	bool dz;
	
	if(estadoD == 1)
	{
		dz = true;
		return dz; //Alterado
	}
	else
	{
		dz = false;
		return dz; //Normal
	}
}	

bool quinzeMed(int *medJ, int *medP)
{
	int acumQ = 0;

	for(int i=0; i<tam; i++)
	{
		if(medJ[i] > 101 || medP[i] > 141)
			acumQ++;
	}
	
	bool qz;
	
	if(acumQ >= 15)
	{
		qz = true;
		return qz; //Alterado
	}
	else
	{
		qz = false;
		return qz; //Normal
	}

}

void resultado(int *medJ, int *medP)
{	
	bool resultadocn = cincoMed(medJ, medP);
	bool resultadodz = dezMed(medJ, medP);
	bool resultadoqz = quinzeMed(medJ, medP);
	
	system("cls");
	
	if(resultadocn == true && resultadodz == true && resultadoqz == true)
		printf("Alterado\n");
	else
		printf("Normal\n");
}

void mediaJ(int *medJ)
{
	float sumJ = 0;
	
	for(int i=0; i<tam; i++)
	{
		sumJ = sumJ + medJ[i];
	}
	
	sumJ = sumJ/tam;
	
	printf("Jejum: %.2f\n", sumJ);
}

void mediaP(int *medP)
{
	float sumP = 0;
	
	for(int i=0; i<tam; i++)
	{
		sumP = sumP + medP[i];
	}
	
	sumP = sumP/tam;
	
	printf("Pós-Prandial: %.2f\n", sumP);
}

