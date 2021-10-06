#include <stdio.h>
 
int main() {
	int idade;
	printf("Digite a idade da pessoa: ");
	scanf("%d", &idade);
	int anosbisextos = idade/4;
	int diasbisextos = anosbisextos*366;
	int anosnormais = idade - anosbisextos;
	int diasnormais = anosnormais *365;
	int totaldias = diasbisextos+diasnormais;
	printf("A pessoa já viveu %d dias.\n",totaldias);
	return 0;
}
