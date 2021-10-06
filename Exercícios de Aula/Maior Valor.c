#include <stdio.h>
 
int main() {
 
    int A, B, C, resultado;
    
    scanf("%d %d %d", &A, &B, &C);
    
    if(A > B && A > C)
    resultado = A;
    else 
		if(B > A && B > C)
		resultado = B;
		else
			if(C > A && C > B)
			resultado = C;
			
	printf("%d\n", resultado); 
    
    return 0;
}
