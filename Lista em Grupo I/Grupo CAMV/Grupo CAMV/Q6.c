#include <stdio.h>
 
int main() {
	float x;
	printf("Digite a quantidade desejada de refresco em litros: ");
	scanf("%f", &x);
	float pagua = 0.8*x;
	float psuco = 0.2*x;
	printf("Para preparar %.2f litros de suco sao necessarios %.2f litros de agua e %.2f litros de suco.\n",x,pagua,psuco);
	return 0;
}
