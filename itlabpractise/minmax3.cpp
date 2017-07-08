#include <stdio.h>

int main()

{
	int maximum,a,b,c;
	printf("Enter the first number here= ");
	scanf("%d",&a);

	printf("Enter the second number here= ");
	scanf("%d",&b);

	printf("Enter the third number here= ");
	scanf("%d",&c);

	if(a > b && a > c)
	{
		printf("A is greatest");
	}
	if(b > c)
	{
		printf("B is greatest");
	}
	else
	{
		printf("C is greatest");
	}

	return 0;

}

