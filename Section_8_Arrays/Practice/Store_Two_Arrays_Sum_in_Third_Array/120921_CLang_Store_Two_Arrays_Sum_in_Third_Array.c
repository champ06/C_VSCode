/*
** Calculate the sum of 2 arrays and store the result in 3rd array
*/

#include<stdio.h>

#define TOTALELEMENTS 5
// #define SUMARRAYELEMENTS 2

int main()
{
    int i, array_1[TOTALELEMENTS], array_2[TOTALELEMENTS], Sum_Array[TOTALELEMENTS] = 0;

    // For loop to get elements for 1st & 2nd Array
    for (i = 0; i < TOTALELEMENTS; i++)
    {
        printf("Enter the elements for 1st and 2nd Array - Item %d = ", i + 1);
        scanf("%d %d", &array_1[i], &array_2[i]);
        
        Sum_Array[i] = array_1[i] + array_2[i];
    }

    for (i = 0; i < TOTALELEMENTS; i++)
    {
        printf("Sum of array element at index %d = %d\n", i + 1, Sum_Array[i]);
    }

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