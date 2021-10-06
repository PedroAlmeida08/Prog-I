#include <stdio.h>
 
int main() {
 
   int NUMBER, WORKED_HOURS;
   float DOLARS_PER_HOUR, SALARY;
   
   scanf("%d %d %f", &NUMBER, &WORKED_HOURS, &DOLARS_PER_HOUR);
   
   SALARY = WORKED_HOURS * DOLARS_PER_HOUR;
   
   printf("NUMBER = %d\n", NUMBER);
   printf("SALARY = U$ %.2f\n", SALARY);
   
    return 0;
}
