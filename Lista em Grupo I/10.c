#include <stdio.h>

int main ()
{
	double distancia, subida, descida, combustivel;
	
	printf("Digite a distancia total entre as cidades (em km): ");
	scanf("%lf", &distancia);
	printf("Digite o consumo do carro durante a subida (em km/l): ");
	scanf("%lf", &subida);
	printf("Digite o consumo do carro durante a descida (em km/l): ");
	scanf("%lf", &descida);
	
	combustivel = ((distancia / subida) + (distancia / descida));
	
	printf("\nO total de combustivel gasto em uma viagem de %.2lf kilometros eh de %.2lf litros.\n", distancia, combustivel);
	
	return 0;
}
