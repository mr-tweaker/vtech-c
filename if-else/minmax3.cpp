#include <stdio.h>

int main()

{
	int num1,num2,num3,maximum;
	printf("Enter the First Number= ");
	scanf("%d",&num1);

	printf("Enter the Second Number= ");
	scanf("%d",&num2);

	printf("Enter the Third Number= ");
	scanf("%d",&num3);

	if( (num1 > num2) && (num1 > num3) )
	{
		maximum=num1;
	}
	else if ( (num2 > num1) && (num2 > num3) )
	{
		maximum=num2;
	}
	else if ( (num3 > num1) && (num3 > num2) )
	{
		maximum=num3;
	}

	printf("Maximum among 3 numbers= %d\n",maximum);

	return 0;
}
