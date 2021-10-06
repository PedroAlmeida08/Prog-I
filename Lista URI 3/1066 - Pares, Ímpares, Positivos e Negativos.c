#include<stdio.h>

int main()
{
	int n = 0;
	int pares = 0;
	int impares = 0;
	int positivos = 0;
	int negativos = 0;
	int i;
	
	for(i=0;i<5;i++)
	{
		scanf("%d", &n);
		
		if(n%2==0)
			pares++;
		else
			impares++;
			
		if(n>0)
			positivos++;
		else if (n<0)
			negativos++;
	}
	
	printf("%d valor(es) par(es)\n", pares);
	printf("%d valor(es) impar(es)\n", impares);
	printf("%d valor(es) positivo(s)\n", positivos);
	printf("%d valor(es) negativo(s)\n",negativos);

	return 0;	
}



