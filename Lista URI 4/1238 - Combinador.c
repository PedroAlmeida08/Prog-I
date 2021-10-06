#include <stdio.h>
#include <string.h>

int main()
{
	int n, t1, t2, maior;
	char str1[255], str2[255];
	
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%s %s", &str1, str2);
		t1 = strlen(str1);
		t2 = strlen(str2);
		if(t1>t2) maior = t1;
		else maior = t2;
		
		for(int j=0; j<maior; j++)
		{
			if(j<t1) printf("%c", str1[j]);
			if(j<t2) printf("%c", str2[j]);
		}
		printf("\n");
	}
	
	return 0;
}
