
/*
** Program To Print Transpose of a Matrix in another Matrix
*/

#include<stdio.h>

#define ROW 3      // Row Value
#define COLUMN 3       // Column Value

int main()
{
    int i, j, SumOfRows, SumOfColumns, array[ROW][COLUMN];

    // Get matrix input from the user
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            printf("Enter the value for row %d and column %d = ", i + 1, j + 1 );
            scanf("%d", &array[i][j]);
        }
    }

    // Sum of Row Elements
    for (i = 0; i < ROW; i++)
    {
        for (j = 0, SumOfRows = 0, SumOfColumns = 0; j < COLUMN; j++)
        {
            SumOfRows += array[i][j];
            SumOfColumns += array[j][i];
        }
        printf("Sum of Elements of Row %d = %d\n", i + 1, SumOfRows);
        printf("Sum of Elements of Columns %d = %d\n", i + 1, SumOfColumns);
    }

    /*
    // Sum of Row Elements
    for (i = 0; i < ROW; i++)
    {
        for (j = 0, SumOfRows = 0; j < COLUMN; j++)
        {
            SumOfRows += array[i][j];
        }
        printf("Sum of Elements of Row %d = %d\n", i + 1, SumOfRows);
    }

    // Sum of Column Elements
    for (i = 0; i < COLUMN; i++)
    {
        for (j = 0, SumOfColumns = 0; j < ROW; j++)
        {
            SumOfColumns += array[j][i];
        }
        printf("Sum of Elements of Columns %d = %d\n", i + 1, SumOfColumns);
    }
    */

    return 0;
}