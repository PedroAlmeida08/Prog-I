#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, temp, medio, menor;
	
	scanf("%f %f %f", &a, &b, &c);
	
	if (b > a && b > c)
	{
		temp = b;
		b = a;
		a = temp;
	}
	
	if (c > a && c > b)
	{
		temp = c;
		c = a;
		a = temp;
	}
	
	if (b > c)
	{	
		medio = b;
		menor = c;
	}	
			else if (c > b)
			{
				medio = c;
				menor = b;
			}
	
	if (a >= (b + c))
		printf("NAO FORMA TRIANGULO\n");
		
			else
			{
				if (pow(a,2) == (pow(b,2) + pow(c,2)))
					printf("TRIANGULO RETANGULO\n");
				
				if ((a*a) > ((b*b) + (c*c)))
					printf("TRIANGULO OBTUSANGULO\n");
						
				if (pow(a,2) < (pow(b,2) + pow(c,2)))
					printf("TRIANGULO ACUTANGULO\n");
								
				if (a == b && b == c)
					printf("TRIANGULO EQUILATERO\n");
										
				if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
					printf("TRIANGULO ISOSCELES\n");
			}
	
	return 0;
}
