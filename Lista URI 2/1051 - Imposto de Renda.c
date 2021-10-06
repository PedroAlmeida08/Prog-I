#include <stdio.h>

int main()
{
	double salario, condicao, v1, v2, v3;
	
	scanf("%lf", &salario);
	
	if(salario <= 2000.00)
		printf("Isento\n");
			
			else if((2000.00 < salario) && (salario <= 3000.00)){
				v1 = salario - 2000;
				condicao = v1 * 0.08;
				printf("R$ %.2lf\n", condicao);
			}
					
				else if((3000.0 < salario) && (salario <= 4500.00)){
					v1 = 1000;
					v2 = salario - 3000;	
					condicao = (v1 * 0.08) + (v2 * 0.18);
					printf("R$ %.2lf\n", condicao);
				}
					
						else if(4500.00 < salario){
							v1 = 1000;
							v2 = 1500;
							v3 = salario - 4500;
							condicao = (v1 * 0.08) + (v2 * 0.18) + (v3 * 0.28);
							printf("R$ %.2lf\n", condicao);
						}
	
	return 0;
}
