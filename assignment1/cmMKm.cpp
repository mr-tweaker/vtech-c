#include <stdio.h>

int main()

{
	int length,meter,kilometer;
	printf("Enter the length (in cm)=");
	scanf("%d",&length);

	meter = length / 100;
	kilometer = length / 1000;

	printf("Length in meters= %d\n",meter);

	printf("Length in kilometers= %d\n",kilometer);

	return 0;
}
