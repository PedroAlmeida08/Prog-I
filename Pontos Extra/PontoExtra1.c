#include <stdio.h>

int main ()
{
	double a, b, c, maior, medio, menor;
	
	printf("Digite valores diferentes para A, B e C!\nApos digitar o valor aperte a tecla Enter.\n");
	
	printf("\nDigite o valor de A: ");
	scanf("%lf", &a);
	
	printf("Digite o valor de B: ");
	scanf("%lf", &b);
	
	printf("Digite o valor de C: ");
	scanf("%lf", &c);
	
	// calcula o maior valor
	if(a > b && a > c)
		maior = a;
		
			else if(b > a && b > c)
				maior = b;
				
					else if(c > a && c > b)
						maior = c;
	
	// calcula o valor medio
	if((b < a && a < c) ||(c < a && a < b))
		medio = a;
		
			else if((a < b && b < c) ||(c < b && b < a))
				medio = b;
				
					else if((a < c && c < b) ||(b < c && c < a))
						medio = c;
					
	// calcula o menor valor
	if(a < b && a < c)
		menor = a;
		
			else if(b < a && b < c)
				menor = b;
				
					else if(c < a && c < b)
						menor = c;
	
	
	// imprime o resultado
	printf("\n%.2lf > %.2lf > %.2lf\n", maior, medio, menor);		 

	return 0;
}
