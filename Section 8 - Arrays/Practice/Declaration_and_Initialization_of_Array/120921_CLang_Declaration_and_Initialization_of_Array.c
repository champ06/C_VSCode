/*
** Create a Simple Weather Program
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    // int b = 5;
    int a[5], i;

    for (i = 0; i < 5; ++i)
    {
        printf("Enter the value for element %d = ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("Element %d value is %d\n", i + 1, a[i]);
    }   
    printf("\n");
    // Printing in reverse order
    for (i = 4; i >= 0; i--)
        printf("Element %d value is %d\n", i + 1, a[i]);

    return 0;
}