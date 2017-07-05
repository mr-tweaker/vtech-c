#include <stdio.h>

int main()

{
	int num;
	printf("Enter the number= ");
	scanf("%d",&num);

	if (num > 0)
	{
		printf("This number is positive!\n");
	}
	else if (num < 0)
	{
		printf("This number is negative!\n");
	}
	else
	{
		printf("This number is ZERO.\n");
	}

	return 0;

}
