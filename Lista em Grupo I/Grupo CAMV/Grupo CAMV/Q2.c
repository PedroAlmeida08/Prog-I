#include <stdio.h>
int main()
{
/* A questão 2 foi pedido para achar o valor resultante do código dado, 
"Val3 = -10" porque a ultima linha sobrescreve a predecessora, fazendo com que Val3 = Val1-Val2,
 ou seja Val3 = 10-20 o que resulta em -10. O programa referente a questão foi feito somente para checar o resultado da conta. */
	int Val1,Val2,Val3;
	Val1 = 10;
	Val2 = 20;
	Val3 = Val2-Val1; // Nessa linha a variavel 3 recebe 20-10 = 10
	Val3 = Val1-Val2; // Nessa linha a variavel é sobre-escrita e passa a receber 10-20 = -10
	printf("Val3 = %d",Val3); // O programa sempre irá mostrar o resultado "Val3 = -10"
return 0;
}
