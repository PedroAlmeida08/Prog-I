#include <stdio.h>

int main() {
    int X,Z,acum=1,aux;
    scanf("%d",&X);
    Z = X-1; // Aqui garanto que o Z inicia menor que X
    while(X>=Z){
        scanf("%d",&Z);
    }
    // Aqui ele sai com Z maior que X.
  
    aux = X; // Aqui ponho nessa vari�vel auxiliar o calor do X. Pra usar mas manter o X preservado.
    while(Z>aux){ // O while vai continuar at� o aux (que � onde vou jogar o resultado do somatorio) passar Z. Como diz o nome da quest�o.
        aux = aux + (X + acum); // Aqui aux recebe o valor dele + ( X + acum)
        acum++;
    }
  // Aquele X + acum q cuida para que some da maneira certa. Pq ele vai por que nem no exemplo que dei
// Exemplo de X= 10
// ele vai somando
// aux = 10 + (10 +1)
//proxima itera��o do while
// aux = 21 + (10 +2)
//proxima itera��o do while
// aux = 33 + (10 +3)
// e por ai vai
    printf("%d\n",acum);
// aqui s� printo a resposta msm
return 0;
}
