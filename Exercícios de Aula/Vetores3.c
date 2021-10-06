#include <stdio.h>

int main()
{
	int i, aux, n1[5], n2[5];
	
	for(i=0;i<5;i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &n1[i]);
	}
	
	//inveter o vetor
	for(i=0;i<5;i++)
	{
		n2[i] = n1[4-i];
	}
	
	printf("\n");
	
	printf("Posicoes impares: \n");	
	for(i=1;i<5;i+=2)
	{
			printf("%d\n", n2[i]);
	}
	
	printf("Posicoes pares: \n");
	for(i=0;i<5;i+=2)
	{
			printf("%d\n", n2[i]);
	}
	
	return 0;
}
