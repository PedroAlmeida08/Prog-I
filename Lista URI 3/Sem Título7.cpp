#include <stdio.h>

int main()
{
	int i, maior, menor, sum;
	int m = 1;
	int n = 1;
	
	while(m<=0 && n<=0)
	{
		scanf("%d %d", &m, &n);
		
		if(m>n){
			maior = m;
			menor = n;}
		else{
			maior = n;
			menor = m;}
		
		if(m!=0 && n!=0)
		{
			for(i=menor;i<=maior;i++)
			{
				printf("%d ", i);
				sum += i;
			}
			printf("Sum=%d\n", sum);
		}
		sum = 0;
    }
		
	return 0;
}
	
	

