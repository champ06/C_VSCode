/*
https://www.codechef.com/problems/AREAPERI
*/

#include<stdio.h>

int main()
{
    int length, breadth, perimeter, area;

    // Total Test Cases
    scanf("%d\n%d", &length, &breadth);

    perimeter = 2 * (length + breadth);
    area = length * breadth;

    if (area > perimeter)
    {
        printf("Area\n");
        printf("%d\n", area);
    }
    else if (area < perimeter)
    {
        printf("Peri\n");
        printf("%d\n", perimeter);
    }
    else
    {
        printf("Eq\n");
        printf("%d\n", area);
    }

    return 0;
}