#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	return 0;
}

void IniUser(int linha, int coluna)
{
	while(1)
	{
	printf("Digite a linha e a coluna em que deseja posicionar uma c�lula viva: ");
	scanf("%d %d", &linha, &coluna);
	if(linha == -1 && coluna == -1)
		break;
	else if  (linha <1 | | linha >30 | | coluna <1 | | coluna>30)
		printf("Posi��o inv�lida, tente outra vez!");
	else
		Matriz[linha][coluna] = 1;
	}	
}
