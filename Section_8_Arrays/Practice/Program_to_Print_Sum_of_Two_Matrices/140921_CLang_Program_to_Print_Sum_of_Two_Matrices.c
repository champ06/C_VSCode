
/*
** Program To Print the sum of 2 matrices
*/

#include<stdio.h>

#define ROW 3      // Row Value
#define COLUMN 3       // Column Value

int main()
{
    int i, j, SumOfMatrices[ROW][COLUMN], array1[ROW][COLUMN], array2[ROW][COLUMN];

    // Array 1
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            printf("Enter the Array 1 value for row %d and column %d = ", i + 1, j + 1 );
            scanf("%d", &array1[i][j]);
        }
    }

    // Array 2
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            printf("Enter the Array 2 value for row %d and column %d = ", i + 1, j + 1 );
            scanf("%d", &array2[i][j]);
        }
    }

    // Sum of 2 rows Elements
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            SumOfMatrices[i][j] = array1[i][j] + array2[i][j];
            printf("%d\t", SumOfMatrices[i][j]);
        }
    }

/*
    // Printing of Resultant Array
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            printf("%d\t", SumOfMatrices[i][j]);
        }
        printf("\n");
    }
*/
    return 0;
}