#include <stdio.h>

int main()
{
	int n, i;
	int f1 = 0;
	int f2 = 1;
	int f3 = f1 + f2;
	
	scanf("%d", &n);

	printf("%d %d ", f1, f2);
	

	
	for(i=3;i<=n;i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		
		if (i == n)
			printf("%d\n", f3);
		else
			printf("%d ", f3);
	}
		
	return 0;
}
