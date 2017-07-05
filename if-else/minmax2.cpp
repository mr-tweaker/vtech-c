#include <stdio.h>

int main()

{
	int num1,num2;
	printf("Enter the First Number= ");
	scanf("%d", &num1);

	printf("Enter the Second Number= ");
	scanf("%d", &num2);

	if (num1 > num2)
	{
		printf("%d is bigger.\n", num1);
	}
	else
	{
		printf("%d is bigger.\n", num2);
	}

	return 0;

}
