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
	
	for(int i=1;i<=10;i++)
	{
		if(i<=5)
		{
			for(int j=11;j>11-i;j--)
			{
			soma = soma + M[i][j];
			prod = soma/30;
			}
		}
		else
		{
			for(int j=11;j>i;j--)
			{
			soma = soma + M[i][j];
			prod = soma/30;
			}
		}
	}
	
	if(op[0] == 'S')
		printf("%.1lf\n", soma);
	if(op[0] == 'M')
		printf("%.1lf\n", prod);
		
	return 0;
}
