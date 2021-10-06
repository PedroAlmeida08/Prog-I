#include <stdio.h>

int main()
{
	double M[12][12];
	double soma = 0.0;
	char op[5];
	int i, j, C;
	
	scanf("%d", &C);
	scanf("%s", &op);
	
	for(i=0;i<12;i++)
		for(j=0;j<12;j++)
		scanf("%lf", &M[i][j]);
		
	for(i=0;i<12;i++)
		soma = soma + M[i][C];
		
	if(op[0]=='M')
		soma = soma/12.0;
		
	printf("%.1lf\n", soma);
		
	return 0;
}
