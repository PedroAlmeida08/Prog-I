#include <stdio.h>

int primos(int n)
{
	return	for(int i=0;i<n;i++)
			{
				int div = 0;
				if(i%n == 0)
				div++;
				if(div == 2)
				printf("Primo!\n");
				else
				printf("Nao Primo!\n");
			}
}
int main()
{
	int n;
	
	scanf("%d", &n);
	
	printf(primos(n)); 
	
	return 0;
}
