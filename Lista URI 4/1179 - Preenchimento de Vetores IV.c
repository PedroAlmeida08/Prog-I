#include <stdio.h>

int main()
{
	int vetPar[5], vetImpar[5];
	int n, par = 0, impar = 0;
	
	for(int i=0;i<15;i++)
	{
		scanf("%d", &n);
		
		if(n%2==0)
		{
			vetPar[par] = n;
			par++;
			if(par == 5)
			{
				for(int j=0;j<5;j++)
				{
					printf("par[%d] = %d\n", j, vetPar[j]);
				}
				par = 0;
			}
		}
		else
		{
			vetImpar[impar] = n;
			impar++;
			if(impar == 5)
			{
				for(int j=0;j<5;j++)
				{
					printf("impar[%d] = %d\n", j, vetImpar[j]);
				}
				impar = 0;
			}
		}
	}
	for(int j=0;j<impar;j++)
	{
		printf("impar[%d] = %d\n", j, vetImpar[j]);
	}
	for(int j=0;j<par;j++)
	{
		printf("par[%d] = %d\n", j, vetPar[j]);
	}	
	return 0;
}
