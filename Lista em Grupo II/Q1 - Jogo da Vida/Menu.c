void menu()
{
	int opcao;
	printf("\n--------------------Escolha a forma de jogo--------------------");
	printf("\n 1 - Inicializa��o Rand�mica.");
	printf("\n 2 - Escolha onde se localizar�o as c�lulas vivas. ");	
	printf("\n 0 - Sair \n");
	printf("\n\nDigite a op��o desejada: ");
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
				printf("\nOp��o n�o encontrada! Digite novamente!");
				menu(opcao);
			}
	}
}
