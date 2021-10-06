#include <stdio.h>
#include <string.h>

int main()
{
	char teste[255];
	fgets(teste,9,stdin);
	
	printf("Tam: %d", strlen(teste)-1);
	
	
	return 0;
}
