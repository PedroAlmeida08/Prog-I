#include <stdio.h>

float cpk(float celsius, float kelvin);
float kpf(float kelvin, float fahrenheit);
float cpf(float celsius, float fahrenheit);

int main()
{
	float c;
	
	scanf("%f", &c);
	
	printf("%.2f Celsius para Kelvin = %.2f\n", cpk(c,kelvin));
	
	return 0;
}

float cpk(float celsius)
{
	float kelvin;
	kelvin = celsius + 273;
	
	return kelvin;
}
float cpf(float celsius)
{
	float fahrenheit;
	
	fahrenheit = (((celsius+273)-273)*1,8)+32;
	
	return fahrenheit;
}
float kpf(float kelvin)
{
	float fahrenheit;
	
	fahrenheit = ((kelvin-273)*1,8)+32;
	
	return fahrenheit;
}

float
