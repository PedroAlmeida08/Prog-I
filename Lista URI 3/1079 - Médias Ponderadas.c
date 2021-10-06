#include<stdio.h>

int main()
{
	int n;
	int i =0;
	double a, b, c;
	double media = 0;
	
	scanf("%d", &n);
	
	while(i<n)
	{
		scanf("%lf %lf %lf", &a, &b, &c);
		media = ((a*2) +( b*3) + (c*5)) / 10;
		printf("%.1lf", media);
		i++;	
	}
		
	return 0;
}
