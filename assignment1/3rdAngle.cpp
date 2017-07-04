#include <stdio.h>

int main ()

{
	int a,b,c;
	printf("Enter the first angle= ");
	scanf("%d",&a);

	printf("Enter the second angle= ");
	scanf("%d",&b);

	c = 180 - (a+b);

	printf("The 3rd angle is = %d\n",c);

	return 0;
}
