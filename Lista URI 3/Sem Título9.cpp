#include <stdio.h>

int main() 
{
	int x, y, i;
 	int j = 0;

	scanf("%d %d", &x, &y);
	
	if((1<x<20) && ((x<y) && (y<100000)))
	{
	for(i=1;i<=y;i++)
	{
		j++;
        if(j==x)
		{
        	printf("%d\n",i);
            j=0;
		}
        else
		{
     		printf("%d ",i);
		}
    }
	}
    return 0;
}


