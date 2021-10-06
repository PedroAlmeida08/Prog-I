#include <stdio.h>
 
int main() {
	double altura, base;
	printf("Digite as dimensoes do terreno em metros: ");
	scanf("%lf %lf",&altura,&base);
	double area = altura*base;
	printf("A area do terro eh de %.2lf metros quadrados.\n",area);
	return 0;
}

