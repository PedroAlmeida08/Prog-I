#include<stdio.h>

int main ()
{
	int n, ct;
	float nota1, nota2, nota3, media;
	
	ct = 1;
	
	printf("Digite o numero de alunos: ");
	scanf("%d", &n);
	
	while(ct <= n)
	{
	printf("\nDigite a nota da P1 do aluno %d: ", ct);
	scanf("%f", &nota1);
	printf("Digite a nota da P2 do aluno %d: ", ct);
	scanf("%f", &nota2);
	printf("Digite a nota da P3 do aluno %d: ", ct);
	scanf("%f", &nota3);
	media = (nota1 + nota2 + nota3) / 3;
	printf("\nAluno %d: Media %.2f\n", ct,media);
	ct++;
	}  	
	
	return 0;
}
