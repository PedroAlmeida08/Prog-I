#include <stdio.h>

int main()
{
	int qtdd;
	char n[255];
	fgets(n,14,stdin);
	
	int i = 0;
	while(n[i] != '\0')
	{
		if(n[i] == 'a' || n[i] == 'A')
		qtdd++;
		i++;
	}
	
	printf("%d", qtdd);
	
	return 0;
}
