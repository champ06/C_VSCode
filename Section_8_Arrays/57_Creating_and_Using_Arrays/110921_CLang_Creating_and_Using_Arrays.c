/*
** Creating and using Arrays
**
*/

#include<stdio.h>

int main()
{   
    /*
    printf("Creating and using Arrays in C\n");

    int a[5] = {10, 11, 12, 13, 14};

    for (int i = 0; i < 5; i++)
    {
        printf("Array Element at index %d is %d\n", i, a[i]);
    }
    printf("%d", a[5]);
    */
    
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0;

    for (int i = 0; i < count; i++)
    {
        printf("Value of First Element %u = ", i + 1);
        scanf("%d", &grades[i]);
        sum = sum + grades[i];
        
        
    }
    average = (float)sum/count;
    printf("Total Sum = %d\n", sum);
    printf("Average of %d students = %.2f\n", count, average);

    return 0;
}