#include <stdio.h>

int main()

{
	int a,b,c;
	printf("Enter base=");
	scanf("%d",&a);

	printf("Enter exponent=");
	scanf("%d",&b);

	c = a ^ b;

	printf("Result is = %d\n",c);

	return 0;
}
