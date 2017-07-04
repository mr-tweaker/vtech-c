#include <stdio.h>

int main()

{
	int temp,fahrenheit;
	printf("Enter the temperature in Celsius=");
	scanf("%d",&temp);

	fahrenheit = temp + 273;

	printf("Temperature in Fahrenheit= %d\n",fahrenheit);

	return 0;
}
