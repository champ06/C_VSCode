/*
** Printing Pat
** Assignment 1
**       *
**      * *
**     * * *
**    * * * *
**   * * * * *
*/

#include<stdio.h>

int main()
{
    int i, j, num, space;

    printf("Enter number of rows need to print = ");
    scanf("%d", &num);

    /*
    // Method 1

    for (i = 1; i <= num; ++i)
    {
        for (j = 1; j <= num; ++j)
        {
            if ((i + j) <= num)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
    */

    // Method 2
    for (i = 1; i <= num; i++)
    {
        for (space = 1; space <= (num - i); space++)
        {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
