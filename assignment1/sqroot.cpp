#include <stdio.h>

int main()

{
	double num,root;
	printf("Enter the number= ");
	scanf("%lf",&num);

	root = sqrt(num);

	printf("Square root of %.2lf = %.2lf", num, root);

	return 0;
}
