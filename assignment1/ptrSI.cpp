#include <stdio.h>

int main()

{
	int p,t,r,si;
	printf("Enter the principle= ");
	scanf("%d",&p);

	printf("Enter the time= ");
	scanf("%d",&t);

	printf("Enter the rate of interest= ");
	scanf("%d",&r);

	si = p * (1 + r * t);

	printf("Simple interest is= %d\n",si);

	return 0;
}
