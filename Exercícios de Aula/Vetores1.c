#include <stdio.h>

int main()
{
	int i;
	int abaixoMedia = 0;
	int acimaMedia = 0;
	float notas[4];
	float soma = 0; 
	float media;
	
	for(i=0;i<4;i++)
	{
		printf("Digite uma nota: ");
		scanf("%f", &notas[i]);
		soma += notas[i];
	}
	
	media = soma / 4;
	
	for(i=0;i<4;i++)
	{
		if(notas[i]>=media)
		{
			acimaMedia++;
		}
		else
		{
			abaixoMedia++;
		}
	}
	
	printf("\n");
	printf("Estao na media: %d\n", acimaMedia);
	printf("Abaixo da media: %d\n", abaixoMedia);
	
	return 0;
}
