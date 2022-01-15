
/*
** Calculate the marks of 5 subjects for 5 students
*/

#include<stdio.h>

#define STUDENTS 5      // Row Value
#define SUBJECTS 5       // Column Value

int main()
{
    int i, j, marks[STUDENTS][SUBJECTS];

    for (i = 0; i < STUDENTS; i++)
    {
        for (j = 0; j < SUBJECTS; j++)
        {
            printf("Enter the subject %d marks for student %d = ", j + 1, i + 1 );
            scanf("%d", &marks[i][j]);
        }
    }
    
    for (i = 0; i < STUDENTS; i++)
    {
        for (j = 0; j < SUBJECTS; j++)
        {
            printf("Subject %d marks %d for student %d\n", j + 1, marks[i][j], i + 1);
            // scanf("%d", marks[i][j]);
        }
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