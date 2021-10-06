#include <stdio.h>

int main ()
{
	int inicial, final, duracao;
	
	scanf("%d %d", &inicial, &final);
	
	if(inicial > final)
		duracao = (24 - inicial) + final;
		
	if(inicial == final)
		duracao = 24;
				
	if (final > inicial)
		duracao = final - inicial;
			
	printf("O JOGO DUROU %d HORA(S)\n", duracao);
	
	return 0;
}
