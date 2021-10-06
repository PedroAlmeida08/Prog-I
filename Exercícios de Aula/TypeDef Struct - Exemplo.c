#include <stdio.h>

int main()
{
	typedef struct
	{
		int matricula;
		int n1;
		int n2;
		int n3;
		int n4;
		int n5;
		float media;
	} aluno;	
	
	int nAlunos;
	printf("Digite o numero de alunos da turma: ");
	scanf("%d", &nAlunos);
	
	for (int i = 1; i <= nAlunos; i++)
	{	
		aluno a; //Definição de variável: <tipo> <nome>;
		printf("Digite a matricula: ");
		scanf("%d", &a.matricula);
		printf("\n");
		
		printf("Digite as cinco notas (n1 n2 n3 n4 n5): ");
		scanf("%f %f %f %f %f", &a.n1, &a.n2, &a.n3, &a.n4, &a.n5);
		
		//float sum_nota = aluno.n1 + aluno.n2 + aluno.n3 + aluno.n4 + aluno.n5; ->>> aluno é o tipo, não a variável
		//aluno.n1 equivale a falar a = int + 3
		float sum_nota = a.n1 + a.n2 + a.n3 + a.n4 + a.n5;
		a.media =  (sum_nota) / 5;
		
		if(a.media > 6)
		{
			printf("Aprovado!\n");
		}
		else
		{
			printf("Reprovado!\n");
		}
	}
	return 0;
}
