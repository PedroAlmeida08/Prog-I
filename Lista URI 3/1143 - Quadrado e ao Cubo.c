#include <stdio.h>
#include <math.h>
 
int main() 
{
 	int n, fst, sec, trd, i;
 	
 	scanf("%d", &n);
 	
 	for(i=1;i<=n;i++)
 	{
 		fst = pow(i,1);
 		sec = pow(i,2);
 		trd = pow(i,3);
 		
 		printf("%d %d %d\n", fst, sec, trd);
	}
 	
    return 0;
}
