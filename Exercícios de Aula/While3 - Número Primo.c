#include <stdio.h>

int main()
{
	int n, divisores, ct;
	
	ct = 1;
	divisores = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	while(ct <= n)
	{
		if((n % ct) == 0)
			divisores++;
		
		ct++;
	}
	
	if(divisores == 2)
		printf("\nEh primo!\n");
	
			else
				printf("\nNao eh primo!\n");
	
	return 0;
}
