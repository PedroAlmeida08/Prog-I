//Aluno: João Pedro de Almeida dos Santos
//Questão 3

#include <stdio.h>

int main()
{
	int n = 1;
	int i = 1;
	int reg = 0;
	
	while(reg<200)
	{
		if(n%2==0)
		{
			while(n%2==0)
			{
				n = n/2;
			}
		}
		if(n%3==0)
		{
			while(n%3==0)
			{
				n = n/3;
			}
		}
		if(n%5==0)
		{
			while(n%5==0)
			{
				n = n/5;
			}
		}
		if(n==1)
		{
			reg++;
			printf("%d\n", i);
		}
		
		i++;
		n = i;
	}
	
	return 0;
}
