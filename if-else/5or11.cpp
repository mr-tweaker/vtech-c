#include <stdio.h>

int main()

{
	int num;
	printf("Enter any number= ");
	scanf("%d",&num);

	if ( (num % 5 == 0) && (num % 11 == 0) )
	{
		printf("This number is divisible by 11 and 5!\n");
	}
	else
	{
		printf("This number isn't divisible by 11 and 5.\n");
	}

	return 0;
}
