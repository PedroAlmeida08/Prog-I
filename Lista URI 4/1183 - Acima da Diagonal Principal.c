#include <stdio.h>

int main()
{
	char op[1];
	double soma = 0, prod = 1;
	double M[12][12];
	
	scanf("%s", &op);
	
	for(int i=0;i<12;i++)
	{
		for(int j=0;j<12;j++)
		{
			scanf("%lf", &M[i][j]);
		}
	}
	
	for(int i=0;i<=10;i++)
	{
		for(int j=i+1;j<=11;j++)
		{
		soma = soma + M[i][j];
		prod = soma/((144-12)/2);
		}
	}
		
	
	if(op[0] == 'S')
		printf("%.1lf\n", soma);
	if(op[0] == 'M')
		printf("%.1lf\n", prod);
		
	return 0;
}
