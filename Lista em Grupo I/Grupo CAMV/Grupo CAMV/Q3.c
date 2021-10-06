#include <stdio.h>

int main() {
	double n1,n2;
	printf("Digite o primeiro numero: ");
	scanf("%lf",&n1);
	printf("Digite o segundo numero: ");
	scanf("%lf",&n2);
	n1 = n1 * 1.3;
	n2 = n2*0.75;
	printf("O primeiro numero acrescido de 30 por cento eh igual a %.2lf e o segundo numero decrescido de 25 por cento eh igual a %.2lf",n1,n2);
	return 0;
}
