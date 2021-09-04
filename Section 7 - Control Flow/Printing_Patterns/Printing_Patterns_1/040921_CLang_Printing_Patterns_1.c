/*
** Printing patterns
**      *****
**      *****
**      *****
**      *****
**      *****
*/

#include<stdio.h>

int main()
{
    int num = 0;

    printf("Enter the number to print the pattern of (*) stars = ");
    scanf("%d", &num);

    for (int i = 0 ; i <= num ; i++)
    {
        for (int j = num; j >= 1; --j)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}