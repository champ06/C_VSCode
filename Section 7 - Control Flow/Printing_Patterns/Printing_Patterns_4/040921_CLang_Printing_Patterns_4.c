/*
** Printing patterns
**      1
**      1 2 
**      1 2 3
**      1 2 3 4
**      1 2 3 4 5
*/

#include<stdio.h>

int main()
{
    int num, i, j;

    printf("Enter the number of rows to print = ");
    scanf("%d", &num);
    
    for(i = 1; i <= num; ++i)
    {
        for(j = 1; j <= i; ++j) 
        {
            printf("%d ", j);
            // printf("%d ", i);
        }
        printf("\n");
    }
    
    /*
    for(i = num; i >= 1; --i)
    {
        for(j = 1; j <= i; ++j) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    */
    return 0;
}