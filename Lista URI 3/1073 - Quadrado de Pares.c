#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, pot;
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2 == 0)
		{
			pot = pow(i,2);
			printf("%d^2 = %d\n", i, pot);
		}
	}
	
	return 0;
}
