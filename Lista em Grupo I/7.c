#include <stdio.h>

int main ()
{
	double a, b, x, y;
	
	printf ("Digite o coeficiente angular da reta: ");
	scanf("%lf", &a);
	printf ("Digite o coeficiente linear da reta: ");
	scanf("%lf", &b);
	
	y = 0;
	x = -b / a;
	
	printf("\nA reta toca o eixo x nas coordenadas: (%.2lf, %.2lf)\n", x, y);
	
	return 0;
}
