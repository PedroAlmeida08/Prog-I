#include <stdio.h>

int main() 
{
	double X, resultado;
	
	printf("Digite um valor para x: ");
	scanf("%lf", &X);
	
	resultado = (X*((-X) + (X * X) + ((-X) * (-X) * (-X)) + (X * X * X * X) ))/
	            ((-X) * (X - (X * X) + (X * X * X) - (X * X * X * X)));
	            
	printf("\nO valor de x eh: %.2lf\n", resultado);
	
	  return 0;
}
