void menu()
{
	int opcao;
	printf("\n--------------------Escolha a forma de jogo--------------------");
	printf("\n 1 - Inicialização Randômica.");
	printf("\n 2 - Escolha onde se localizarão as células vivas. ");	
	printf("\n 0 - Sair \n");
	printf("\n\nDigite a opção desejada: ");
	scanf("%d",&opcao);
	switch(opcao)
	{
		case 1:
			{
				IniRand();
			}
			break;
		case 2:
			{
				IniUser();
			}
			break;
		case 0:
			{
				Exit();
			}
			break;
		default: 
			{
				printf("\nOpção não encontrada! Digite novamente!");
				menu(opcao);
			}
	}
}
