/*
** Printing Pat
** Assignment 1
**   1
**   2 2
**   3 3 3
**   4 4 4 4
**   5 5 5 5 5
*/

#include<stdio.h>

int main()
{
    int i, j, num;

    printf("Enter number of rows need to print = ");
    scanf("%d", &num);

    for (i = 1; i <= num; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            /*
            if (i + j <= num)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
            */
            printf("%d ", i);
            // printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
