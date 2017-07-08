#include <stdio.h>

int main()

{
	int p,r,t,si;
	printf("Enter the principle amount= ");
	scanf("%d",&p);

	printf("Enter the rate of interest= ");
	scanf("%d",&r);

	printf("Enter the time given= ");
	scanf("%d",&t);

	si= p * r * (1 + t) / 100;

	printf("The simple interest is= %d\n",si);

	return 0;

}
