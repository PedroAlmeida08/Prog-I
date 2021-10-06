#include <stdio.h>

int main() {
	double x;
	scanf("%lf", &x);
	double quad = x*x, cube = x*x*x, quart = x*x*x*x, um=x;
	double result;
	result = (x*(-x+quad-cube+quart))/(-x*(x-quad+cube-quart));
    printf("O resultado da operacao para o valor x = %.2lf eh de %.2lf",x,result);
	return 0;
}
