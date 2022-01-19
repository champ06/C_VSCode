/*
* Array as a Function Arguments 
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int SumOfAllElements(int a[], int size)
{
    int i, sum = 0;
    
    for (i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int total = 0;

    int size = sizeof(a)/sizeof(a[0]);
    printf("Size of Array = %d\n", size);
    
    total = SumOfAllElements(a, size);
    printf("Sum of All Elements = %d\n", total);
    
    return 0;
}