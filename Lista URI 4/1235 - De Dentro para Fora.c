#include <stdio.h>
#include <string.h>

int main()
{
	char frases[255], aux1, aux2;
	int n, tam, mid, i, j;
	
	scanf("%d", &n);
	getchar();
	
	for(j=0;j<n;j++)
	{
		scanf("%[^\n]", frases);
		getchar();
		tam = strlen(frases);
		mid = tam/2;
		
		for(i=mid-1;i>=0;i--)
		{
   		printf("%c",frases[i]);
		}
		for(i=tam-1;i>=mid;i--){
   		printf("%c",frases[i]);
		}
		printf("\n");
	}
	
	return 0;
}
