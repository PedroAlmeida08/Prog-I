#include <stdio.h>
#include <string.h>

int main()
{
	int n, ct = 0;
	char codigo[51];
	
	scanf("%d", &n);
	getchar();
	
	for(int i=0;i<n;i++)
	{
		ct = 0;
		gets(codigo);
		
		for(int j=0;j<strlen(codigo);j++)
		{
			if(codigo[j] == ' ')
			ct++;
			if(j == 0 && codigo[0] != ' ')
			printf("%c", codigo[0]); 
			else if(codigo[j] != ' ' && codigo[j-1] == ' ')
			printf("%c", codigo[j]);
			
			if(j == strlen(codigo)-1)
			printf("\n");
		}
	}
	
	return 0;
}
