#include <stdio.h>

int main()
{
	double M[12][12];
	double soma = 0.0;
	char op[5];
	int i, j, L;
	
	scanf("%d", &L);
	scanf("%s", &op);
	
	for(i=0;i<12;i++)
		for(j=0;j<12;j++)
		scanf("%lf", &M[i][j]);
		
	for(j=0;j<12;j++)
		soma = soma + M[L][j];
		
	if(op[0]=='M')
		soma = soma/12.0;
		
	printf("%.1lf\n", soma);
		
	return 0;
}
