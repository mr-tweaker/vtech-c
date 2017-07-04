#include <stdio.h>

int main()
{
        int length,width,area;
        printf("Enter the length of Rectangle= ");
        scanf("%d",&length);

        printf("Enter the width of Rectangle= ");
        scanf("%d",&width);

        area = length * width;

        printf("Area of the Rectangle is= %d\n",area);

        return 0;
}

