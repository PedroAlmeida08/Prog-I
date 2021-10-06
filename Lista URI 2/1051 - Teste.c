#include <stdio.h>

int main()
{
	double salario, faixa1, faixa2, taxa1, taxa2;
	
	scanf("%lf", &salario);
	
	if (salario <= 2000.00)
		printf("Isento\n");
	
	faixa1 = salario - 2000;
		
		if (0 < faixa1 && faixa1 <= 1000.00)
		{
			taxa1 = faixa1 * 0.08;
				
				faixa2 = salario - 3000;
		}
				
					else if (1000 < faixa1 && faixa1 <= 2500.00);
						taxa2 = faixa1 + (faixa2 * 0.18);
		
	
	printf("%.2lf %.2lf", taxa1, taxa2);
	
	return 0;
}
