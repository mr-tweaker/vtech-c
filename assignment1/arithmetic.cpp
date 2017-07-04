#include <stdio.h>

int main ()

{
	int a,b,add,sub,mul,div,mod;
	printf("Enter The First number=");
	scanf("%d",&a);

	printf("Enter The Second Number=");
	scanf("%d",&b);

	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	mod = a % b;

	printf("Addition of the First Two Numbers is= %d\n",add);

	printf("Subtraction of the First Two Numbers is= %d\n",sub);

	printf("Multiplication of first Two Numbers is= %d\n",mul);

	printf("Division of the First Two Numbers is= %d\n",div);

	printf("Modulus of the First Two Numbers is= %d\n",mod);

	return 0;
}
