/*
** Printing Alphabets Pattern
** Assignment 1
**
**      ABCDE
**      ABCD
**      ABC
**      AB
**      A
*/

#include<stdio.h>

int main()
{
    int i, j, row;
    char a;

    printf("Enter number of rows need to print = ");
    scanf("%d", &row);
    printf("Enter the starting character = ");
    scanf(" %c", &a);
    
    // Printing Pyramid    
    
    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %c", j + (a - 1));
        }
        printf("\n");
    }

    /*
    // Another Method
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= (row + 1) - i; j++)
        {
            printf(" %c", j + (a - 1));
        }
        printf("\n");
    }
    */
    return 0;
}
