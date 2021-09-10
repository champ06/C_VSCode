/*
** Printing Alphabets Pattern
** Assignment 
**
**      A
**      BB
**      CCC
**      DDDD
**      EEEEE
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

    for (i = 1; i <= row; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", (a - 1) + i);
        }
        printf("\n");
    }

    return 0;
}
