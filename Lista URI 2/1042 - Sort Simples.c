#include <stdio.h>

int main()
{
	int a, b, c, maior, medio, menor;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b && a > c)
		maior = a;
		
			else if (b > a && b > c)
				maior = b;
				
					else if (c > a && c > b)
						maior = c;
						
	if ((b < a && a < c) || (c < a && a < b))
		medio = a;
		
			else if ((a < b && b < c) || (c < b && b < a))
				medio = b;
				
					else if ((a < c && c < b) || (b < c && c < a))
						medio = c;
						
	if (a < b && a < c)
		menor = a;
		
			else if (b < a && b < c)
				menor = b;
				
					else if (c < a && c < b)
						menor = c;
						
	printf("%d\n%d\n%d\n", menor, medio, maior);
	printf("\n%d\n%d\n%d\n", a, b, c);
	
	
	return 0;
}
