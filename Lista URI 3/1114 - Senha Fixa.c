#include<stdio.h>

int main()
{
	int n = 0;
	
	while(n != 2002)
	{
		scanf("%d", &n);
		if(n == 2002)
		printf("Acesso Permitido\n");
		else
		printf("Senha Invalida\n");
	}
		
	return 0;
}
