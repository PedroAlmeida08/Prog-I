#include <stdio.h>

int main()
{
 int x, y, maior, menor, i;
 int  soma = 0;

 scanf("%d%d", &x,&y);

 if(x < y)
 {
  menor = x;
  maior = y;
 }
 else
 {
  maior = x;
  menor = y;
 }

 for(i = (menor + 1); i < maior; ++i)
 {
  if(i % 2 == 1 || i % 2 == -1){
   soma += i;
  }
 }

 printf("%d\n", soma);

 return 0;
}
