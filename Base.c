#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale (LC_ALL, "");
	system("color 0F");

	printf("Olá Mundo!\n");
	
	return 0;
}

