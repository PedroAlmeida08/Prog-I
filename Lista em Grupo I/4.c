#include <stdio.h>
 
int main() 
{
	double comprimento, altura, area;
	
	printf("Digite as medidas do terreno (em metros).\n");
	printf("Comprimento: ");
	scanf("%lf", &comprimento);
	printf("Altura: ");
	scanf("%lf", &altura);
	
	area = comprimento * altura;
	
	printf("\nA area do terreno eh de %.2lf metros quadrados.\n", area);
	
	return 0;
}
