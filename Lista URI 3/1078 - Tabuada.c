#include<stdio.h>

int main()
{
	int n, resultado, i;
	
	scanf("%d", &n);
	
	for(i=1;i<11;i++)
	{
		resultado = i * n;
		printf("%d x %d = %d\n", i, n, resultado);
	}
		
	return 0;
}
