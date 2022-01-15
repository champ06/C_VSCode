/*
** Printing Pat
** Assignment 1
**      *
**      **
**      ***
**      ****
**      *****
**      ****
**      ***
**      **
**      *
*/

#include<stdio.h>

int main()
{
    int i, j, num, space;

    printf("Enter number of rows need to print = ");
    scanf("%d", &num);

    // Printing Pyramid    
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n"); 
    }

    for (i = num - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n"); 
    }
    /*
    // Printing Inverted Pyramid
    for (i = num - 1; i >= 1; i--)
    {
        for (space = 1; space <= (num - i); space++)
        {
            printf(" ");
        }
        
        for (j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n"); 
    }*/

    return 0;
}
