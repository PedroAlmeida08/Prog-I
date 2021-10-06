#include <stdio.h>

int main()
{
	float vetA[100];
	
	for (int i=0;i<100;i++)
	{
		scanf("%f", &vetA[i]);
		if(vetA[i] <= 10)
			printf("A[%d] = %.1f\n", i , vetA[i]);
	}
	
	return 0;
}
