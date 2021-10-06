//Aluno: João Pedro de Almeida dos Santos
//Questão 4

#include <stdio.h>

int main()
{	
	float v, total;
	int n, m, resto1, resto2;
	
	printf("Digite o valor da aposta: ");
	scanf("%f", &v);
	printf("Digite os 4 numeros que voce escolheu: ");
	scanf("%d", &n);
	printf("Digite o numero sorteado: ");
	scanf("%d", &m);
	
	printf("\n");
	
	if(n == m)                  
	{
		total = v * 3000;
	}
	else if(n!=m)
	{
		if(n%1000 == m%1000)    
		{
			total = v * 500;
		}
		else if(n%100 == m%100) 
		{
			total = v * 50;
		}
		else if(n%100 != m%100)  
		{
			resto1 = n%100;
			resto2 = m%100;
			
			if((resto1/4)==(resto2/4))
			{
				total = v * 16;
			}
		}
		else
		{
			total = 0;
		}
	}
		
	printf("Valor a ser recebido: %.2f reais.\n", total);	
		
	return 0;
}
