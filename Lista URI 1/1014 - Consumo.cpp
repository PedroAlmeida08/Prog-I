#include <stdio.h>
 
int main() {
 
    int X;
    float Y;
    double consumo_medio;
    
    scanf("%d %f", &X, &Y);
    
    consumo_medio = X / Y;
    
    printf("%.3lf km/l\n", consumo_medio);
 
    return 0;
}
