#include <stdio.h>

int main()

{
	int sub1,sub2,sub3,sub4,sub5,total,average,percentage;
	printf("Enter the marks of 1st subject= ");
	scanf("%d",&sub1);

	printf("Enter the marks of 2nd subject= ");
        scanf("%d",&sub2);

	printf("Enter the marks of 3rd subject= ");
        scanf("%d",&sub3);

	printf("Enter the marks of 4th subject= ");
        scanf("%d",&sub4);

	printf("Enter the marks of 5th subject= ");
        scanf("%d",&sub5);

	total = sub1 + sub2 + sub3 + sub4 + sub5;
	average = (sub1 + sub2 + sub3 + sub4 + sub5) / 6;
	percentage = (total * 100) / 500;

	printf("Sum of 5 subjects= %d\n",total);

	printf("Average of 5 subjects= %d\n",average);

	printf("Percentage= %d\n",percentage);

	return 0;
}
