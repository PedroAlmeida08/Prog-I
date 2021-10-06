#include <stdio.h>

int main()
{
	int n[1000];
	int t;
	
	scanf("%d", &t);
	
	for(int i=0;i<1000;i++)
	{
		n[i] = i%t;
		printf("N[%d] = %d\n", i, n[i]);
	}
	
	return 0;
}
