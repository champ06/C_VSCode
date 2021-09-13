
/*
** Program To Print 2D Array And Calculate the Sum
*/

#include<stdio.h>

#define ROW 2      // Row Value
#define ColUMN 3       // Column Value

int main()
{
    int i, j, array[ROW][ColUMN], sum = 0;

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < ColUMN; j++)
        {
            printf("Enter the value for row %d and column %d = ", i + 1, j + 1 );
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < ROW; i++)
    {
    for (j = 0; j < ColUMN; j++)
        {
            printf("%d\t", array[i][j]);
            sum += array[i][j];
        }
        printf("\n");
    }
    printf("Sum of Array = %d\n", sum);

    return 0;
}


/*
#include<stdio.h>

#define TOTALELEMENTS 5
#define SUMARRAYELEMENTS 2

int main()
{
    int i, array_1[TOTALELEMENTS], array_2[TOTALELEMENTS], Sum_Array[SUMARRAYELEMENTS], sum_1 = 0, sum_2 = 0;

    // For loop to get elements for 1st & 2nd Array
    for (i = 0; i < TOTALELEMENTS; i++)
    {
        printf("Enter the elements for 1st and 2nd Array - Item %d = ", i + 1);
        scanf("%d %d", &array_1[i], &array_2[i]);
        sum_1 += array_1[i];
        sum_2 += array_2[i];
    }

    Sum_Array[0] = sum_1;
    Sum_Array[1] = sum_2;
    
    for (i = 0; i < SUMARRAYELEMENTS; i++)
    {
        printf("Sum of %d Array = %d\n", i + 1, Sum_Array[i]);
    }

    return 0;
}
*/