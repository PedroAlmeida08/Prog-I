#include <stdio.h>

int main()
{
	int i, n, m, maior, menor;
	int sum = 0;
	
	while(1)
	{
		scanf("%d %d", &m, &n);
		
		if(m<=0 || n<=0)
			break;
		else if (m==n)
		{
			printf("%d Sum=%d\n", m, n);
		}
		else
		{
		if(m>n){
			maior = m;
			menor = n;}
		else{
			maior = n;
			menor = m;}
		
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
	
	

