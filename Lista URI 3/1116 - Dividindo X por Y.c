#include <stdio.h>
 
int main() 
{
 	int n, i;
	float x, y;
	float div = 0;
 	
 	scanf("%d", &n);
	 
	for(i=0;i<n;i++)
	{
		scanf("%f %f", &x, &y);
		if(y != 0)
		{
			div = x / y;
			printf("%.1f\n", div);
		}
		else
			printf("divisao impossivel\n");
	}   
 
    return 0;
}
