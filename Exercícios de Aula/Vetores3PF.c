#include <stdio.h>

int main()
{
	int N1[15];	
	for(int i=0;i<15;i++)
	{
		scanf("%d", &N1[i]);
	}
	
	//inveter o vetor
	int N2[15];
	for(int i=0;i<15;i++)
	{
		N2[i] = N1[14-i];
	}
	
	printf("\n");
	
	printf("Posicoes impares: \n");	
	for(int i=1;i<15;i=i+2)
	{
			printf("%d\n", N2[i]);
	}
	
	printf("Posicoes pares: \n");
	for(int i=0;i<15;i=i+2)
	{
			printf("%d\n", N2[i]);
	}
	
	return 0;
}
