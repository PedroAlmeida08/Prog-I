#include <stdio.h>

int main()
{
	int n, fat;
	
	scanf("%d", &n);
	
	for(fat=1;n>1;n--)
	{
		fat = fat * n;
	}
	
	printf("%d", fat);
	
	return 0;
}
