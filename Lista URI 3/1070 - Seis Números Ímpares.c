#include<stdio.h>

int main()
{
	int x, i;
	
	scanf("%d", &x);
	
	for(i=x;i<=(x+11);i++) //11 porque os impares aparecem de 2 em 2, ou seja, em 12 numeros, 6 serão impares e 6 serão pares
	{
		if(i%2!=0)
		printf("%d\n", i);	
	}
	
	return 0;	
}
