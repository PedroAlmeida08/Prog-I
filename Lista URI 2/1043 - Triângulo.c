#include <stdio.h>

int main ()
{
	double a, b, c, perimetro, area;
	
	scanf("%lf %lf %lf", &a, &b, &c);

	/*Para construir um triângulo é necessário que a medida de qualquer um dos lados seja menor que a soma das medidas 
	dos outros dois e maior que o valor absoluto da diferença entre essas medidas.*/
	
	if((b - c) < a && a < (b + c)){
		perimetro = a + b + c;
			printf("Perimetro = %.1lf\n", perimetro);
	}
				else {
					area = ((a + b) * c) / 2;
						printf("Area = %.1lf\n", area);
				}
	
	return 0;
}
