#include <stdio.h>
 
int main() {
 
    int peca_1, peca_2, num_peca_1, num_peca_2;
    double preco_peca_1, preco_peca_2, valor;
    
    scanf("%d %d %lf %d %d %lf", &peca_1, &num_peca_1, &preco_peca_1, &peca_2, &num_peca_2, &preco_peca_2);
    
    valor = ((num_peca_1 * preco_peca_1) + (num_peca_2 * preco_peca_2));
    
    printf("VALOR A PAGAR: R$ %.2lf\n", valor);
    
    return 0;
}
