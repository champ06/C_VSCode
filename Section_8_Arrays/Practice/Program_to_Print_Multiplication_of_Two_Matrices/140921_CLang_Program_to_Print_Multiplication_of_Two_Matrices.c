
/*
** Program To Print the multiplication of 2 matrices
*/

// Columns of 1st Matrix = Row of 2nd Matrix

// [1 * 3] * [3 * 4] == [1 * 4] Matrix

#include<stdio.h>

#define MATRIX1_ROW 2       // Row Value
#define MATRIX1_COLUMN 3    // Column Value

#define MATRIX2_ROW 3       // Row Value
#define MATRIX2_COLUMN 2    // Column Value

int main()
{
    int i, j, k, array1[MATRIX1_ROW][MATRIX1_COLUMN], array2[MATRIX2_ROW][MATRIX2_COLUMN];

    // Array 1
    for (i = 0; i < MATRIX1_ROW; i++)
    {
        for (j = 0; j < MATRIX1_COLUMN; j++)
        {
            printf("Enter the Array 1 value for row %d and column %d = ", i + 1, j + 1 );
            scanf("%d", &array1[i][j]);
        }
    }

    // Array 2
    for (i = 0; i < MATRIX2_ROW; i++)
    {
        for (j = 0; j < MATRIX2_COLUMN; j++)
        {
            printf("Enter the Array 2 value for row %d and column %d = ", i + 1, j + 1 );
            scanf("%d", &array2[i][j]);
        }
    }

    // Printing Array 1
    printf("Array 1 \n");
    for (i = 0; i < MATRIX1_ROW; i++)
    {
        for (j = 0; j < MATRIX1_COLUMN; j++)
        {
            printf("%d\t", array1[i][j]);
        }
        printf("\n");
    }

    // Printing Array 2
    printf("Array 2 \n");
    for (i = 0; i < MATRIX2_ROW; i++)
    {
        for (j = 0; j < MATRIX2_COLUMN; j++)
        {
            printf("%d\t", array2[i][j]);
        }
        printf("\n");
    }


    // Array Multiplication Condition checking
    if (MATRIX1_COLUMN == MATRIX2_ROW)
    {
        printf("Array Multiplication is possible and resultant array size is %d * %d\n", MATRIX1_ROW, MATRIX2_COLUMN);
        int ArrayMul[MATRIX1_ROW][MATRIX2_COLUMN] = {0}, ArraySum;
        // Multiplication of 2 Arrays

        for (i = 0; i < MATRIX1_ROW; i++)
        {
            for (j = 0; j < MATRIX2_COLUMN; j++)
            {
                ArraySum = 0;
                for(k = 0; k < MATRIX1_COLUMN; k++)
                {
                    ArraySum += array1[i][k] * array2[k][j];               
                }
                ArrayMul[i][j] = ArraySum;      
                printf("%d\t", ArrayMul[i][j]);   
            }
            printf("\n");
        }

    }

    else
    {
        printf("Array Multiplication is not possible as condition fails\n");
    }

    return 0;
}