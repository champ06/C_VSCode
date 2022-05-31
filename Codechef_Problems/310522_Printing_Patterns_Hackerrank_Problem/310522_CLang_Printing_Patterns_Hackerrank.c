/*
 * Printing Alphabets Pattern
 * input n = 5
 *
 * 5 5 5 5 5 5 5 5 5 
 * 5 4 4 4 4 4 4 4 5 
 * 5 4 3 3 3 3 3 4 5 
 * 5 4 3 2 2 2 3 4 5 
 * 5 4 3 2 1 2 3 4 5 
 * 5 4 3 2 2 2 3 4 5 
 * 5 4 3 3 3 3 3 4 5 
 * 5 4 4 4 4 4 4 4 5 
 * 5 5 5 5 5 5 5 5 5
 */

#include<stdio.h>

int main()
{
    int i, j, row;

    printf("Enter number of rows need to print = ");
    scanf("%d", &row);

    for (i = row; i > 0; i--)
    {
        printf("%d", row);
        // for(j = row; j > 0; j--)
        // {
        //     printf("%d", j);
        // }
        // printf("\n");
    }

    return 0;
}
