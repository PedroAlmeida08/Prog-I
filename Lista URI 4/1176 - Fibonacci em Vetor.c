#include <stdio.h>

int main()
{
	unsigned long long int N[61];
	int T, n;
	
	scanf("%d", &T);
		
	N[0] = 0;
	N[1] = 1;
	
	for (int i=2;i<=60;i++)
	{
		N[i] = N[i-1] + N[i-2];
	}
	
	for (int i=0;i<T;i++)
	{
		scanf("%d", &n);
		printf("Fib(%d) = %llu\n", n, N[n]);
	}	
	
	return 0;
}
