/*
** Printing Alphabets Pattern
** Assignment 1
** A
** AB
** ABC
** ABCD
** ABCDE
*/

#include<stdio.h>

int main()
{
    int i, j, row, space;
    char a;

    printf("Enter number of rows need to print = ");
    scanf("%d", &row);
    printf("Enter the starting character = ");
    scanf(" %c", &a);
    // printf("%d", (int)a);
    // Printing Pyramid    

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %c", j + (a - 1));
        }
        printf("\n");
    }
    for (i = row - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %c", j + (a - 1));
        }
        printf("\n");
    }
    return 0;
}
