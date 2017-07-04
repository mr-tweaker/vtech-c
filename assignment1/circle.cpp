#include <stdio.h>

int main ()
{
	int radius,diameter,circumference,area;
	printf("Enter the radius of the Circle= ");
	scanf("%d",&radius);

	diameter = 2 * radius;
	circumference = 2 * 3.14 * radius;
	area = 3.14 * radius * radius;

	printf("Diameter of the Circle is= %d\n",diameter);

	printf("Circumference of the Circle is= %d\n",circumference);

	printf("Area of the Circle is= %d\n",area);

	return 0;
}
