#include<stdio.h>

int main()
{
	int x, z, i;
	int soma = x;
	
	scanf("%d", &x);
	
	z = x-1;
	
	while(x>z){
	scanf("%d", &z);}
	
    soma = x;
	for(i=1;soma<z;i++)
	{
		soma += (x+i);
	}
	
	printf("%d\n", i);
	
	return 0;
}
