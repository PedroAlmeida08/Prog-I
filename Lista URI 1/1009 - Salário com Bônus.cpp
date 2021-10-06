#include <stdio.h>
 
int main() {
 
   char NOME[4];
   float COMISSION;
   double FIX_SALARY, SALES_AMOUNT, TOTAL;
   
   scanf("%s %lf %lf", &NOME, &FIX_SALARY, &SALES_AMOUNT);
   
   COMISSION = 0.15;
   
   TOTAL = FIX_SALARY + (SALES_AMOUNT * COMISSION);
   
   printf("TOTAL = R$ %.2lf\n", TOTAL);
 
    return 0;
}
