#include <stdio.h>

int main ()
{
	int n, qtd;
	double valor;
	
	scanf("%d %d", &n, &qtd);
	
	if (n == 1)
		valor = qtd * 4.00;
		
			else if (n == 2)
				valor = qtd * 4.50;
				
					else if (n == 3)
						valor = qtd * 5.00;
						
							else if (n == 4)
								valor = qtd * 2.00;
								
									else if (n ==5)
										valor = qtd * 1.50;
										
	printf("Total: R$ %.2lf\n", valor);
	
	return 0;
}
