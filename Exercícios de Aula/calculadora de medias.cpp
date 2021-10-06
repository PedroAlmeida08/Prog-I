#include <stdio.h>
int main(void)
{
float p1, p2, media; // como as notas geralmente vão até 1 ou 2 casas decimais, usaremos o float
p1=p2=media =0; // iniciando as variaveis com valor nulo
char nome[50]; // definindo o limite de caratecteres para o nome

printf("Informe o nome do aluno(a)[Use '-' ao inves de espaco]: ");
    scanf("%s",nome);
    
printf("Informe a nota da P1[Use valores de 1 a 10]: ");
    scanf("%f", &p1);
    
printf("Informe a nota da P2[Use valores de 1 a 10]: ");
    scanf("%f", &p2);
    
media = (p1+p2)/2;  // a divisão é feia por 2 porque só existem duas notas a serem computadas

if(media>=6){printf("%s obteve uma media de %.2f e foi considerado(a) aprovado.",nome,media);
}
else{printf("%s obteve uma media de %.2f e foi considerado(a) reprovado.",nome,media);
}
return 0;
}
