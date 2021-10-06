#include <stdio.h>

int main() 
{
	int x, y, i, j;

 	j=0;

	scanf("%d %d", &x, &y);
	
	if((1<x<20) && ((x<y) && (y<100000)))
	{
	for(i=1;i<=y;i++)
	{
        for(j=0;j<x-1;j++)
		{
     		printf("%d ",i);
		}
		printf("%d\n",i);
        j=0;
    }
	}
    return 0;
}


