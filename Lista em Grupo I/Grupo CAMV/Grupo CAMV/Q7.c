#include <stdio.h>
 
int main() {
	float a,b;
	printf("Digite o coeficiente a da reta: ");
	scanf("%f", &a);
	printf("Digite o coeficiente b da reta: ");
	scanf("%f", &b);
	float xcoord = -b/a ;
	printf("As coordenadas do ponto onde a reta toca o eixo x sao (%.2f,0.00).\n",xcoord);
	return 0;
}
