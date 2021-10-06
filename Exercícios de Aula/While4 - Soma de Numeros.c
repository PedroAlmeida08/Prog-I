#include <stdio.h>

int main()
{
	float n = 0;
	float somaReais = 0;
	
	
	while(n != -1)
	{
		somaReais = somaReais + n;
		scanf("%f", &n);
	}
	
	printf("\n%.2f\n", somaReais);
	
	return 0;
}
