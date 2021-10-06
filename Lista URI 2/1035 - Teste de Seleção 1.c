#include <stdio.h>
 
int main() {
 
    int A, B, C, D, AB, CD;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    AB = A + B;
    CD = C + D;
    
    if (B>C && D>A && CD >AB && A >0 && B>0 && C>0 && D>0 && A%2 == 0)
    	
		printf("\nValores aceitos\n");
    		
    		else
    			printf("\nValores nao aceitos\n");
 
    return 0;
}
