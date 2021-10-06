#include<stdio.h>

int main()
{
	int x, y;
	
	scanf("%d%d", &x, &y);

	while(x <= y)
	{
		printf("%d\n", x);
		x++;
	}
	while(y <= x)
	{
	
		printf("%d\n", y);
		y++;
	}	

	return 0;
}
