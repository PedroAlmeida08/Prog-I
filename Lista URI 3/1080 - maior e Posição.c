#include<stdio.h>

int main()
{
	int n, i;
	int valor = 0;
	int posicao = 0;
	
	for(i=0;i<100;i++)
	{
		scanf("%d", &n);
		if(n > valor)
		{
			valor = n;
			posicao = i + 1;
		}
	}
	
	printf("%d\n", valor);
	printf("%d\n", posicao);
		
	return 0;
}
