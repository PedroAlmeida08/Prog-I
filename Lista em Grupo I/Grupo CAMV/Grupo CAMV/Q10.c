#include <stdio.h>
 
int main() {
	float distancia, subida,descida;
	printf("Digite a distancia total entre as duas cidades em km: ");
	scanf("%f", &distancia);
	printf("Digite o consumo do carro durante a subida em km/l: ");
	scanf("%f",&subida);
	printf("Digite o consumo do carro durante descida em km/l: ");
	scanf("%f",&descida);
	float combustivel = distancia/subida + distancia/descida;
	printf("O total de combustivel gasto, em litros, eh %.2f",combustivel);
	return 0;
}
