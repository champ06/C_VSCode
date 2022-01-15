
/*
** Program To Print Transpose of a Matrix in another Matrix
*/

#include<stdio.h>

#define ROW 2      // Row Value
#define COLUMN 3       // Column Value

int main()
{
    int i, j, array[ROW][COLUMN], transArray[COLUMN][ROW];

    // Get matrix input from user
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            printf("Enter the value for row %d and column %d = ", i + 1, j + 1 );
            scanf("%d", &array[i][j]);
        }
    }

    // To store transposed matrix in another matix
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            transArray[j][i] = array[i][j];
        }
    }

    // To print Transposed Matrix
    for (i = 0; i < COLUMN; i++)
    {
        for (j = 0; j < ROW; j++)
        {
            printf("%d\t", transArray[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}