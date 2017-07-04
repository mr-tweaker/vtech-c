#include <stdio.h>

int main()

{
        int temp,celsius;
        printf("Enter the temperature in Fahrenehit= ");
        scanf("%d",&temp);

        celsius = temp - 273;

        printf("Temperature in Celsius= %d\n",celsius);

        return 0;
}
