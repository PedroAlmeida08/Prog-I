#include <stdio.h>

int main()
{
	double salario, salario_novo, reajuste;
	int percent;
	
	scanf("%lf", &salario);
	
	if(0 <= salario && salario <= 400.00)
	{
		salario_novo = salario * 1.15;
			reajuste = salario_novo - salario;
				percent = 15;
	}
					else if(400.01 <= salario && salario <= 800.00)
					{
						salario_novo = salario * 1.12;
							reajuste = salario_novo - salario;
								percent = 12;
					}
								else if(800.01 <= salario && salario <= 1200.00)
								{
									salario_novo = salario * 1.10;
										reajuste = salario_novo - salario;
											percent = 10;
								}						
												else if(1200.01 <= salario && salario <= 2000.00)
												{
													salario_novo = salario * 1.07;
														reajuste = salario_novo - salario;
															percent = 7;
												}
																else if (2000 < salario)
																{
																	salario_novo = salario * 1.04;
																		reajuste = salario_novo - salario;
																			percent = 4;
																}
	printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", salario_novo, reajuste, percent);
	
	return 0;
}
