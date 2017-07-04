#include <stdio.h>

int main()
{
	int length,width,perimeter;
	printf("Enter the length of Rectangle=");
	scanf("%d",&length);

	printf("Enter the width of Rectangle=");
	scanf("%d",&width);

	perimeter = 2 * (length + width);

	printf("Perimeter of the Rectangle is= %d\n",perimeter);

	return 0;
}
