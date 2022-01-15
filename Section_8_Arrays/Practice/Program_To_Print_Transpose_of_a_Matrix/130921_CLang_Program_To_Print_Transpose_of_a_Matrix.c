
/*
** Program To Print Transpose of a Matrix
*/

#include<stdio.h>

#define ROW 2      // Row Value
#define COLUMN 3       // Column Value

int main()
{
    int i, j, array[ROW][COLUMN], sum = 0;

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            printf("Enter the value for row %d and column %d = ", i + 1, j + 1 );
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < COLUMN; i++)
    {
        for (j = 0; j < ROW; j++)
        {
            printf("%d\t", array[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}