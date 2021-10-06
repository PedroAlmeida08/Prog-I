#include <stdio.h>
#include <string.h>

int main()
{
	int n, ct;
	char a[1001],b[1001];
	
	scanf("%d",&n);
	getchar();
	
	for(int x=0; x<n; x++)
		{
		ct = 0;
		scanf("%s %s",&a,&b);
		
		for(int j=strlen(b),i=strlen(a);j>=0; j--,i--)
		{
			if(b[j] == a[i]) 
			ct++;
		}
			
		if(ct == strlen(b)+1)
		{
			printf("encaixa\n");
		}
		else 
			printf("nao encaixa\n");
		}	
	
    return 0;
}
