#include <stdio.h>

int main()
{
	int num[30];
	
	for(int i=0;i<30;i++)
	{
		printf("Digite uma nota: ");
		scanf("%d", &num[i]);
	}
	
	printf("\n");
	
	for(int i=29;i>=0;i--)
	{
		printf("%d\n", num[i]);
	}
	
	return 0;
}
